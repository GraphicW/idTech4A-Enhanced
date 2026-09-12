idCVar r_renderMode(
    "r_renderMode", "0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_INTEGER, "retro postprocess render. 0 = Doom, 1 = CGA, 2 = CGA Highres, 3 = Commodore 64, 4 = Commodore 64 Highres, 5 = Amstrad CPC 6128, 6 = Amstrad CPC 6128 Highres, 7 = Sega Genesis, 8 = Sega Genesis Highres, 9 = Sony PSX", 0, 9, idCmdSystem::ArgCompletion_Integer<0, 9> );

idCVar r_retroDitherScale(
    "r_retroDitherScale", "0.3",
    CVAR_RENDERER | CVAR_FLOAT, "" );

idCVar r_hdrExposure( 
    "r_hdrExposure", 
    "1.0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT, "HDR tone-mapping exposure");

idCVar r_hdrGamma(
    "r_hdrGamma",
    "1.0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "HDR gamma correction");

idCVar r_hdrSaturation(
    "r_hdrSaturation",
    "1.0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "HDR color saturation");

idCVar r_hdrContrast(
    "r_hdrContrast",
    "1.0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "HDR contrast");

idCVar r_hdrLutEnable(
    "r_hdrLutEnable",
    "0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_BOOL,
    "Enable HDR LUT color grading");

idCVar r_hdrLutStrength(
    "r_hdrLutStrength",
    "0.25",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "HDR LUT color grading strength");

idCVar r_hdrLutName(
    "r_hdrLutName",
    "true_neutral_film",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "HDR LUT name from base/LUTs without .cube extension");

idCVar r_hdrLutAuto(
    "r_hdrLutAuto",
    "0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_BOOL,
    "Automatically select HDR LUT based on map"
);

idCVar r_hdrMultiLutEnable(
    "r_hdrMultiLutEnable",
    "0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_BOOL,
    "Enable four-slot HDR multi-LUT color grading"
);

idCVar r_lutFile1(
    "r_lutFile1",
    "LUTs/natural_realistic.cube",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "Multi-LUT slot 1 .cube file"
);

idCVar r_lutFile2(
    "r_lutFile2",
    "LUTs/true_neutral_film.cube",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "Multi-LUT slot 2 .cube file"
);

idCVar r_lutFile3(
    "r_lutFile3",
    "LUTs/color_accuracy.cube",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "Multi-LUT slot 3 .cube file"
);

idCVar r_lutFile4(
    "r_lutFile4",
    "LUTs/interior_lowlight.cube",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "Multi-LUT slot 4 .cube file"
);

idCVar r_lutBlend1(
    "r_lutBlend1",
    "0.48",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "Multi-LUT slot 1 blend weight"
);

idCVar r_lutBlend2(
    "r_lutBlend2",
    "0.28",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "Multi-LUT slot 2 blend weight"
);

idCVar r_lutBlend3(
    "r_lutBlend3",
    "0.18",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "Multi-LUT slot 3 blend weight"
);

idCVar r_lutBlend4(
    "r_lutBlend4",
    "0.24",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "Multi-LUT slot 4 blend weight"
);

idCVar r_hdrBloomEnable(
    "r_hdrBloomEnable",
    "1",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_BOOL,
    "Enable HDR bloom"
);

idCVar r_hdrBloomThreshold(
    "r_hdrBloomThreshold",
    "1.0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "HDR bloom threshold"
);

idCVar r_hdrBloomStrength(
    "r_hdrBloomStrength",
    "0.05",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "HDR bloom strength"
);

idCVar r_hdrBloomKnee(
    "r_hdrBloomKnee",
    "0.75",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "HDR bloom soft threshold knee"
);

idCVar r_hdrAutoExposure(
    "r_hdrAutoExposure",
    "1",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_BOOL,
    "Enable HDR auto exposure"
);

idCVar r_hdrExposureMin(
    "r_hdrExposureMin",
    "0.50",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "Minimum auto exposure"
);

idCVar r_hdrExposureMax(
    "r_hdrExposureMax",
    "1.75",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "Maximum auto exposure"
);

idCVar r_hdrAdaptationSpeed(
    "r_hdrAdaptationSpeed",
    "4.0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "Auto exposure adaptation speed"
);

idCVar r_hdrMiddleGray(
    "r_hdrMiddleGray",
    "0.18",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "HDR auto exposure middle gray reference"
);
idCVar r_hdrAdaptationBrightenSpeed(
    "r_hdrAdaptationBrightenSpeed",
    "1.5",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "HDR auto exposure speed when scene needs to brighten"
);

idCVar r_hdrAdaptationDarkenSpeed(
    "r_hdrAdaptationDarkenSpeed",
    "1.0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "HDR auto exposure speed when scene needs to darken"
);

idCVar r_hdrExposureDeadZone(
    "r_hdrExposureDeadZone",
    "0.02",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "HDR auto exposure dead zone to suppress tiny exposure adjustments"
);

idCVar r_hdrCASEnable(
    "r_hdrCASEnable",
    "1",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_BOOL,
    "Enable CAS sharpening"
);

idCVar r_hdrCASStrength(
    "r_hdrCASStrength",
    "0.20",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_FLOAT,
    "CAS sharpening strength"
);

idCVar r_hdrDebugExposure(
    "r_hdrDebugExposure",
    "0",
    CVAR_RENDERER | CVAR_BOOL,
    "Print HDR luminance and exposure values"
);

idCVar r_ssgi(
    "r_ssgi",
    "1",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_BOOL,
    "Enable SSGI"
);

idCVar r_ssgiHistoryWeight(
    "r_ssgiHistoryWeight",
    "0.80",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "SSGI temporal history blend weight"
);

idCVar r_ssgiDepthThreshold(
    "r_ssgiDepthThreshold",
    "0.003",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "SSGI history depth compatibility threshold"
);

idCVar r_ssgiNormalThreshold(
    "r_ssgiNormalThreshold",
    "0.90",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "SSGI history normal compatibility threshold"
);

idCVar r_ssgiIndirectScale(
    "r_ssgiIndirectScale",
    "0.15",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "SSGI indirect lighting scale"
);

idCVar r_ao(
    "r_ao",
    "1",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "Enable ambient occlusion"
);

idCVar r_aoIntensity(
    "r_aoIntensity",
    "1.0",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "AO intensity"
);

idCVar r_aoRadius(
    "r_aoRadius",
    "1.0",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "AO radius"
);

idCVar r_aoThickness(
    "r_aoThickness",
    "1.0",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "AO thickness rejection"
);

idCVar r_aoNormalReject(
    "r_aoNormalReject",
    "0.35",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "AO normal rejection"
);

idCVar r_aoSamples(
    "r_aoSamples",
    "8",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "AO sample count"
);

idCVar r_gtao(
    "r_gtao",
    "1",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_BOOL,
    "Enable GTAO"
);

idCVar r_gtaoStrength(
    "r_gtaoStrength",
    "0.20",
    CVAR_RENDERER | CVAR_ARCHIVE,
    "GTAO intensity"
);

idCVar r_gtaoDebugHistory(
    "r_gtaoDebugHistory",
    "0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_BOOL,
    "Debug GTAO history framebuffer"
);

idCVar r_gtaoDirections(
    "r_gtaoDirections",
    "8",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_INTEGER,
    "Number of GTAO horizon directions"
);

enum HDRLutPreset
{
    HDRLUT_TRUE_NEUTRAL_FILM,
    HDRLUT_NATURAL_REALISTIC,
    HDRLUT_COLOR_ACCURACY,
    HDRLUT_INTERIOR_LOWLIGHT,
    HDRLUT_EXTERIOR_DAYLIGHT,
    HDRLUT_METALLIC_SURFACE,
    HDRLUT_SHADOW_REGION,
    HDRLUT_ULTRA_SKIN,
    HDRLUT_EMISSIVE,
    HDRLUT_COUNT
};

static int RB_GetAutoHDRLut()
{
    const char* siMap = cvarSystem->GetCVarString("si_map");

    if (!siMap || !siMap[0]) {
        return HDRLUT_TRUE_NEUTRAL_FILM;
    }

    idStr map = siMap;
    map.ToLower();

    if (map.Find("marscity") >= 0) {
        return HDRLUT_TRUE_NEUTRAL_FILM;
    }

    if (map.Find("admin") >= 0) {
        return HDRLUT_INTERIOR_LOWLIGHT;
    }

    if (map.Find("alphalabs") >= 0) {
        return HDRLUT_COLOR_ACCURACY;
    }

    if (map.Find("deltalabs") >= 0) {
        return HDRLUT_COLOR_ACCURACY;
    }

    if (map.Find("hell") >= 0) {
        return HDRLUT_SHADOW_REGION;
    }

    if (map.Find("caverns") >= 0) {
        return HDRLUT_SHADOW_REGION;
    }

    return HDRLUT_TRUE_NEUTRAL_FILM;
}


idCVar r_hdrLut(
    "r_hdrLut",
    "0",
    CVAR_RENDERER | CVAR_ARCHIVE | CVAR_INTEGER,
    "HDR LUT preset",
    0,
    HDRLUT_COUNT - 1,
    idCmdSystem::ArgCompletion_Integer<0, HDRLUT_COUNT - 1>
);

static const int HDR_MULTI_LUT_COUNT = 4;

typedef struct hdrLutSlot_s
{
    GLuint texture;
    int size;
    idStr loadedPath;
    bool valid;
} hdrLutSlot_t;

// Slot zero is also used by the legacy single-LUT path.
static hdrLutSlot_t hdrLutSlots[HDR_MULTI_LUT_COUNT] = {};

static bool hdrExposureWriteToB = true;
static bool hdrExposureResultIsB = false;

static const char* hdrLutNames[HDRLUT_COUNT] =
{
    "true_neutral_film",
    "natural_realistic",
    "color_accuracy",
    "interior_lowlight",
    "exterior_daylight",
    "metallic_surface",
    "shadow_region",
    "ultra_skin",
    "emissive"
};

static float RB_HDR_CalculateLuminance(
    float r,
    float g,
    float b)
{
    return
        r * 0.2126f +
        g * 0.7152f +
        b * 0.0722f;
}

static bool RB_LoadHDRLutCube(
    hdrLutSlot_t& slot,
    const char* lutPath)
{
    if (!lutPath || !lutPath[0]) {
        return false;
    }

    if (slot.loadedPath.Icmp(lutPath) == 0 &&
        slot.texture != 0 &&
        slot.valid) {
        return true;
    }

    slot.valid = false;

    idStr path = lutPath;

    void* fileBuffer = NULL;
    int fileLength = fileSystem->ReadFile(path.c_str(), &fileBuffer, NULL);

    if (fileLength <= 0 || fileBuffer == NULL) {
        common->Warning("RB_LoadHDRLutCube: could not open %s", path.c_str());
        return false;
    }

    const char* text = (const char*)fileBuffer;
    const char* ptr = text;
    const char* end = text + fileLength;

    idList<float> values;
    int lutSize = 0;

    char line[1024];

    while (ptr < end) {
        int len = 0;

        while (ptr < end && *ptr != '\n' && len < (int)sizeof(line) - 1) {
            line[len++] = *ptr++;
        }

        while (ptr < end && *ptr != '\n') {
            ptr++;
        }

        if (ptr < end && *ptr == '\n') {
            ptr++;
        }

        line[len] = '\0';

        const char* s = line;

        while (*s == ' ' || *s == '\t' || *s == '\r' || *s == '\n') {
            s++;
        }

        if (*s == '\0') {
            continue;
        }

        if (*s == '#') {
            continue;
        }

        if (!idStr::Icmpn(s, "TITLE", 5)) {
            continue;
        }

        if (!idStr::Icmpn(s, "DOMAIN_MIN", 10)) {
            continue;
        }

        if (!idStr::Icmpn(s, "DOMAIN_MAX", 10)) {
            continue;
        }

        if (!idStr::Icmpn(s, "LUT_3D_SIZE", 11)) {
            sscanf(s, "LUT_3D_SIZE %d", &lutSize);
            continue;
        }

        float r, g, b;

        if (sscanf(s, "%f %f %f", &r, &g, &b) == 3) {
            values.Append(r);
            values.Append(g);
            values.Append(b);
        }
    }

    fileSystem->FreeFile(fileBuffer);

    if (lutSize <= 1) {
        common->Warning("RB_LoadHDRLutCube: invalid LUT size in %s", path.c_str());
        return false;
    }

    const int expectedFloats = lutSize * lutSize * lutSize * 3;

    if (values.Num() != expectedFloats) {
        common->Warning(
            "RB_LoadHDRLutCube: %s has %d floats, expected %d",
            path.c_str(),
            values.Num(),
            expectedFloats);
        return false;
    }

    const int voxelCount = lutSize * lutSize * lutSize;

    // Preserve the source LUT as floating-point data.
    // RGBA is used for broad GL ES compatibility even though the LUT
    // contains RGB grading values.
    idList<float> lutFloats;
    lutFloats.SetNum(voxelCount * 4);

    for (int i = 0; i < voxelCount; i++) {
        float r = values[i * 3 + 0];
        float g = values[i * 3 + 1];
        float b = values[i * 3 + 2];

        r = idMath::ClampFloat(0.0f, 1.0f, r);
        g = idMath::ClampFloat(0.0f, 1.0f, g);
        b = idMath::ClampFloat(0.0f, 1.0f, b);

        lutFloats[i * 4 + 0] = r;
        lutFloats[i * 4 + 1] = g;
        lutFloats[i * 4 + 2] = b;
        lutFloats[i * 4 + 3] = 1.0f;
    }

    if (slot.texture == 0) {
        qglGenTextures(1, &slot.texture);
    }

    qglBindTexture(GL_TEXTURE_3D, slot.texture);

    qglTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    qglTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    qglTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    qglTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    qglTexParameteri(GL_TEXTURE_3D, GL_TEXTURE_WRAP_R, GL_CLAMP_TO_EDGE);

    qglPixelStorei(GL_UNPACK_ALIGNMENT, 1);

    qglTexImage3D(
        GL_TEXTURE_3D,
        0,
        GL_RGBA16F,
        lutSize,
        lutSize,
        lutSize,
        0,
        GL_RGBA,
        GL_FLOAT,
        lutFloats.Ptr()
    );

    qglBindTexture(GL_TEXTURE_3D, 0);

    slot.size = lutSize;
    slot.loadedPath = path;
    slot.valid = true;

    common->Printf(
        "Loaded HDR LUT: %s size=%d entries=%d\n",
        path.c_str(),
        slot.size,
        values.Num() / 3);

    return true;
}

static bool RB_LoadLegacyHDRLutCube(
    hdrLutSlot_t& slot,
    const char* lutName)
{
    if (!lutName || !lutName[0]) {
        return false;
    }

    idStr path = "LUTs/";
    path += lutName;
    path += ".cube";

    return RB_LoadHDRLutCube(slot, path.c_str());
}

static void RB_HDR_DebugReadPixel(
    const char* name,
    idFramebuffer* framebuffer)
{
    if (framebuffer == NULL) {
        return;
    }

    float pixel[4] = { 0.0f };

    framebuffer->BindDirectly();

    qglReadPixels(
        0, 0, 1, 1,
        GL_RGBA,
        GL_FLOAT,
        pixel
    );

    common->Printf(
        "%s = %f %f %f %f\n",
        name,
        pixel[0],
        pixel[1],
        pixel[2],
        pixel[3]
    );

    framebuffer->UnbindDirectly();
}

enum RenderMode
{
    RENDERMODE_DOOM,
    RENDERMODE_2BIT,
    RENDERMODE_2BIT_HIGHRES,
    RENDERMODE_C64,
    RENDERMODE_C64_HIGHRES,
    RENDERMODE_CPC,
    RENDERMODE_CPC_HIGHRES,
    RENDERMODE_GENESIS,
    RENDERMODE_GENESIS_HIGHRES,
    RENDERMODE_PSX,
};

static void RB_HDR_BrightPass()
{
    if (!r_hdr.GetBool() ||
        !r_hdrBloomEnable.GetBool() ||
        !hdrResolvePending ||
        globalImages->hdrSceneImage == NULL ||
        globalImages->hdrBloomImageA == NULL ||
        hdrBloomFramebufferA == NULL ||
        backEnd.viewDef == NULL ||
        backEnd.viewDef->viewEntitys == NULL ||
        (backEnd.viewDef->isSubview && !backEnd.viewDef->isMirror) ||
        backEnd.viewDef->viewport.x1 != 0 ||
        backEnd.viewDef->viewport.y1 != 0 ||
        backEnd.viewDef->viewport.x2 != glConfig.vidWidth - 1 ||
        backEnd.viewDef->viewport.y2 != glConfig.vidHeight - 1) {
        return;
    }

    GLboolean depthMask;
    GLint bufferId;

    qglGetBooleanv(GL_DEPTH_WRITEMASK, &depthMask);
    qglGetIntegerv(GL_ARRAY_BUFFER_BINDING, &bufferId);

    const GLboolean blendEnabled = qglIsEnabled(GL_BLEND);
    const GLboolean depthEnabled = qglIsEnabled(GL_DEPTH_TEST);

    if (blendEnabled) {
        qglDisable(GL_BLEND);
    }

    if (depthEnabled) {
        qglDisable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_FALSE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    hdrBloomFramebufferA->Bind();

    qglViewport(
        0,
        0,
        hdrBloomFramebufferA->Width(),
        hdrBloomFramebufferA->Height()
    );

    qglScissor(
        0,
        0,
        hdrBloomFramebufferA->Width(),
        hdrBloomFramebufferA->Height()
    );

    qglClearColor(0, 0, 0, 1);
    qglClear(GL_COLOR_BUFFER_BIT);

    GL_UseProgram(&hdrBrightPassShader);

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 0),
        0
    );

    float bloomParms[4] = {
        r_hdrBloomThreshold.GetFloat(),
        r_hdrBloomKnee.GetFloat(),
        0.0f,
        0.0f
    };

    GL_Uniform4fv(
        SHADER_PARMS_ADDR(u_uniformParm, 0),
        bloomParms
    );

    static const float vertices[] = {
        -1.0f, -1.0f,
         1.0f, -1.0f,
        -1.0f,  1.0f,
         1.0f,  1.0f
    };

    static const float texCoords[] = {
        0.0f, 0.0f,
        1.0f, 0.0f,
        0.0f, 1.0f,
        1.0f, 1.0f
    };

    GL_SelectTexture(0);
    globalImages->hdrSceneImage->Bind();

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_Vertex),
        2,
        GL_FLOAT,
        false,
        0,
        vertices
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_TexCoord),
        2,
        GL_FLOAT,
        false,
        0,
        texCoords
    );

    qglDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    globalImages->BindNull();

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_UseProgram(NULL);

    hdrBloomFramebufferA->Unbind();

    if (blendEnabled) {
        qglEnable(GL_BLEND);
    }

    if (depthEnabled) {
        qglEnable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_TRUE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, bufferId);
    }
}

