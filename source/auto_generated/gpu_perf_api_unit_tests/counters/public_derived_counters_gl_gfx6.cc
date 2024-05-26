//==============================================================================
// Copyright (c) 2015-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for GL GFX6  for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#include "auto_generated/gpu_perf_api_unit_tests/counters/public_derived_counters_gl_gfx6.h"

const GpaCounterDesc kGlGfx6PublicCounters[kGlGfx6PublicCounterCount] = {
    {"GPUTime", "Timing", "Time this API call took to execute on the GPU in nanoseconds. Does not include time that draw calls are processed in parallel.", "0,TS_FREQ,/,(1000000000),*", 1, kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, {0xcc28af53, 0xf7f8, 0xc96a, {0x9f, 0x04, 0x76, 0x6f, 0x6a, 0xaf, 0xe4, 0xce}}},
    {"GPUBusy", "Timing", "The percentage of time GPU was busy.", "0,1,/,(100),*,(100),min", 2, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xbef38bf3, 0x1167, 0x0844, {0x81, 0xf0, 0x67, 0xd2, 0xd2, 0x8d, 0xdb, 0xc5}}},
    {"TessellatorBusy", "Timing", "The percentage of time the tessellation engine is busy.", "0,NUM_PRIM_PIPES,/,1,/,(100),*", 2, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x36af6c72, 0xdcfb, 0x8102, {0x4f, 0xd4, 0xce, 0x8d, 0xdc, 0x57, 0x33, 0x65}}},
    {"VSBusy", "Timing", "The percentage of time the ShaderUnit has vertex shader work to do.", "(0),0,4,ifnotzero,1,5,ifnotzero,2,6,ifnotzero,7,/,(100),*,(100),min", 8, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x94caad5e, 0x867c, 0x6c09, {0xcf, 0x3a, 0xd0, 0x5b, 0x51, 0xdf, 0x8f, 0x3b}}},
    {"VSTime", "Timing", "Time vertex shaders are busy in nanoseconds.", "(0),1,5,ifnotzero,2,6,ifnotzero,3,7,ifnotzero,8,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", 9, kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, {0xd6ce819e, 0x69af, 0xa241, {0xd0, 0x7a, 0x5d, 0xd8, 0xd1, 0x46, 0xe4, 0x36}}},
    {"HSBusy", "Timing", "The percentage of time the ShaderUnit has hull shader work to do.", "(0),0,1,ifnotzero,2,/,(100),*,(100),min", 3, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x16f30a0b, 0x4cbf, 0xeccd, {0xb1, 0x3f, 0xab, 0x68, 0xdd, 0x25, 0x4d, 0x32}}},
    {"HSTime", "Timing", "Time hull shaders are busy in nanoseconds.", "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", 4, kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, {0x8386a863, 0xdd34, 0x1526, {0xf7, 0x03, 0x0f, 0x0c, 0x7b, 0x24, 0x1b, 0xc4}}},
    {"DSBusy", "Timing", "The percentage of time the ShaderUnit has domain shader work to do.", "(0),0,1,3,ifnotzero,4,ifnotzero,5,/,(100),*,(100),min", 6, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x0c626e8a, 0x9b82, 0xb6d4, {0xd9, 0xa3, 0x57, 0x85, 0x09, 0x31, 0x63, 0x01}}},
    {"DSTime", "Timing", "Time domain shaders are busy in nanoseconds.", "(0),1,2,4,ifnotzero,5,ifnotzero,6,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", 7, kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, {0xbfe28947, 0xc727, 0x8a9f, {0xaa, 0x59, 0xc2, 0x18, 0xe5, 0x8b, 0xfb, 0xa5}}},
    {"GSBusy", "Timing", "The percentage of time the ShaderUnit has geometry shader work to do.", "(0),0,1,ifnotzero,2,/,(100),*,(100),min", 3, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x876f36d8, 0xd046, 0x833f, {0x78, 0x32, 0x67, 0x3c, 0xbf, 0xfd, 0x0a, 0x45}}},
    {"GSTime", "Timing", "Time geometry shaders are busy in nanoseconds.", "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", 4, kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, {0xc73e715f, 0x59af, 0x76e8, {0x9e, 0x22, 0x09, 0x7b, 0x94, 0xc0, 0x66, 0xc4}}},
    {"PSBusy", "Timing", "The percentage of time the ShaderUnit has pixel shader work to do.", "(0),0,1,ifnotzero,2,/,(100),*,(100),min", 3, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x7e772beb, 0xd82c, 0xbd9a, {0xae, 0xd0, 0xfe, 0x50, 0x4d, 0x41, 0x6c, 0xe5}}},
    {"PSTime", "Timing", "Time pixel shaders are busy in nanoseconds.", "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", 4, kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, {0xedca7694, 0x7416, 0xe8a6, {0x0c, 0x5a, 0x63, 0xa5, 0xad, 0x5f, 0x3d, 0x74}}},
    {"CSBusy", "Timing", "The percentage of time the ShaderUnit has compute shader work to do.", "(0),0,1,ifnotzero,2,/,(100),*,(100),min", 3, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x493fdd90, 0x8d2b, 0xa055, {0x5e, 0x4e, 0x2d, 0x29, 0xc3, 0x39, 0x6b, 0x8c}}},
    {"CSTime", "Timing", "Time compute shaders are busy in nanoseconds.", "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", 4, kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, {0xdbc24916, 0xecb2, 0x7eef, {0x8d, 0x63, 0x7a, 0xfa, 0xda, 0xaa, 0xb6, 0xbc}}},
    {"VSVerticesIn", "VertexShader", "The number of vertices processed by the VS.", "0,1,1,ifnotzero,2,2,ifnotzero", 3, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x810a04c8, 0x2ff4, 0x081d, {0x76, 0x6d, 0xbf, 0xa2, 0xbd, 0x4a, 0xd9, 0x16}}},
    {"HSPatches", "HullShader", "The number of patches processed by the HS.", "0", 1, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xd1bbd27d, 0xd591, 0x4509, {0xdf, 0x52, 0xd3, 0x29, 0xfb, 0x73, 0xa9, 0x8f}}},
    {"DSVerticesIn", "DomainShader", "The number of vertices processed by the DS.", "(0),0,1,1,ifnotzero,2,ifnotzero", 3, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xb88d9d05, 0x2418, 0xe639, {0x4e, 0x3d, 0x3a, 0x58, 0x15, 0x85, 0x5f, 0x8d}}},
    {"GSPrimsIn", "GeometryShader", "The number of primitives passed into the GS.", "0", 1, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x20c29866, 0x509a, 0xaaab, {0x26, 0x97, 0x6b, 0x2c, 0x38, 0xf7, 0x99, 0x53}}},
    {"GSVerticesOut", "GeometryShader", "The number of vertices output by the GS.", "(0),0,1,ifnotzero", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x775b9736, 0x319a, 0xbd8a, {0x48, 0xc9, 0x68, 0xdb, 0x9c, 0x91, 0xd9, 0x78}}},
    {"PrimitiveAssemblyBusy", "Timing", "The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", "0,1,-,2,3,+,4,+,5,(2),*,+,SU_CLOCKS_PRIM,*,-,NUM_PRIM_PIPES,/,(0),max,6,/,(100),*,(100),min", 7, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x54ac5640, 0xc4d7, 0x95e2, {0x20, 0xe0, 0x6a, 0x9f, 0xdf, 0xc0, 0x73, 0x33}}},
    {"PrimitivesIn", "PrimitiveAssembly", "The number of primitives received by the hardware. This includes primitives generated by tessellation.", "0", 1, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xa515b80d, 0x75c3, 0xc7d2, {0x0d, 0x2f, 0xd7, 0x76, 0x6b, 0x47, 0x59, 0xa6}}},
    {"CulledPrims", "PrimitiveAssembly", "The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", "0,1,+,2,+,3,+,4,+", 5, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x589bdf55, 0x9192, 0x280a, {0x41, 0xc3, 0x58, 0x4b, 0xc9, 0x4f, 0x25, 0x62}}},
    {"ClippedPrims", "PrimitiveAssembly", "The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", "0", 1, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x5ef6f9d5, 0x155e, 0x5baa, {0x16, 0x3f, 0x83, 0x59, 0xd9, 0xea, 0x9b, 0xbf}}},
    {"PAStalledOnRasterizer", "PrimitiveAssembly", "Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", "0,NUM_PRIM_PIPES,/,1,/,(100),*", 2, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x6f9f416b, 0x53c1, 0x0457, {0xf8, 0x8c, 0x7b, 0x6b, 0xa8, 0x97, 0x39, 0x74}}},
    {"PSPixelsOut", "PixelShader", "Pixels exported from shader to color buffers. Does not include killed or alpha tested pixels; if there are multiple render targets, each render target receives one export, so this will be 2 for 1 pixel written to two RTs.", "0,1,2,3,sum4", 4, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x24cba16c, 0xbaa6, 0x6ecd, {0x95, 0xad, 0x92, 0xec, 0xb1, 0x33, 0x8d, 0xa1}}},
    {"PSExportStalls", "PixelShader", "Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", "0,1,max,2,max,3,max,4,/,NUM_SHADER_ENGINES,/,(100),*", 5, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x9b4f466c, 0xff97, 0x22bb, {0x55, 0x7d, 0x84, 0xd3, 0xc4, 0xc5, 0x18, 0x95}}},
    {"CSThreadGroups", "ComputeShader", "Total number of thread groups.", "0", 1, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x8ce3fc80, 0x56b2, 0x97f9, {0x8e, 0x70, 0x2e, 0x8c, 0x74, 0x7c, 0xea, 0x68}}},
    {"CSWavefronts", "ComputeShader", "The total number of wavefronts used for the CS.", "0", 1, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x42379c6e, 0x369b, 0xc237, {0x8b, 0x25, 0xcd, 0xb9, 0xcd, 0xc6, 0x5c, 0x4d}}},
    {"CSThreads", "ComputeShader", "The number of CS threads processed by the hardware.", "(0),1,0,ifnotzero", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x7a648013, 0x6eac, 0x2665, {0xac, 0x36, 0x13, 0xc6, 0xf4, 0xac, 0x9c, 0x26}}},
    {"CSVALUInsts", "ComputeShader", "The average number of vector ALU instructions executed per work-item (affected by flow control).", "(0),0,1,/,2,ifnotzero", 3, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x376cb1cc, 0x5a40, 0x9d1d, {0x40, 0x4c, 0xf1, 0x73, 0x6c, 0x0c, 0x50, 0x84}}},
    {"CSVALUUtilization", "ComputeShader", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", "(0),0,1,(64),*,/,(100),*,2,ifnotzero,(100),min", 3, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x4476879e, 0xcdc0, 0xd602, {0xb2, 0x4e, 0x9b, 0x4a, 0x8d, 0x38, 0x43, 0x8f}}},
    {"CSSALUInsts", "ComputeShader", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", "(0),0,1,/,2,ifnotzero", 3, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xeb211144, 0x8136, 0xff86, {0xe8, 0xbf, 0x4d, 0x04, 0x93, 0xa9, 0x04, 0xcb}}},
    {"CSVFetchInsts", "ComputeShader", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", "(0),0,1,/,2,ifnotzero", 3, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x3e2829c0, 0x6215, 0x783b, {0xc2, 0x71, 0x6d, 0x57, 0xff, 0x2c, 0x52, 0x0e}}},
    {"CSSFetchInsts", "ComputeShader", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", "(0),0,1,/,2,ifnotzero", 3, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xda09171c, 0x6a0a, 0x584f, {0xfd, 0xdc, 0xdc, 0x50, 0x62, 0xd6, 0x3a, 0x3e}}},
    {"CSVWriteInsts", "ComputeShader", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", "(0),0,1,/,2,ifnotzero", 3, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x43438c22, 0xe910, 0xb377, {0xb7, 0x67, 0xb3, 0x29, 0x02, 0xe0, 0xdf, 0x0d}}},
    {"CSVALUBusy", "ComputeShader", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", "(0),0,(4),*,NUM_SIMDS,/,1,/,(100),*,2,ifnotzero", 3, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xf1e64815, 0xf6a8, 0xc277, {0xd4, 0xf9, 0xd0, 0x54, 0xb4, 0x43, 0xe2, 0x05}}},
    {"CSSALUBusy", "ComputeShader", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", "(0),0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*,2,ifnotzero", 3, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x3fc35f4e, 0x9882, 0x94e3, {0x6f, 0x5f, 0x4e, 0x81, 0xcd, 0x97, 0x08, 0x2a}}},
    {"CSMemUnitBusy", "ComputeShader", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", "(0),0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,/,NUM_SHADER_ENGINES,/,(100),*,9,ifnotzero", 10, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x42ab96e1, 0x0a24, 0x96c8, {0xc4, 0xff, 0x09, 0x8f, 0xa2, 0x67, 0xd7, 0x8e}}},
    {"CSMemUnitStalled", "ComputeShader", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", "(0),0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,/,NUM_SHADER_ENGINES,/,(100),*,9,ifnotzero", 10, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xf18e8679, 0x1511, 0xd533, {0xd9, 0xee, 0x43, 0x65, 0x19, 0x7f, 0x7d, 0x0c}}},
    {"CSFetchSize", "ComputeShader", "The total kilobytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", "(0),0,1,2,3,4,5,6,7,8,9,10,11,sum12,(32),*,(1024),/,12,ifnotzero", 13, kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, {0x03cdb7e9, 0x2bc3, 0x15c1, {0x81, 0x1f, 0x21, 0x06, 0xf3, 0x44, 0x92, 0x95}}},
    {"CSWriteSize", "ComputeShader", "The total kilobytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", "(0),0,1,2,3,4,5,6,7,8,9,10,11,sum12,(32),*,(1024),/,12,ifnotzero", 13, kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, {0x3ec1ce55, 0xd621, 0xb7a5, {0x5b, 0x8d, 0x29, 0x09, 0xcf, 0x2d, 0xbe, 0x7d}}},
    {"CSCacheHit", "ComputeShader", "The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", "(0),0,1,2,3,4,5,6,7,8,9,10,11,sum12,0,1,2,3,4,5,6,7,8,9,10,11,sum12,12,13,14,15,16,17,18,19,20,21,22,23,sum12,+,/,(100),*,24,ifnotzero", 25, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x50fdbc38, 0xd099, 0x5957, {0x5f, 0x75, 0xdf, 0xe5, 0x34, 0x1b, 0x21, 0x87}}},
    {"CSWriteUnitStalled", "ComputeShader", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", "(0),0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,/,(100),*,13,ifnotzero", 14, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x3e0e1bdc, 0xf66c, 0xeddd, {0xaf, 0x3d, 0xf8, 0xe9, 0xe8, 0xf4, 0x5f, 0xd8}}},
    {"CSGDSInsts", "ComputeShader", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", "(0),0,1,/,2,ifnotzero", 3, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x2a867f3e, 0x4a37, 0xad16, {0x55, 0xd1, 0xf0, 0x3d, 0x74, 0x70, 0x78, 0x19}}},
    {"CSLDSInsts", "ComputeShader", "The average number of LDS read/write instructions executed per work-item (affected by flow control).", "(0),0,1,/,2,ifnotzero", 3, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x61b0b351, 0x7e06, 0xef8e, {0xa8, 0xe0, 0x7a, 0x9e, 0x32, 0x00, 0xa8, 0x36}}},
    {"CSALUStalledByLDS", "ComputeShader", "The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", "(0),0,1,/,2,/,NUM_SHADER_ENGINES,/,(100),*,3,ifnotzero", 4, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x6dc4f1c2, 0xbad0, 0xc9ff, {0x15, 0x6e, 0x88, 0x3b, 0x31, 0x9a, 0x75, 0x2a}}},
    {"CSLDSBankConflict", "ComputeShader", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", "(0),0,1,/,NUM_SIMDS,/,(100),*,2,ifnotzero", 3, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x1065ee10, 0x2e41, 0xea41, {0x1e, 0xb3, 0xb6, 0x1b, 0x49, 0x17, 0x52, 0xf4}}},
    {"TexUnitBusy", "Timing", "The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,/,NUM_SHADER_ENGINES,/,(100),*", 9, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x36afb8d9, 0x42fc, 0xaafe, {0x66, 0xc5, 0x44, 0x95, 0x42, 0x15, 0x3b, 0x2c}}},
    {"TexTriFilteringPct", "TextureUnit", "Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", "0,1,2,3,4,5,6,7,sum8,8,9,10,11,12,13,14,15,sum8,0,1,2,3,4,5,6,7,sum8,+,/,(100),*", 16, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x1affc3c8, 0xb917, 0x5c81, {0x62, 0x2b, 0x70, 0x04, 0x52, 0x72, 0x08, 0xae}}},
    {"TexVolFilteringPct", "TextureUnit", "Percentage of pixels that received volume filtering.", "0,1,2,3,4,5,6,7,sum8,8,9,10,11,12,13,14,15,sum8,0,1,2,3,4,5,6,7,sum8,+,/,(100),*", 16, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xb5ff6bed, 0x3178, 0xaee4, {0x42, 0xdd, 0xc7, 0x43, 0x91, 0xc0, 0x2a, 0x2d}}},
    {"TexAveAnisotropy", "TextureUnit", "The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", "0,1,2,3,4,5,6,7,sum8,(2),8,9,10,11,12,13,14,15,sum8,*,+,(4),16,17,18,19,20,21,22,23,sum8,*,+,(6),24,25,26,27,28,29,30,31,sum8,*,+,(8),32,33,34,35,36,37,38,39,sum8,*,+,(10),40,41,42,43,44,45,46,47,sum8,*,+,(12),48,49,50,51,52,53,54,55,sum8,*,+,(14),56,57,58,59,60,61,62,63,sum8,*,+,(16),64,65,66,67,68,69,70,71,sum8,*,+,0,1,2,3,4,5,6,7,sum8,8,9,10,11,12,13,14,15,sum8,+,16,17,18,19,20,21,22,23,sum8,+,24,25,26,27,28,29,30,31,sum8,+,32,33,34,35,36,37,38,39,sum8,+,40,41,42,43,44,45,46,47,sum8,+,48,49,50,51,52,53,54,55,sum8,+,56,57,58,59,60,61,62,63,sum8,+,64,65,66,67,68,69,70,71,sum8,+,/", 72, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x7ca2a2b9, 0xa4eb, 0xce23, {0xd1, 0x63, 0x59, 0x14, 0x7e, 0x67, 0x23, 0x96}}},
    {"DepthStencilTestBusy", "Timing", "Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", "0,1,max,2,/,NUM_SHADER_ENGINES,/,(100),*", 3, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x6834fb52, 0x42e8, 0xbb50, {0xfd, 0x48, 0xec, 0x2f, 0x29, 0x04, 0xe7, 0xe0}}},
    {"HiZTilesAccepted", "DepthAndStencil", "Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", "0,1,+,2,3,+,/,(100),*", 4, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x56176f45, 0xd7ff, 0x813d, {0x4f, 0x05, 0x3b, 0x2f, 0x04, 0x60, 0x67, 0xe7}}},
    {"PreZTilesDetailCulled", "DepthAndStencil", "Percentage of tiles rejected because the associated prim had no contributing area.", "2,3,+,0,1,+,/,(100),*", 4, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xcad7f54d, 0xa044, 0x7574, {0xc4, 0x72, 0x6f, 0x20, 0x65, 0xcb, 0xee, 0xac}}},
    {"HiZQuadsCulled", "DepthAndStencil", "Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", "0,1,+,2,+,3,+,4,5,+,6,+,7,+,-,0,1,+,2,+,3,+,/,(100),*", 8, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xfa0e319b, 0x5573, 0x6d34, {0x5b, 0xab, 0x90, 0x47, 0x69, 0x92, 0x50, 0x36}}},
    {"PreZQuadsCulled", "DepthAndStencil", "Percentage of quads rejected based on the detailZ and earlyZ tests.", "5,6,+,7,+,8,+,4,-,0,1,+,2,+,3,+,/,(100),*", 9, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x4e77547b, 0xec55, 0x5663, {0xf0, 0x34, 0xaf, 0x59, 0xbe, 0x66, 0xd7, 0x7d}}},
    {"PostZQuads", "DepthAndStencil", "Percentage of quads for which the pixel shader will run and may be postZ tested.", "0,1,2,+,3,+,4,+,/,(100),*", 5, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x58f0d34b, 0xeeb8, 0xe8db, {0xab, 0xce, 0xcb, 0x72, 0x58, 0x41, 0x44, 0xbe}}},
    {"PreZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z before shading and passed.", "0,1,+", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x3bfe6c4d, 0x7422, 0xca03, {0x7e, 0xa5, 0xe6, 0x7f, 0xf1, 0xa0, 0x01, 0x36}}},
    {"PreZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z before shading and failed stencil test.", "0,1,+", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xdf7f705e, 0x5162, 0xd3b5, {0xda, 0x8b, 0x63, 0x46, 0x6c, 0xf9, 0xc4, 0xe5}}},
    {"PreZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z before shading and failed Z test.", "0,1,+", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x4484e950, 0xf7a4, 0x3800, {0xbc, 0x74, 0x78, 0xdd, 0x29, 0x7f, 0x01, 0x7e}}},
    {"PostZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z after shading and passed.", "0,1,+", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x4995d5d6, 0x2330, 0xb986, {0x50, 0x8b, 0xfa, 0xe2, 0x48, 0x56, 0xf4, 0x4c}}},
    {"PostZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z after shading and failed stencil test.", "0,1,+", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xae558af4, 0xf4be, 0x3dd4, {0x73, 0x16, 0xb2, 0xc4, 0xdc, 0xf0, 0xde, 0xf8}}},
    {"PostZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z after shading and failed Z test.", "0,1,+", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xb3684c94, 0x814a, 0xc695, {0xc8, 0x5d, 0xa5, 0xb6, 0xab, 0x79, 0x8b, 0x35}}},
    {"ZUnitStalled", "DepthAndStencil", "The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", "0,1,max,2,/,NUM_SHADER_ENGINES,/,(100),*", 3, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x5e86c3ad, 0x1726, 0x3157, {0x1d, 0x01, 0x7e, 0xd1, 0x88, 0xbf, 0x85, 0x4d}}},
    {"DBMemRead", "DepthAndStencil", "Number of bytes read from the depth buffer.", "0,1,+,(256),*,2,3,+,(32),*,+", 4, kGpaDataTypeFloat64, kGpaUsageTypeBytes, {0xdcdb4ee7, 0xbd50, 0x00f7, {0xc0, 0x28, 0x9e, 0x5f, 0x4c, 0xe8, 0x88, 0xc0}}},
    {"DBMemWritten", "DepthAndStencil", "Number of bytes written to the depth buffer.", "0,1,+,(32),*,2,3,+,(32),*,+", 4, kGpaDataTypeFloat64, kGpaUsageTypeBytes, {0xde5717f8, 0x8a49, 0xee44, {0x46, 0x45, 0x10, 0xde, 0x51, 0xb3, 0x7d, 0xcf}}},
    {"CBMemRead", "ColorBuffer", "Number of bytes read from the color buffer.", "0,1,+,(32),*", 2, kGpaDataTypeFloat64, kGpaUsageTypeBytes, {0x84b531d8, 0xa1f8, 0x7f49, {0x7c, 0x27, 0x7b, 0xc9, 0x78, 0x01, 0xf1, 0xe6}}},
    {"CBMemWritten", "ColorBuffer", "Number of bytes written to the color buffer.", "0,1,+,(32),*", 2, kGpaDataTypeFloat64, kGpaUsageTypeBytes, {0x550f8ff8, 0x60b6, 0xa6bf, {0x87, 0xd0, 0x25, 0xac, 0x9e, 0x87, 0xde, 0x70}}},
    {"CBSlowPixelPct", "ColorBuffer", "Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", "0,1,+,2,3,+,/,(100),*,(100),min", 4, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x5775943f, 0x0313, 0x7e52, {0x96, 0x38, 0xb2, 0x4a, 0x44, 0x91, 0x97, 0xbc}}},
};