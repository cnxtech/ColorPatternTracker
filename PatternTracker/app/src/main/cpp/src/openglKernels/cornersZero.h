static const char *cornersZero_kernel =
"#version 310 es\n"
"\n"
"#extension GL_ANDROID_extension_pack_es31a : require\n"
"layout(local_size_x = 128, local_size_y = 8) in;\n"
"layout(std430, binding = 2) buffer C_ssbo {int C[];};\n"
"void main()\n"
"{\n"
"	int sz_x = int((gl_NumWorkGroups.x*gl_WorkGroupSize.x));\n"
"\t\tint sz_y = int((gl_NumWorkGroups.y*gl_WorkGroupSize.y));\n"
"	\n"
"\t\tint idx = int(gl_GlobalInvocationID.x);\n"
"\t\tint idy = int(gl_GlobalInvocationID.y);\n"
"	\n"
"\t\tint id = idy*sz_x + idx;\n"
"\t\tC[id]=0;\n"
"}\n";