static void RB_HDR_BlurHorizontal()
{
    if (!r_hdr.GetBool() ||
        !r_hdrBloomEnable.GetBool() ||
        globalImages->hdrBloomImageA == NULL ||
        globalImages->hdrBloomImageB == NULL ||
        hdrBloomFramebufferB == NULL)
    {
        return;
    }

    GLboolean depthMask;
    GLint bufferId;

    qglGetBooleanv(GL_DEPTH_WRITEMASK, &depthMask);
    qglGetIntegerv(GL_ARRAY_BUFFER_BINDING, &bufferId);

    const GLboolean blendEnabled = qglIsEnabled(GL_BLEND);
    const GLboolean depthEnabled = qglIsEnabled(GL_DEPTH_TEST);

    if (blendEnabled) {
        qglDisable(GL_BLEND);
    }

    if (depthEnabled) {
        qglDisable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_FALSE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    hdrBloomFramebufferB->Bind();

    qglViewport(
        0,
        0,
        hdrBloomFramebufferB->Width(),
        hdrBloomFramebufferB->Height()
    );

    qglScissor(
        0,
        0,
        hdrBloomFramebufferB->Width(),
        hdrBloomFramebufferB->Height()
    );

    qglClearColor(0, 0, 0, 1);
    qglClear(GL_COLOR_BUFFER_BIT);

    GL_UseProgram(&hdrBlurHShader);

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 0),
        0
    );

    float blurParms[4] =
    {
        1.0f / (float)hdrBloomFramebufferB->Width(),
        0.0f,
        0.0f,
        0.0f
    };

    GL_Uniform4fv(
        SHADER_PARMS_ADDR(u_uniformParm, 0),
        blurParms
    );

    static const float vertices[] =
    {
        -1.0f, -1.0f,
         1.0f, -1.0f,
        -1.0f,  1.0f,
         1.0f,  1.0f
    };

    static const float texCoords[] =
    {
        0.0f, 0.0f,
        1.0f, 0.0f,
        0.0f, 1.0f,
        1.0f, 1.0f
    };

    GL_SelectTexture(0);
    globalImages->hdrBloomImageA->Bind();

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_Vertex),
        2,
        GL_FLOAT,
        false,
        0,
        vertices
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_TexCoord),
        2,
        GL_FLOAT,
        false,
        0,
        texCoords
    );

    qglDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    globalImages->BindNull();

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_UseProgram(NULL);

    hdrBloomFramebufferB->Unbind();

    if (blendEnabled) {
        qglEnable(GL_BLEND);
    }

    if (depthEnabled) {
        qglEnable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_TRUE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, bufferId);
    }
}

