#include "renderer/RenderEffect.h"

// Single definition of the external pointer declared in RenderEffect.h
rvRenderEffectLocal* def = nullptr;

// Optional minimal helpers (safe no-op implementations)
namespace {
    // If you later want a default instance, create it here and assign to def.
    // static rvRenderEffectLocal defaultRenderEffect;
}

// If you need to initialize a default instance at startup, do it here:
// void InitDefaultRenderEffect() {
//     def = &defaultRenderEffect;
// }
