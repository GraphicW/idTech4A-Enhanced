// WebGL 1.0 / GLSL ES 1.00 compatible version
GLSL_SHADER const char GEOMETRIC_NORMAL_FRAG[] =
"#version 100\n"
"\n"
"precision highp float;\n"
"\n"
"varying highp vec3 var_ViewNormal;\n"
"\n"
"void main(void)\n"
"{\n"
"    vec3 viewNormal = normalize(var_ViewNormal);\n"
"\n"
"    gl_FragColor = vec4(\n"
"        viewNormal * 0.5 + 0.5,\n"
"        1.0\n"
"    );\n"
"}\n"
;