static void RB_HDR_BlurVertical()
{
    if (!r_hdr.GetBool() ||
        !r_hdrBloomEnable.GetBool() ||
        globalImages->hdrBloomImageA == NULL ||
        globalImages->hdrBloomImageB == NULL ||
        hdrBloomFramebufferA == NULL)
    {
        return;
    }

    GLboolean depthMask;
    GLint bufferId;

    qglGetBooleanv(GL_DEPTH_WRITEMASK, &depthMask);
    qglGetIntegerv(GL_ARRAY_BUFFER_BINDING, &bufferId);

    const GLboolean blendEnabled = qglIsEnabled(GL_BLEND);
    const GLboolean depthEnabled = qglIsEnabled(GL_DEPTH_TEST);

    if (blendEnabled) {
        qglDisable(GL_BLEND);
    }

    if (depthEnabled) {
        qglDisable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_FALSE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    hdrBloomFramebufferA->Bind();

    qglViewport(
        0,
        0,
        hdrBloomFramebufferA->Width(),
        hdrBloomFramebufferA->Height()
    );

    qglScissor(
        0,
        0,
        hdrBloomFramebufferA->Width(),
        hdrBloomFramebufferA->Height()
    );

    qglClearColor(0, 0, 0, 1);
    qglClear(GL_COLOR_BUFFER_BIT);

    GL_UseProgram(&hdrBlurVShader);

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 0),
        0
    );

    float blurParms[4] =
    {
        1.0f / (float)hdrBloomFramebufferA->Height(),
        0.0f,
        0.0f,
        0.0f
    };

    GL_Uniform4fv(
        SHADER_PARMS_ADDR(u_uniformParm, 0),
        blurParms
    );

    static const float vertices[] =
    {
        -1.0f, -1.0f,
         1.0f, -1.0f,
        -1.0f,  1.0f,
         1.0f,  1.0f
    };

    static const float texCoords[] =
    {
        0.0f, 0.0f,
        1.0f, 0.0f,
        0.0f, 1.0f,
        1.0f, 1.0f
    };

    GL_SelectTexture(0);
    globalImages->hdrBloomImageB->Bind();

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_Vertex),
        2,
        GL_FLOAT,
        false,
        0,
        vertices
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_TexCoord),
        2,
        GL_FLOAT,
        false,
        0,
        texCoords
    );

    qglDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    globalImages->BindNull();

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_UseProgram(NULL);

    hdrBloomFramebufferA->Unbind();

    if (blendEnabled) {
        qglEnable(GL_BLEND);
    }

    if (depthEnabled) {
        qglEnable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_TRUE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, bufferId);
    }
}

static void RB_HDR_LuminancePass()
{
    if (!r_hdr.GetBool() ||
        !r_hdrAutoExposure.GetBool() ||
        !hdrResolvePending ||
        globalImages->hdrSceneImage == NULL ||
        globalImages->hdrLuminanceImageA == NULL ||
        hdrLuminanceFramebufferA == NULL ||
        backEnd.viewDef == NULL ||
        backEnd.viewDef->viewEntitys == NULL ||
        (backEnd.viewDef->isSubview && !backEnd.viewDef->isMirror) ||
        backEnd.viewDef->viewport.x1 != 0 ||
        backEnd.viewDef->viewport.y1 != 0 ||
        backEnd.viewDef->viewport.x2 != glConfig.vidWidth - 1 ||
        backEnd.viewDef->viewport.y2 != glConfig.vidHeight - 1)
    {
        return;
    }

    GLboolean depthMask;
    GLint bufferId;

    qglGetBooleanv(GL_DEPTH_WRITEMASK, &depthMask);
    qglGetIntegerv(GL_ARRAY_BUFFER_BINDING, &bufferId);

    const GLboolean blendEnabled = qglIsEnabled(GL_BLEND);
    const GLboolean depthEnabled = qglIsEnabled(GL_DEPTH_TEST);

    if (blendEnabled) {
        qglDisable(GL_BLEND);
    }

    if (depthEnabled) {
        qglDisable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_FALSE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    hdrLuminanceFramebufferA->Bind();

    qglViewport(
        0,
        0,
        hdrLuminanceFramebufferA->Width(),
        hdrLuminanceFramebufferA->Height()
    );

    qglScissor(
        0,
        0,
        hdrLuminanceFramebufferA->Width(),
        hdrLuminanceFramebufferA->Height()
    );

    qglClearColor(0, 0, 0, 1);
    qglClear(GL_COLOR_BUFFER_BIT);

    GL_UseProgram(&hdrLuminanceShader);

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 0),
        0
    );

    static const float vertices[] = {
        -1.0f, -1.0f,
         1.0f, -1.0f,
        -1.0f,  1.0f,
         1.0f,  1.0f
    };

    static const float texCoords[] = {
        0.0f, 0.0f,
        1.0f, 0.0f,
        0.0f, 1.0f,
        1.0f, 1.0f
    };

    GL_SelectTexture(0);
    globalImages->hdrSceneImage->Bind();

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_Vertex),
        2,
        GL_FLOAT,
        false,
        0,
        vertices
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_TexCoord),
        2,
        GL_FLOAT,
        false,
        0,
        texCoords
    );

    qglDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    globalImages->BindNull();

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_UseProgram(NULL);

    hdrLuminanceFramebufferA->Unbind();

    if (blendEnabled) {
        qglEnable(GL_BLEND);
    }

    if (depthEnabled) {
        qglEnable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_TRUE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, bufferId);
    }
}

