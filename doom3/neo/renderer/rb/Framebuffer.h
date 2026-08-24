#ifndef __FRAMEBUFFER_H__
#define __FRAMEBUFFER_H__

#include <cstdint>
#include <vector>
#include <string>
#include "renderer/VectorAdapter.h"

// Forward declarations to avoid heavy includes in the header
class idImage;
class StencilTexture;

class idFramebuffer {
public:
    idFramebuffer(const char* name, int width, int height);
    ~idFramebuffer();

    void Purge();

    void Bind();
    void Unbind();
    void BindDirectly();
    void UnbindDirectly();

    void AddColorBuffer(int format, int index);
    void AddDepthBuffer(int format);
    void AddDepthStencilBuffer(int format);
    void AddStencilBuffer(int format);
    void AttachColorBuffer();
    void AttachDepthBuffer();
    void AttachDepthStencilBuffer();
    void AttachStencilBuffer();

    void AttachImage2D(int target, const idImage* image, int index = 0);
    void AttachImageDepth(const idImage* image);
    void AttachImageDepthStencil(const idImage* image);
    void AttachImageDepthLayer(const idImage* image, int layer);
    void AttachImage2DLayer(const idImage* image, int layer);
    void AttachImage2D(const idImage* image);
    void AttachImageDepthSide(const idImage* image, int side);
    void AttachImage2DSide(const idImage* image, int side);
  
    // GL-agnostic signature: use uint32_t for texture id and int for target
    void AttachTexture2D(uint32_t tex, int index, int target = 0);

    void Check();

    uint32_t GetFramebuffer() const { return frameBuffer; }
    const char* GetName() const { return fboName.c_str(); }

    int Width() const { return width; }
    int Height() const { return height; }

private:
    void PrintFramebuffer();

public:
    std::string fboName;

    uint32_t frameBuffer;
    uint32_t colorBuffers[16];
    int colorFormat;

    uint32_t depthBuffer;
    int depthFormat;

    uint32_t stencilBuffer;
    int stencilFormat;

    int width;
    int height;
};

#ifdef _POSTPROCESS
extern idFramebuffer* hdrSceneFramebuffer;
extern idFramebuffer* mirrorFramebuffer;
extern idFramebuffer* hdrBloomFramebufferA;
extern idFramebuffer* hdrBloomFramebufferB;
extern idFramebuffer* hdrLuminanceFramebufferA;
extern idFramebuffer* hdrLuminanceFramebufferB;
extern idFramebuffer* hdrLuminanceFramebufferC;
extern idFramebuffer* hdrLuminanceFramebufferD;
extern idFramebuffer* hdrLuminanceFramebufferE;
extern idFramebuffer* hdrExposureFramebufferA;
extern idFramebuffer* hdrExposureFramebufferB;
extern idFramebuffer* gtaoFramebufferA;
extern idFramebuffer* gtaoFramebufferB;
#endif

class Framebuffer {
public:
    static void Init();
    static void Shutdown();
    static void BindNull();
    static void Default();
    static void Append(idFramebuffer* fb);
    static idFramebuffer* Alloc(const char* name, int width, int height);
    static idFramebuffer* Find(const char* name);
    static VectorAdapter<idFramebuffer*> framebuffers;
};

#ifdef _SHADOW_MAPPING
#if 1
static int shadowMapResolutions[MAX_SHADOWMAP_RESOLUTIONS] = { 2048, 1024, 512, 512, 256 };
#else
static int shadowMapResolutions[MAX_SHADOWMAP_RESOLUTIONS] = { 1024, 1024, 1024, 1024, 1024 };
#endif
struct globalFramebuffers_t {
    idFramebuffer* shadowFBO[MAX_SHADOWMAP_RESOLUTIONS];
};
extern globalFramebuffers_t globalFramebuffers;
#endif

#endif // __FRAMEBUFFER_H__
