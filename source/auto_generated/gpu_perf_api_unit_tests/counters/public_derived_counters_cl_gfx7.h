//==============================================================================
// Copyright (c) 2015-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for CL GFX7 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_CL_GFX7
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_CL_GFX7

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for CLGfx7 Public counter index
#define WAVEFRONTS_PUBLIC_CL_GFX7 0
#define VALUINSTS_PUBLIC_CL_GFX7 1
#define SALUINSTS_PUBLIC_CL_GFX7 2
#define VFETCHINSTS_PUBLIC_CL_GFX7 3
#define SFETCHINSTS_PUBLIC_CL_GFX7 4
#define VWRITEINSTS_PUBLIC_CL_GFX7 5
#define FLATVMEMINSTS_PUBLIC_CL_GFX7 6
#define LDSINSTS_PUBLIC_CL_GFX7 7
#define FLATLDSINSTS_PUBLIC_CL_GFX7 8
#define GDSINSTS_PUBLIC_CL_GFX7 9
#define VALUUTILIZATION_PUBLIC_CL_GFX7 10
#define VALUBUSY_PUBLIC_CL_GFX7 11
#define SALUBUSY_PUBLIC_CL_GFX7 12
#define FETCHSIZE_PUBLIC_CL_GFX7 13
#define WRITESIZE_PUBLIC_CL_GFX7 14
#define CACHEHIT_PUBLIC_CL_GFX7 15
#define MEMUNITBUSY_PUBLIC_CL_GFX7 16
#define MEMUNITSTALLED_PUBLIC_CL_GFX7 17
#define WRITEUNITSTALLED_PUBLIC_CL_GFX7 18
#define LDSBANKCONFLICT_PUBLIC_CL_GFX7 19

/// Number of public counters for CL GFX7 
const size_t kClGfx7PublicCounterCount = 20;

/// Array of public counters for CL GFX7 
extern const GpaCounterDesc kClGfx7PublicCounters[kClGfx7PublicCounterCount];

#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_CL_GFX7