static void RB_HDR_ExposurePass()
{
    if (hdrExposureFramebufferA == NULL ||
        hdrExposureFramebufferB == NULL)
    {
        return;
    }

    GLboolean depthMask;
    GLint bufferId;

    qglGetBooleanv(GL_DEPTH_WRITEMASK, &depthMask);
    qglGetIntegerv(GL_ARRAY_BUFFER_BINDING, &bufferId);

    const GLboolean blendEnabled = qglIsEnabled(GL_BLEND);
    const GLboolean depthEnabled = qglIsEnabled(GL_DEPTH_TEST);

    if (blendEnabled) {
        qglDisable(GL_BLEND);
    }

    if (depthEnabled) {
        qglDisable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_FALSE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    idFramebuffer* exposureTarget =
        hdrExposureWriteToB
        ? hdrExposureFramebufferB
        : hdrExposureFramebufferA;

    exposureTarget->Bind();

    qglViewport(0, 0, 1, 1);
    qglScissor(0, 0, 1, 1);

    qglClearColor(0, 0, 0, 1);
    qglClear(GL_COLOR_BUFFER_BIT);

    GL_UseProgram(&hdrExposureShader);

    float exposureParms[4] =
    {
        r_hdrMiddleGray.GetFloat(),
        r_hdrExposureMin.GetFloat(),
        r_hdrExposureMax.GetFloat(),
        0.0f
    };

    GL_Uniform4fv(
        SHADER_PARMS_ADDR(u_uniformParm, 0),
        exposureParms
    );

    float adaptationParms[4] =
    {
        r_hdrAdaptationSpeed.GetFloat(),
        r_hdrAdaptationBrightenSpeed.GetFloat(),
        r_hdrAdaptationDarkenSpeed.GetFloat(),
        r_hdrExposureDeadZone.GetFloat()
    };

    GL_Uniform4fv(
        SHADER_PARMS_ADDR(u_uniformParm, 1),
        adaptationParms
    );

    static uint64_t previousExposureTime = 0;

    const uint64_t currentExposureTime = Sys_Microseconds();

    float exposureDeltaTime = 1.0f / 60.0f;

    if (previousExposureTime != 0 &&
        currentExposureTime > previousExposureTime)
    {
        exposureDeltaTime =
            (float)(currentExposureTime - previousExposureTime) *
            0.000001f;
    }

    previousExposureTime = currentExposureTime;

    exposureDeltaTime = idMath::ClampFloat(
        0.000001f,
        0.1f,
        exposureDeltaTime
    );

    float timeParms[4] =
    {
        exposureDeltaTime,
        0.0f,
        0.0f,
        0.0f
    };

    GL_Uniform4fv(
        SHADER_PARMS_ADDR(u_uniformParm, 2),
        timeParms
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 0),
        0
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 1),
        1
    );

    GL_SelectTexture(0);
    globalImages->hdrLuminanceImageE->Bind();

    GL_SelectTexture(1);

    if (hdrExposureWriteToB)
    {
        globalImages->hdrExposureImageA->Bind();
    }
    else
    {
        globalImages->hdrExposureImageB->Bind();
    }

    GL_SelectTexture(0);

    static const float vertices[] =
    {
        -1.0f, -1.0f,
         1.0f, -1.0f,
        -1.0f,  1.0f,
         1.0f,  1.0f
    };

    static const float texCoords[] =
    {
        0.0f, 0.0f,
        1.0f, 0.0f,
        0.0f, 1.0f,
        1.0f, 1.0f
    };

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_Vertex),
        2,
        GL_FLOAT,
        false,
        0,
        vertices
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_TexCoord),
        2,
        GL_FLOAT,
        false,
        0,
        texCoords
    );

    qglDrawArrays(
        GL_TRIANGLE_STRIP,
        0,
        4
    );

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_UseProgram(NULL);

    exposureTarget->Unbind();

    hdrExposureResultIsB = hdrExposureWriteToB;
    hdrExposureWriteToB = !hdrExposureWriteToB;

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, bufferId);
    }

    if (depthMask) {
        qglDepthMask(GL_TRUE);
    }

    if (depthEnabled) {
        qglEnable(GL_DEPTH_TEST);
    }

    if (blendEnabled) {
        qglEnable(GL_BLEND);
    }
}

static void RB_HDR_DownsamplePass(
    idImage* sourceImage,
    idFramebuffer* targetFramebuffer)
{
    if (!r_hdr.GetBool() ||
        !r_hdrAutoExposure.GetBool() ||
        sourceImage == NULL ||
        targetFramebuffer == NULL)
    {
        return;
    }

    GLboolean depthMask;
    GLint bufferId;

    qglGetBooleanv(GL_DEPTH_WRITEMASK, &depthMask);
    qglGetIntegerv(GL_ARRAY_BUFFER_BINDING, &bufferId);

    const GLboolean blendEnabled = qglIsEnabled(GL_BLEND);
    const GLboolean depthEnabled = qglIsEnabled(GL_DEPTH_TEST);

    if (blendEnabled) {
        qglDisable(GL_BLEND);
    }

    if (depthEnabled) {
        qglDisable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_FALSE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    targetFramebuffer->Bind();

    qglViewport(
        0,
        0,
        targetFramebuffer->Width(),
        targetFramebuffer->Height()
    );

    qglScissor(
        0,
        0,
        targetFramebuffer->Width(),
        targetFramebuffer->Height()
    );

    qglClearColor(0, 0, 0, 1);
    qglClear(GL_COLOR_BUFFER_BIT);

    GL_UseProgram(&hdrDownsampleShader);

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 0),
        0
    );

    float downsampleParms[4] = {
        1.0f / (float)(targetFramebuffer->Width() * 4),
        1.0f / (float)(targetFramebuffer->Height() * 4),
        0.0f,
        0.0f
    };

    GL_Uniform4fv(
        SHADER_PARMS_ADDR(u_uniformParm, 0),
        downsampleParms
    );

    static const float vertices[] = {
        -1.0f, -1.0f,
         1.0f, -1.0f,
        -1.0f,  1.0f,
         1.0f,  1.0f
    };

    static const float texCoords[] = {
        0.0f, 0.0f,
        1.0f, 0.0f,
        0.0f, 1.0f,
        1.0f, 1.0f
    };

    GL_SelectTexture(0);
    sourceImage->Bind();

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_Vertex),
        2,
        GL_FLOAT,
        false,
        0,
        vertices
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_TexCoord),
        2,
        GL_FLOAT,
        false,
        0,
        texCoords
    );

    qglDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    globalImages->BindNull();

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_UseProgram(NULL);

    targetFramebuffer->Unbind();

    if (blendEnabled) {
        qglEnable(GL_BLEND);
    }

    if (depthEnabled) {
        qglEnable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_TRUE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, bufferId);
    }
}

