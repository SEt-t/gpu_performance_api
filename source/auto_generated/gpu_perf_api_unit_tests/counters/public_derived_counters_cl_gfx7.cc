//==============================================================================
// Copyright (c) 2015-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for CL GFX7  for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#include "auto_generated/gpu_perf_api_unit_tests/counters/public_derived_counters_cl_gfx7.h"

const GpaCounterDesc kClGfx7PublicCounters[kClGfx7PublicCounterCount] = {
    {"Wavefronts", "General", "Total wavefronts.", "0", 1, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xe8999836, 0x489d, 0x80a6, {0x8e, 0x94, 0x2c, 0x3e, 0xa1, 0x91, 0xfd, 0x58}}},
    {"VALUInsts", "General", "The average number of vector ALU instructions executed per work-item (affected by flow control).", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x17c27c10, 0x3d5c, 0x64c2, {0xe7, 0xb4, 0x4e, 0xe1, 0xab, 0xdb, 0xbb, 0x46}}},
    {"SALUInsts", "General", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xe5693881, 0x8d63, 0x951d, {0x1f, 0x4f, 0xf9, 0xe4, 0xc8, 0x42, 0x36, 0xf5}}},
    {"VFetchInsts", "General", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xd45b0277, 0x03fa, 0x9480, {0xea, 0xda, 0x48, 0x71, 0xec, 0x89, 0xc5, 0x04}}},
    {"SFetchInsts", "General", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x7d9e4356, 0xa8f5, 0x04c7, {0xf7, 0xa8, 0xfe, 0x68, 0xdc, 0x01, 0xc4, 0x41}}},
    {"VWriteInsts", "General", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xd33f2e7c, 0x3198, 0xcf69, {0x24, 0x32, 0xd2, 0xa3, 0x2f, 0x38, 0x5d, 0x46}}},
    {"FlatVMemInsts", "General", "The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", "0,1,-,2,/", 3, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x05e4a953, 0xc59a, 0xe722, {0x87, 0x2b, 0xe4, 0xbc, 0x75, 0x26, 0xbc, 0xee}}},
    {"LDSInsts", "LocalMemory", "The average number of LDS read or LDS write instructions executed per work item (affected by flow control). Excludes FLAT instructions that read from or write to LDS.", "0,1,-,2,/", 3, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xbe9bbead, 0xf82a, 0xa2c6, {0x83, 0x33, 0x1a, 0x5c, 0x4c, 0xe5, 0xee, 0x98}}},
    {"FlatLDSInsts", "LocalMemory", "The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0x0f7d8f58, 0x1750, 0xa36f, {0xd0, 0x3e, 0x85, 0xa2, 0xd9, 0xcd, 0x6e, 0x08}}},
    {"GDSInsts", "General", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", "0,1,/", 2, kGpaDataTypeFloat64, kGpaUsageTypeItems, {0xc63fc276, 0x151e, 0x3b88, {0x6e, 0xdb, 0xa0, 0xc9, 0x25, 0x07, 0xaa, 0xdb}}},
    {"VALUUtilization", "General", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", "0,1,(64),*,/,(100),*,(100),min", 2, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xffea5f90, 0x624f, 0x67dd, {0x4c, 0xa6, 0x74, 0x91, 0x1f, 0x4c, 0x85, 0xd3}}},
    {"VALUBusy", "General", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", "0,(4),*,NUM_SIMDS,/,1,/,(100),*", 2, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x51800108, 0xe003, 0x3c1f, {0xb9, 0x2a, 0xe2, 0x24, 0xaa, 0xab, 0x3c, 0x1b}}},
    {"SALUBusy", "General", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*", 2, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xf1d53e7a, 0x0182, 0x42f8, {0x7d, 0x2c, 0x60, 0x29, 0xbf, 0xf6, 0xbc, 0x2d}}},
    {"FetchSize", "GlobalMemory", "The total kilobytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,(1024),/", 16, kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, {0xd91ac445, 0xb44f, 0xf821, {0x91, 0x23, 0x9d, 0x82, 0x9e, 0x54, 0x4c, 0x33}}},
    {"WriteSize", "GlobalMemory", "The total kilobytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,(1024),/", 16, kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, {0xe09d95da, 0x2772, 0xf7cb, {0x51, 0xf5, 0x4f, 0xad, 0x27, 0xbb, 0x99, 0x8b}}},
    {"CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*", 32, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xdfbeebab, 0xf7c1, 0x1211, {0xe5, 0x02, 0x4a, 0xae, 0x36, 0x1e, 0x2a, 0xd7}}},
    {"MemUnitBusy", "GlobalMemory", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,/,NUM_SHADER_ENGINES,/,(100),*", 12, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xa1efa380, 0x4a72, 0xe066, {0xe0, 0x6a, 0x2a, 0xb7, 0x1a, 0x48, 0x85, 0x21}}},
    {"MemUnitStalled", "GlobalMemory", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,/,NUM_SHADER_ENGINES,/,(100),*", 12, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x465ba54f, 0xd250, 0x1453, {0x79, 0x0a, 0x73, 0x1b, 0x10, 0xd2, 0x30, 0xb1}}},
    {"WriteUnitStalled", "GlobalMemory", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max,16,/,(100),*", 17, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0x594ad3ce, 0xd1ec, 0x10fc, {0x7d, 0x59, 0x25, 0x73, 0x8e, 0x39, 0x7d, 0x72}}},
    {"LDSBankConflict", "LocalMemory", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", "0,1,/,NUM_SIMDS,/,(100),*", 2, kGpaDataTypeFloat64, kGpaUsageTypePercentage, {0xb3387100, 0x3d5a, 0x3235, {0xe6, 0x12, 0x58, 0xb9, 0x41, 0x68, 0x3e, 0xb6}}},
};
