# Renderer HDR v2 Stable

## Completed

### HDR
- Log-average luminance
- ACES tonemapping
- Bloom
- Frame-rate independent exposure
- Exposure history ping-pong
- Exposure dead-zone support

### Image Quality
- CAS sharpening operational

### Infrastructure
- Geometric normal framebuffer implemented
- Geometric normal image permanently attached
- HDR scene framebuffer stable

### Validation
- Exposure verified at 30 FPS and 144 FPS
- Adaptation timing confirmed frame-rate independent

## Known Investigation

### PBR
- Square specular artifacts remain in inherited idTech4A++ PBR path.
- Artifacts disappear in Blinn-Phong.
- Artifacts disappear in RMAO mode.
- Evidence indicates legacy specular-to-roughness conversion is flawed.

### D3HDP Investigation

D3HDP assets generally provide:
- Mesh (.lwo)
- Diffuse texture (.tga)
- Local normal map (_local.tga)
- Specular texture (_s.tga)

Current evidence strongly suggests D3HDP specular maps are authored reflectance masks rather than true roughness or metallic maps.

## Next Branch

interaction-d3hdp

### Goal

Create a D3HDP-aware GGX material workflow while preserving support for true authored RMAO assets.