static void RB_HDR_Tonemap()
{
    if (!r_hdr.GetBool() ||
        !hdrResolvePending ||
        globalImages->hdrSceneImage == NULL ||
        backEnd.viewDef == NULL ||
        backEnd.viewDef->viewEntitys == NULL ||
        (backEnd.viewDef->isSubview && !backEnd.viewDef->isMirror) ||
        backEnd.viewDef->viewport.x1 != 0 ||
        backEnd.viewDef->viewport.y1 != 0 ||
        backEnd.viewDef->viewport.x2 != glConfig.vidWidth - 1 ||
        backEnd.viewDef->viewport.y2 != glConfig.vidHeight - 1) {
        return;
    }

    const int x = backEnd.viewDef->viewport.x1;
    const int y = backEnd.viewDef->viewport.y1;
    const int w = backEnd.viewDef->viewport.x2 - x + 1;
    const int h = backEnd.viewDef->viewport.y2 - y + 1;

    Framebuffer::BindNull();

    qglViewport(x, y, w, h);
    qglScissor(x, y, w, h);

    GLboolean depthMask;
    GLint bufferId;

    qglGetBooleanv(GL_DEPTH_WRITEMASK, &depthMask);
    qglGetIntegerv(GL_ARRAY_BUFFER_BINDING, &bufferId);

    const GLboolean blendEnabled = qglIsEnabled(GL_BLEND);
    const GLboolean depthEnabled = qglIsEnabled(GL_DEPTH_TEST);

    if (blendEnabled) {
        qglDisable(GL_BLEND);
    }

    if (depthEnabled) {
        qglDisable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_FALSE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    GL_UseProgram(&hdrTonemapShader);

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 0),
        0
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 1),
        1
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 2),
        2
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 3),
        3
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 4),
        4
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 5),
        5
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 6),
        6
    );

    bool lutActive[HDR_MULTI_LUT_COUNT] = {
        false,
        false,
        false,
        false
    };

    float lutWeights[HDR_MULTI_LUT_COUNT] = {
        0.0f,
        0.0f,
        0.0f,
        0.0f
    };

    if (r_hdrMultiLutEnable.GetBool()) {
        const char* lutPaths[HDR_MULTI_LUT_COUNT] = {
            r_lutFile1.GetString(),
            r_lutFile2.GetString(),
            r_lutFile3.GetString(),
            r_lutFile4.GetString()
        };

        const float requestedWeights[HDR_MULTI_LUT_COUNT] = {
            r_lutBlend1.GetFloat(),
            r_lutBlend2.GetFloat(),
            r_lutBlend3.GetFloat(),
            r_lutBlend4.GetFloat()
        };

        for (int i = 0; i < HDR_MULTI_LUT_COUNT; i++) {
            lutWeights[i] = idMath::ClampFloat(
                0.0f,
                1.0f,
                requestedWeights[i]
            );

            if (lutWeights[i] <= 0.0f) {
                continue;
            }

            lutActive[i] = RB_LoadHDRLutCube(
                hdrLutSlots[i],
                lutPaths[i]
            );

            if (!lutActive[i]) {
                lutWeights[i] = 0.0f;
            }
        }
    }
    else if (r_hdrLutEnable.GetBool()) {
        int lutIndex;

        if (r_hdrLutAuto.GetBool()) {
            lutIndex = RB_GetAutoHDRLut();
        }
        else {
            lutIndex = idMath::ClampInt(
                0,
                HDRLUT_COUNT - 1,
                r_hdrLut.GetInteger()
            );
        }

        const char* lutName = hdrLutNames[lutIndex];

        lutActive[0] = RB_LoadLegacyHDRLutCube(
            hdrLutSlots[0],
            lutName
        );

        lutWeights[0] = lutActive[0]
            ? idMath::ClampFloat(
                0.0f,
                1.0f,
                r_hdrLutStrength.GetFloat()
            )
            : 0.0f;
    }

    float exposure[4] = {
       1.0f,
       r_hdrGamma.GetFloat(),
       r_hdrSaturation.GetFloat(),
       r_hdrContrast.GetFloat()
    };

    GL_Uniform4fv(
        SHADER_PARMS_ADDR(u_uniformParm, 0),
        exposure
    );

    float activeLutSize = 0.0f;

    for (int i = 0; i < HDR_MULTI_LUT_COUNT; i++) {
        if (lutActive[i] &&
            hdrLutSlots[i].valid &&
            hdrLutSlots[i].size > 0) {
            activeLutSize = (float)hdrLutSlots[i].size;
            break;
        }
    }

    float lutParms[4] = {
        r_hdrMultiLutEnable.GetBool() ? 2.0f :
            (lutActive[0] ? 1.0f : 0.0f),
        lutWeights[0],
        activeLutSize,
        r_hdrBloomStrength.GetFloat()
    };

    float multiLutParms[4] = {
        lutActive[0] ? lutWeights[0] : 0.0f,
        lutActive[1] ? lutWeights[1] : 0.0f,
        lutActive[2] ? lutWeights[2] : 0.0f,
        lutActive[3] ? lutWeights[3] : 0.0f
    };

    GL_Uniform4fv(
        SHADER_PARMS_ADDR(u_uniformParm, 1),
        lutParms
    );

    GL_Uniform4fv(
        SHADER_PARMS_ADDR(u_uniformParm, 2),
        multiLutParms
    );

    static const float vertices[] = {
        -1.0f, -1.0f,
         1.0f, -1.0f,
        -1.0f,  1.0f,
         1.0f,  1.0f
    };

    static const float texCoords[] = {
        0.0f, 0.0f,
        1.0f, 0.0f,
        0.0f, 1.0f,
        1.0f, 1.0f
    };

        GL_SelectTexture(0);
        globalImages->hdrSceneImage->Bind();

        GL_SelectTexture(2);
        globalImages->hdrBloomImageA->Bind();

        GL_SelectTexture(0);

        GL_SelectTextureForce(3);
        backEnd.glState.tmu[3].current2DMap = -1;
        if (hdrExposureResultIsB)
        {
            globalImages->hdrExposureImageB->Bind();
        }
        else
        {
            globalImages->hdrExposureImageA->Bind();
        }

        GL_SelectTextureForce(0);

        static const int lutTextureUnits[HDR_MULTI_LUT_COUNT] = {
            1, 4, 5, 6
        };

        for (int i = 0; i < HDR_MULTI_LUT_COUNT; i++) {
            if (!lutActive[i] ||
                !hdrLutSlots[i].valid ||
                hdrLutSlots[i].texture == 0) {
                continue;
            }

            GL_SelectTexture(lutTextureUnits[i]);

            qglBindTexture(
                GL_TEXTURE_3D,
                hdrLutSlots[i].texture
            );
        }

        GL_SelectTexture(0);

        GL_EnableVertexAttribArray(
            SHADER_PARM_ADDR(attr_Vertex)
        );

        GL_EnableVertexAttribArray(
            SHADER_PARM_ADDR(attr_TexCoord)
        );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_Vertex),
        2,
        GL_FLOAT,
        false,
        0,
        vertices
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_TexCoord),
        2,
        GL_FLOAT,
        false,
        0,
        texCoords
    );

    qglDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    for (int i = 0; i < HDR_MULTI_LUT_COUNT; i++) {
        if (!lutActive[i] ||
            hdrLutSlots[i].texture == 0) {
            continue;
        }

        GL_SelectTexture(lutTextureUnits[i]);
        qglBindTexture(GL_TEXTURE_3D, 0);
    }

    GL_SelectTexture(0);

    GL_SelectTexture(2);
    qglBindTexture(GL_TEXTURE_2D, 0);

    GL_SelectTexture(0);

    globalImages->BindNull();

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_UseProgram(NULL);

    if (blendEnabled) {
        qglEnable(GL_BLEND);
    }

    if (depthEnabled) {
        qglEnable(GL_DEPTH_TEST);
    }

    if (depthMask) {
        qglDepthMask(GL_TRUE);
    }

    if (bufferId != 0) {
        qglBindBuffer(GL_ARRAY_BUFFER, bufferId);
    }
}

