#include "../../idlib/precompiled.h"
#pragma hdrstop

#include "../tr_local.h"

idStencilTexture stencilTexture;

void R_CreateStencilTextureDepthStencilTexture(idImage* image)
{
	int w = MakePowerOfTwo(stencilTexture.width);
	int h = MakePowerOfTwo(stencilTexture.height);

	image->GenerateDepthStencilImage(
		w,
		h,
		false,
		TF_NEAREST,
		TR_CLAMP,
		24,
		8,
		false
	);
}

idStencilTexture::idStencilTexture()
	: width(-1),
	height(-1),
	fb(NULL),
	depthStencilTexture(NULL)
{
}

bool idStencilTexture::Init(int w, int h)
{
	if (fb) {
		if (w != width || h != height) {
			Shutdown();
		}
		else {
			return true;
		}
	}

	width = w;
	height = h;

	fb = new idFramebuffer(
		"idStencilTexture",
		width,
		height
	);

	depthStencilTexture = new idImage;
	depthStencilTexture->imgName =
		"idStencilTexture_depthStencil";

	R_CreateStencilTextureDepthStencilTexture(
		depthStencilTexture
	);

	fb->Bind();

#ifdef GL_ES_VERSION_3_0
	GLenum drawbuf = GL_NONE;
	qglDrawBuffers(1, &drawbuf);
#endif

	fb->AttachImageDepthStencil(depthStencilTexture);
	fb->Check();
	fb->Unbind();

	return true;
}

void idStencilTexture::Shutdown(void)
{
	if (fb) {
		fb->Purge();
		delete fb;
		fb = NULL;
	}

	if (depthStencilTexture) {
		depthStencilTexture->PurgeImage();
		delete depthStencilTexture;
		depthStencilTexture = NULL;
	}
}

void idStencilTexture::Begin(void)
{
	assert(fb);
	fb->Bind();
}

void idStencilTexture::End(void)
{
	assert(fb);
	fb->Unbind();
}

void idStencilTexture::Bind(void)
{
#ifdef GL_ES_VERSION_3_0
	assert(depthStencilTexture);

	depthStencilTexture->Bind();

	qglTexParameteri(
		GL_TEXTURE_2D,
		GL_DEPTH_STENCIL_TEXTURE_MODE,
		GL_STENCIL_INDEX
	);
#endif
}

void idStencilTexture::BlitDepth(void)
{
#ifdef GL_ES_VERSION_3_0
	assert(fb);

	GLint previousDrawFramebuffer = 0;

	qglGetIntegerv(
		GL_DRAW_FRAMEBUFFER_BINDING,
		&previousDrawFramebuffer
	);

	const bool isScissorTest =
		qglIsEnabled(GL_SCISSOR_TEST);

	if (isScissorTest) {
		qglDisable(GL_SCISSOR_TEST);
	}

	qglBindFramebuffer(
		GL_DRAW_FRAMEBUFFER,
		fb->GetFramebuffer()
	);

	qglBlitFramebuffer(
		0, 0, width, height,
		0, 0, width, height,
		GL_DEPTH_BUFFER_BIT,
		GL_NEAREST
	);

	qglBindFramebuffer(
		GL_DRAW_FRAMEBUFFER,
		previousDrawFramebuffer
	);

	if (isScissorTest) {
		qglEnable(GL_SCISSOR_TEST);
	}

	backEnd.glState.currentFramebuffer = NULL;
#endif
}

int idStencilTexture::UploadWidth(void) const
{
	assert(depthStencilTexture);
	return depthStencilTexture->uploadWidth;
}

int idStencilTexture::UploadHeight(void) const
{
	assert(depthStencilTexture);
	return depthStencilTexture->uploadHeight;
}

void idStencilTexture::BlitStencil(void)
{
#ifdef GL_ES_VERSION_3_0
	assert(fb);

	GLint previousDrawFramebuffer = 0;

	qglGetIntegerv(
		GL_DRAW_FRAMEBUFFER_BINDING,
		&previousDrawFramebuffer
	);

	const bool isScissorTest =
		qglIsEnabled(GL_SCISSOR_TEST);

	if (isScissorTest) {
		qglDisable(GL_SCISSOR_TEST);
	}

	qglBindFramebuffer(
		GL_DRAW_FRAMEBUFFER,
		fb->GetFramebuffer()
	);

	qglBlitFramebuffer(
		0, 0, width, height,
		0, 0, width, height,
		GL_STENCIL_BUFFER_BIT,
		GL_NEAREST
	);

	qglBindFramebuffer(
		GL_DRAW_FRAMEBUFFER,
		previousDrawFramebuffer
	);

	if (isScissorTest) {
		qglEnable(GL_SCISSOR_TEST);
	}

	backEnd.glState.currentFramebuffer = NULL;
#endif
}

bool idStencilTexture::IsAvailable(void)
{
	return USING_GLES3;
}