HDR Investigation Findings

- Postprocess pipeline exists.
- Postprocess buffers originally use GL_RGBA8.
- Postprocess framebuffer successfully tested with GL_RGBA16F.
- No visual regressions observed.
- No HDR output observed.
- No Auto HDR activation observed.
 
Conclusion:
FP16 postprocess framebuffer support is functional.
Remaining SDR bottlenecks likely exist elsewhere in the render path.