static void RB_HDR_CAS()
{
    if (!r_hdr.GetBool())
    {
        return;
    }

    if (!r_hdrCASEnable.GetBool())
    {
        return;
    }

    if (r_hdrCASStrength.GetFloat() <= 0.0f)
    {
        return;
    }

    if (backEnd.viewDef == NULL)
    {
        return;
    }

    if (globalImages->frameImage == NULL)
    {
        return;
    }

    globalImages->frameImage->CopyFramebuffer(
        0,
        0,
        glConfig.vidWidth,
        glConfig.vidHeight,
        true
    );

    const int x = backEnd.viewDef->viewport.x1;
    const int y = backEnd.viewDef->viewport.y1;
    const int w = backEnd.viewDef->viewport.x2 - x + 1;
    const int h = backEnd.viewDef->viewport.y2 - y + 1;

    Framebuffer::BindNull();

    qglViewport(x, y, w, h);
    qglScissor(x, y, w, h);

    GLboolean depthMask;
    GLint bufferId;

    qglGetBooleanv(
        GL_DEPTH_WRITEMASK,
        &depthMask
    );

    qglGetIntegerv(
        GL_ARRAY_BUFFER_BINDING,
        &bufferId
    );

    const GLboolean blendEnabled =
        qglIsEnabled(GL_BLEND);

    const GLboolean depthEnabled =
        qglIsEnabled(GL_DEPTH_TEST);

    if (blendEnabled)
    {
        qglDisable(GL_BLEND);
    }

    if (depthEnabled)
    {
        qglDisable(GL_DEPTH_TEST);
    }

    if (depthMask)
    {
        qglDepthMask(GL_FALSE);
    }

    if (bufferId != 0)
    {
        qglBindBuffer(
            GL_ARRAY_BUFFER,
            0
        );
    }

    GL_UseProgram(&hdrCASShader);

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 0),
        0
    );

    float casParms[4] =
    {
        1.0f / (float)glConfig.vidWidth,
        1.0f / (float)glConfig.vidHeight,
        r_hdrCASStrength.GetFloat(),
        0.0f
    };

    GL_Uniform4fv(
        SHADER_PARMS_ADDR(u_uniformParm, 0),
        casParms
    );

    const float sw = (float)glConfig.vidWidth;
    const float sh = (float)glConfig.vidHeight;

    float parm[4];

    parm[2] = 0.0f;
    parm[3] = 1.0f;

    parm[0] =
        sw /
        (float)globalImages->frameImage->uploadWidth;

    parm[1] =
        sh /
        (float)globalImages->frameImage->uploadHeight;

    GL_Uniform4fv(
        SHADER_PARM_ADDR(nonPowerOfTwo),
        parm
    );

    parm[0] = 1.0f / sw;
    parm[1] = 1.0f / sh;
    parm[2] = 0.0f;
    parm[3] = 0.0f;

    GL_Uniform4fv(
        SHADER_PARM_ADDR(windowCoords),
        parm
    );

    static const float vertices[] =
    {
        -1.0f, -1.0f,
         1.0f, -1.0f,
        -1.0f,  1.0f,
         1.0f,  1.0f
    };

    static const float texCoords[] =
    {
        0.0f, 0.0f,
        1.0f, 0.0f,
        0.0f, 1.0f,
        1.0f, 1.0f
    };

    GL_SelectTexture(0);
    globalImages->frameImage->Bind();

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_Vertex),
        2,
        GL_FLOAT,
        false,
        0,
        vertices
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_TexCoord),
        2,
        GL_FLOAT,
        false,
        0,
        texCoords
    );

    qglDrawArrays(
        GL_TRIANGLE_STRIP,
        0,
        4
    );

    globalImages->BindNull();

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_UseProgram(NULL);

    if (blendEnabled)
    {
        qglEnable(GL_BLEND);
    }

    if (depthEnabled)
    {
        qglEnable(GL_DEPTH_TEST);
    }

    if (depthMask)
    {
        qglDepthMask(GL_TRUE);
    }

    if (bufferId != 0)
    {
        qglBindBuffer(
            GL_ARRAY_BUFFER,
            bufferId
        );
    }
}

static idImage* ssgiCurrentRadianceImage = NULL;

static float ssgiPrevModelViewMatrix[16];
static float ssgiPrevProjectionMatrix[16];
static float ssgiPrevViewProjectionMatrix[16];

static bool ssgiPrevMatricesValid = false;

static void RB_SSGITrace()
{
    if (
        ssgiRadianceFramebufferA == NULL ||
        ssgiRadianceFramebufferB == NULL ||
        globalImages->ssgiRadianceImageA == NULL ||
        globalImages->ssgiRadianceImageB == NULL ||
        globalImages->hdrSceneImage == NULL ||
        globalImages->geometricNormalImage == NULL ||
        backEnd.viewDef == NULL
        )
    {
        ssgiCurrentRadianceImage = NULL;
        return;
    }

    static bool ssgiWriteA = true;
    static bool ssgiHistoryValid = false;

    idFramebuffer* ssgiWriteFramebuffer =
        ssgiWriteA
        ? ssgiRadianceFramebufferA
        : ssgiRadianceFramebufferB;

    idImage* ssgiReadImage =
        ssgiWriteA
        ? globalImages->ssgiRadianceImageB
        : globalImages->ssgiRadianceImageA;

    idImage* ssgiOutputImage =
        ssgiWriteA
        ? globalImages->ssgiRadianceImageA
        : globalImages->ssgiRadianceImageB;

    GLboolean depthMask;
    GLint bufferId;

    qglGetBooleanv(
        GL_DEPTH_WRITEMASK,
        &depthMask
    );

    qglGetIntegerv(
        GL_ARRAY_BUFFER_BINDING,
        &bufferId
    );

    const GLboolean blendEnabled =
        qglIsEnabled(GL_BLEND);

    const GLboolean depthEnabled =
        qglIsEnabled(GL_DEPTH_TEST);

    if (blendEnabled)
    {
        qglDisable(GL_BLEND);
    }

    if (depthEnabled)
    {
        qglDisable(GL_DEPTH_TEST);
    }

    if (depthMask)
    {
        qglDepthMask(GL_FALSE);
    }

    /*
    Client-side vertex arrays are used below.

    GL_ARRAY_BUFFER must therefore be zero while
    GL_VertexAttribPointer receives CPU addresses.
    */
    if (bufferId != 0)
    {
        qglBindBuffer(
            GL_ARRAY_BUFFER,
            0
        );
    }

    ssgiWriteFramebuffer->Bind();

    qglViewport(
        0,
        0,
        glConfig.vidWidth,
        glConfig.vidHeight
    );

    qglScissor(
        0,
        0,
        glConfig.vidWidth,
        glConfig.vidHeight
    );

    GL_UseProgram(
        &ssgiTraceShader
    );

    float currentViewProjection[16];

    myGlMultMatrix(
        backEnd.viewDef->worldSpace.modelViewMatrix,
        backEnd.viewDef->projectionMatrix,
        currentViewProjection
    );

    const bool canUseHistory =
        ssgiHistoryValid &&
        ssgiPrevMatricesValid;

    static const float identityMatrix[16] =
    {
        1.0f, 0.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 0.0f, 1.0f
    };

    float currentViewToPreviousClip[16];

    if (canUseHistory)
    {
        float inverseCurrentView[16];

        R_MatrixFullInverse(
            backEnd.viewDef->worldSpace.modelViewMatrix,
            inverseCurrentView
        );

        myGlMultMatrix(
            inverseCurrentView,
            ssgiPrevViewProjectionMatrix,
            currentViewToPreviousClip
        );
    }
    else
    {
        memcpy(
            currentViewToPreviousClip,
            identityMatrix,
            sizeof(currentViewToPreviousClip)
        );
    }

    GL_SelectTexture(0);
    globalImages->hdrSceneImage->Bind();

    GL_SelectTexture(1);
    depthStencilRenderer.BindDepth();

    GL_SelectTexture(2);
    globalImages->geometricNormalImage->Bind();

    GL_SelectTexture(3);
    ssgiReadImage->Bind();

    GL_SelectTexture(0);

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 0),
        0
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 1),
        1
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 2),
        2
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 3),
        3
    );

    GL_UniformMatrix4fv(
        SHADER_PARM_ADDR(ssgiCurrentViewToPreviousClip),
        currentViewToPreviousClip
    );

    GL_Uniform1i(
        SHADER_PARM_ADDR(gtaoHistoryValid),
        canUseHistory ? 1 : 0
    );

    float ssgiParms[4] =
    {
        r_ssgiHistoryWeight.GetFloat(),
        r_ssgiDepthThreshold.GetFloat(),
        r_ssgiNormalThreshold.GetFloat(),
        r_ssgiIndirectScale.GetFloat()
    };

    GL_Uniform4fv(
        SHADER_PARM_ADDR(ssgiParms),
        ssgiParms
    );


    float ssgiFrameParms[4] =
    {
        (float)(backEnd.frameCount & 15),
        0.0f,
        0.0f,
        0.0f
    };

    GL_Uniform4fv(
        SHADER_PARMS_ADDR(u_uniformParm, 0),
        ssgiFrameParms
    );

    float projectionParms[4];

    projectionParms[0] =
        backEnd.viewDef->projectionMatrix[0];

    projectionParms[1] =
        backEnd.viewDef->projectionMatrix[5];

    projectionParms[2] =
        backEnd.viewDef->projectionMatrix[10];

    projectionParms[3] =
        backEnd.viewDef->projectionMatrix[14];

    GL_Uniform4fv(
        SHADER_PARM_ADDR(projectionParams),
        projectionParms
    );

    float windowParms[4];

    windowParms[0] =
        1.0f / (float)glConfig.vidWidth;

    windowParms[1] =
        1.0f / (float)glConfig.vidHeight;

    windowParms[2] = 0.0f;
    windowParms[3] = 0.0f;

    GL_Uniform4fv(
        SHADER_PARM_ADDR(windowCoords),
        windowParms);

    float depthTextureParms[4];

    depthTextureParms[0] =
        (float)depthStencilRenderer.Width() /
        (float)depthStencilRenderer.UploadWidth();

    depthTextureParms[1] =
        (float)depthStencilRenderer.Height() /
        (float)depthStencilRenderer.UploadHeight();

    depthTextureParms[2] = 0.0f;
    depthTextureParms[3] = 0.0f;

    GL_Uniform4fv(
        SHADER_PARM_ADDR(nonPowerOfTwo),
        depthTextureParms
    );

    static const float vertices[] =
    {
        -1.0f, -1.0f,
         1.0f, -1.0f,
        -1.0f,  1.0f,
         1.0f,  1.0f
    };

    static const float texCoords[] =
    {
        0.0f, 0.0f,
        1.0f, 0.0f,
        0.0f, 1.0f,
        1.0f, 1.0f
    };

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_Vertex),
        2,
        GL_FLOAT,
        false,
        0,
        vertices
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_TexCoord),
        2,
        GL_FLOAT,
        false,
        0,
        texCoords
    );

    qglDrawArrays(
        GL_TRIANGLE_STRIP,
        0,
        4
    );

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    globalImages->BindNull();

    GL_UseProgram(NULL);

    ssgiWriteFramebuffer->Unbind();

    /*
    Restore state.
    */
    if (blendEnabled)
    {
        qglEnable(GL_BLEND);
    }

    if (depthEnabled)
    {
        qglEnable(GL_DEPTH_TEST);
    }

    if (depthMask)
    {
        qglDepthMask(GL_TRUE);
    }

    if (bufferId != 0)
    {
        qglBindBuffer(
            GL_ARRAY_BUFFER,
            bufferId
        );
    }

    memcpy(
        ssgiPrevModelViewMatrix,
        backEnd.viewDef->worldSpace.modelViewMatrix,
        sizeof(float) * 16
    );

    memcpy(
        ssgiPrevProjectionMatrix,
        backEnd.viewDef->projectionMatrix,
        sizeof(float) * 16
    );

    memcpy(
        ssgiPrevViewProjectionMatrix,
        currentViewProjection,
        sizeof(float) * 16
    );

    ssgiPrevMatricesValid = true;

    // We point the "Current" image to the one we just READ from (the history).
    // This prevents the GPU from trying to read and write to the same texture 
    // in the same frame, which was causing the 1.5s stall.
    ssgiCurrentRadianceImage =
        ssgiReadImage;

    ssgiHistoryValid = true;
    ssgiWriteA = !ssgiWriteA;
}

static void RB_SSGI()
{
    if (!r_ao.GetBool())
    {
        return;
    }

    if (!r_gtao.GetBool())
    {
        return;
    }

    if (backEnd.viewDef == NULL)
    {
        return;
    }

    if (
        globalImages->frameImage == NULL ||
        globalImages->geometricNormalImage == NULL ||
        ssgiCurrentRadianceImage == NULL
        )
    {
        return;
    }

    globalImages->frameImage->CopyFramebuffer(
        0,
        0,
        glConfig.vidWidth,
        glConfig.vidHeight,
        true
    );

    const int x = backEnd.viewDef->viewport.x1;
    const int y = backEnd.viewDef->viewport.y1;
    const int w = backEnd.viewDef->viewport.x2 - x + 1;
    const int h = backEnd.viewDef->viewport.y2 - y + 1;

    Framebuffer::BindNull();

    qglViewport(x, y, w, h);
    qglScissor(x, y, w, h);

    GLboolean depthMask;
    GLint bufferId;

    qglGetBooleanv(
        GL_DEPTH_WRITEMASK,
        &depthMask
    );

    qglGetIntegerv(
        GL_ARRAY_BUFFER_BINDING,
        &bufferId
    );

    const GLboolean blendEnabled =
        qglIsEnabled(GL_BLEND);

    const GLboolean depthEnabled =
        qglIsEnabled(GL_DEPTH_TEST);

    if (blendEnabled)
    {
        qglDisable(GL_BLEND);
    }

    if (depthEnabled)
    {
        qglDisable(GL_DEPTH_TEST);
    }

    if (depthMask)
    {
        qglDepthMask(GL_FALSE);
    }

    if (bufferId != 0)
    {
        qglBindBuffer(
            GL_ARRAY_BUFFER,
            0
        );
    }

    GL_UseProgram(&ssgiShader);

    GL_Uniform1f(
        SHADER_PARM_ADDR(aoIntensity),
        r_aoIntensity.GetFloat()
    );

    GL_Uniform1f(
        SHADER_PARM_ADDR(aoRadius),
        r_aoRadius.GetFloat()
    );

    GL_Uniform1f(
        SHADER_PARM_ADDR(aoThickness),
        r_aoThickness.GetFloat()
    );

    GL_Uniform1f(
        SHADER_PARM_ADDR(aoNormalReject),
        r_aoNormalReject.GetFloat()
    );

    GL_Uniform1f(
        SHADER_PARM_ADDR(aoSamples),
        r_aoSamples.GetFloat()
    );

    GL_Uniform1i(
        SHADER_PARM_ADDR(gtaoDirections),
        r_gtaoDirections.GetInteger()
    );

    GL_Uniform1f(
        SHADER_PARM_ADDR(gtaoStrength),
        idMath::ClampFloat(
            0.0f,
            1.0f,
            r_gtaoStrength.GetFloat()
        )
    );

    float projectionParms[4];

    projectionParms[0] =
        backEnd.viewDef->projectionMatrix[0];

    projectionParms[1] =
        backEnd.viewDef->projectionMatrix[5];

    projectionParms[2] =
        backEnd.viewDef->projectionMatrix[10];

    projectionParms[3] =
        backEnd.viewDef->projectionMatrix[14];

    GL_Uniform4fv(
        SHADER_PARM_ADDR(projectionParams),
        projectionParms
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 0),
        0
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 1),
        1
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 2),
        2
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 3),
        3
    );

    GL_Uniform1i(
        SHADER_PARMS_ADDR(u_fragmentMap, 4),
        4
    );
   
    float parm[4];

    parm[2] = 0.0f;
    parm[3] = 1.0f;

    parm[0] =
        (float)glConfig.vidWidth /
        (float)globalImages->frameImage->uploadWidth;

    parm[1] =
        (float)glConfig.vidHeight /
        (float)globalImages->frameImage->uploadHeight;

    GL_Uniform4fv(
        SHADER_PARM_ADDR(nonPowerOfTwo),
        parm
    );

    parm[0] = 1.0f / (float)glConfig.vidWidth;
    parm[1] = 1.0f / (float)glConfig.vidHeight;
    parm[2] = 0.0f;
    parm[3] = 0.0f;

    GL_Uniform4fv(
        SHADER_PARM_ADDR(windowCoords),
        parm
    );

    static const float vertices[] =
    {
        -1.0f, -1.0f,
         1.0f, -1.0f,
        -1.0f,  1.0f,
         1.0f,  1.0f
    };

    const float tcw =
        (float)depthStencilRenderer.Width() /
        (float)depthStencilRenderer.UploadWidth();

    const float tch =
        (float)depthStencilRenderer.Height() /
        (float)depthStencilRenderer.UploadHeight();

    const float texCoords[] =
    {
        0.0f, 0.0f,
        tcw,  0.0f,
        0.0f, tch,
        tcw,  tch
    };

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_EnableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_Vertex),
        2,
        GL_FLOAT,
        false,
        0,
        vertices
    );

    GL_VertexAttribPointer(
        offsetof(shaderProgram_t, attr_TexCoord),
        2,
        GL_FLOAT,
        false,
        0,
        texCoords
    );

    static bool gtaoWriteA = true;
    static bool gtaoHistoryValid = false;

    idFramebuffer* gtaoWriteFramebuffer =
        gtaoWriteA ? gtaoFramebufferA : gtaoFramebufferB;

    idImage* gtaoReadImage =
        gtaoWriteA
        ? globalImages->gtaoHistoryImageB
        : globalImages->gtaoHistoryImageA;

    idImage* gtaoOutputImage =
        gtaoWriteA
        ? globalImages->gtaoHistoryImageA
        : globalImages->gtaoHistoryImageB;
    
    GL_SelectTexture(0);
    ssgiCurrentRadianceImage->Bind();

    GL_SelectTexture(1);
    depthStencilRenderer.BindDepth();

    GL_SelectTexture(2);
    gtaoReadImage->Bind();

    GL_SelectTexture(3);
    globalImages->geometricNormalImage->Bind();

    GL_SelectTexture(4);
    globalImages->frameImage->Bind();

    GL_SelectTexture(0);

    /*
    ========================
    Pass 0: temporal visibility
    ========================
    */
    gtaoWriteFramebuffer->Bind();

    qglViewport(
        0,
        0,
        glConfig.vidWidth,
        glConfig.vidHeight
    );

    qglScissor(
        0,
        0,
        glConfig.vidWidth,
        glConfig.vidHeight
    );

    GL_Uniform1i(
        SHADER_PARM_ADDR(gtaoPass),
        0
    );

    GL_Uniform1i(
        SHADER_PARM_ADDR(gtaoHistoryValid),
        gtaoHistoryValid ? 1 : 0
    );

    qglDrawArrays(
        GL_TRIANGLE_STRIP,
        0,
        4
    );

    gtaoWriteFramebuffer->Unbind();

    /*
    ========================
    Pass 1: scene composite
    ========================
    */
    Framebuffer::BindNull();

    qglViewport(x, y, w, h);
    qglScissor(x, y, w, h);

    GL_SelectTexture(2);
    gtaoOutputImage->Bind();
    GL_SelectTexture(0);

    GL_Uniform1i(
        SHADER_PARM_ADDR(gtaoPass),
        1
    );

    qglDrawArrays(
        GL_TRIANGLE_STRIP,
        0,
        4
    );

    gtaoHistoryValid = true;
    gtaoWriteA = !gtaoWriteA;

    globalImages->BindNull();

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_Vertex)
    );

    GL_DisableVertexAttribArray(
        SHADER_PARM_ADDR(attr_TexCoord)
    );

    GL_UseProgram(NULL);

    if (blendEnabled)
    {
        qglEnable(GL_BLEND);
    }

    if (depthEnabled)
    {
        qglEnable(GL_DEPTH_TEST);
    }

    if (depthMask)
    {
        qglDepthMask(GL_TRUE);
    }

    if (bufferId != 0)
    {
        qglBindBuffer(
            GL_ARRAY_BUFFER,
            bufferId
        );
    }
}

void RB_PP_Render(void)
{
    RB_SSGITrace();
    RB_HDR_BrightPass();
    RB_HDR_BlurHorizontal();
    RB_HDR_BlurVertical();
    RB_HDR_LuminancePass();

    RB_HDR_DownsamplePass(
        globalImages->hdrLuminanceImageA,
        hdrLuminanceFramebufferB
    );

    RB_HDR_DownsamplePass(
        globalImages->hdrLuminanceImageB,
        hdrLuminanceFramebufferC
    );

    RB_HDR_DownsamplePass(
        globalImages->hdrLuminanceImageC,
        hdrLuminanceFramebufferD
    );

    RB_HDR_DownsamplePass(
        globalImages->hdrLuminanceImageD,
        hdrLuminanceFramebufferE
    );
         
    RB_HDR_ExposurePass();

    if (r_hdrDebugExposure.GetBool()) {
        RB_HDR_DebugReadPixel(
            "Lum1x1",
            hdrLuminanceFramebufferE
        );

        RB_HDR_DebugReadPixel(
            "Exposure",
            hdrExposureResultIsB
            ? hdrExposureFramebufferB
            : hdrExposureFramebufferA
        );
    }

    RB_HDR_Tonemap();

    RB_HDR_CAS();

    RB_SSGI();

    if (r_renderMode.GetInteger() == 0)
        return;

    float jitterTexScale[4] = { 0.0f };

    switch (r_renderMode.GetInteger())
    {

		// Retro shader modes
        case RENDERMODE_2BIT:
            jitterTexScale[0] = 1.0f;
            GL_UseProgram(&retro2BitShader);
            break;
        case RENDERMODE_2BIT_HIGHRES:
            jitterTexScale[0] = 2.0f;
            GL_UseProgram(&retro2BitShader);
            break;
        case RENDERMODE_C64:
            jitterTexScale[0] = 1.0f;
            GL_UseProgram(&retroC64Shader);
            break;
        case RENDERMODE_C64_HIGHRES:
            jitterTexScale[0] = 2.0f;
            GL_UseProgram(&retroC64Shader);
            break;
        case RENDERMODE_CPC:
            jitterTexScale[0] = 1.0f;
            GL_UseProgram(&retroCPCShader);
            break;
        case RENDERMODE_CPC_HIGHRES:
            jitterTexScale[0] = 2.0f;
            GL_UseProgram(&retroCPCShader);
            break;
        case RENDERMODE_GENESIS:
            jitterTexScale[0] = 1.0f;
            GL_UseProgram(&retroGenesisShader);
            break;
        case RENDERMODE_GENESIS_HIGHRES:
            jitterTexScale[0] = 2.0f;
            GL_UseProgram(&retroGenesisShader);
            break;
        case RENDERMODE_PSX:
            GL_UseProgram(&retroPS1Shader);
            break;
        default:
            return;
    }

    jitterTexScale[1] = r_retroDitherScale.GetFloat();
    GL_Uniform4fv(SHADER_PARMS_ADDR(u_uniformParm, 0), jitterTexScale);

    const int &x = backEnd.viewDef->viewport.x1;
    const int &y = backEnd.viewDef->viewport.y1;
    const int w = backEnd.viewDef->viewport.x2 - backEnd.viewDef->viewport.x1 + 1;
    const int h = backEnd.viewDef->viewport.y2 - backEnd.viewDef->viewport.y1 + 1;

	if (r_useScissor.GetBool()) {
		qglScissor(x, y, w, h);
		backEnd.currentScissor = backEnd.viewDef->scissor;
	}

    GLboolean depthMask;
    GLint bufferId;
    qglGetBooleanv(GL_DEPTH_WRITEMASK, &depthMask);
    qglGetIntegerv(GL_ARRAY_BUFFER_BINDING, &bufferId);
    GLboolean isBlend = qglIsEnabled(GL_BLEND);
    GLboolean isDepthTest = qglIsEnabled(GL_DEPTH_TEST);

	//int glState = backEnd.glState.glStateBits;
	//GL_State(GLS_SRCBLEND_ONE | GLS_DSTBLEND_ZERO);


    if(isBlend) qglDisable(GL_BLEND);
    if(isDepthTest)
        qglDisable(GL_DEPTH_TEST);
    if(depthMask)
        qglDepthMask(GL_FALSE);
	if(bufferId != 0)
		qglBindBuffer(GL_ARRAY_BUFFER, 0);

	const float hw = (float)w * 0.5f;
	const float hh = (float)h * 0.5f;

    const float vs[] = {
            -hw, -hh,
            hw, -hh,
            -hw, hh,
            hw, hh,
    };
    static const float ts[] = {
            0,0,
            1,0,
            0,1,
            1,1,
    };

    globalImages->frameImage->CopyFramebuffer(0, 0, glConfig.vidWidth, glConfig.vidHeight, true);
	const float sw = glConfig.vidWidth;
	const float sh = glConfig.vidHeight;

    float	parm[4];
    float		pot;

    parm[2] = 0.0f;
    parm[3] = 1.0f;

    // screen power of two correction factor, assuming the copy to _currentRender
    // also copied an extra row and column for the bilerp
    pot = globalImages->frameImage->uploadWidth;
    parm[0] = sw / pot;

    pot = globalImages->frameImage->uploadHeight;
    parm[1] = sh / pot;

    GL_Uniform4fv(SHADER_PARM_ADDR(nonPowerOfTwo), parm);

    // window coord to 0.0 to 1.0 conversion
    parm[0] = 1.0f / sw;
    parm[1] = 1.0f / sh;
	//karin: need x and y offset coord if copy framebuffer with current viewport, and uv = gl_FragCoord.xy - nonPowerOfTwo.zw in fragment shader
    //parm[2] = x;
    //parm[3] = y;
    GL_Uniform4fv(SHADER_PARM_ADDR(windowCoords), parm);

    GL_SelectTexture( 0 );
    globalImages->frameImage->Bind();

    GL_EnableVertexAttribArray(SHADER_PARM_ADDR(attr_Vertex));
    GL_EnableVertexAttribArray(SHADER_PARM_ADDR(attr_TexCoord));

    GL_VertexAttribPointer(offsetof(shaderProgram_t, attr_Vertex), 2, GL_FLOAT, false, 0, vs);
    GL_VertexAttribPointer(offsetof(shaderProgram_t, attr_TexCoord), 2, GL_FLOAT, false, 0, ts);

    qglDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

    globalImages->BindNull();

    GL_DisableVertexAttribArray(SHADER_PARM_ADDR(attr_Vertex));
    GL_DisableVertexAttribArray(SHADER_PARM_ADDR(attr_TexCoord));
    GL_UseProgram(NULL);

	//GL_State(glState);
    if(isBlend)
        qglEnable(GL_BLEND);
    if(isDepthTest)
        qglEnable(GL_DEPTH_TEST);
    if(depthMask)
        qglDepthMask(GL_TRUE);
    if(bufferId != 0)
        qglBindBuffer(GL_ARRAY_BUFFER, bufferId);
}
