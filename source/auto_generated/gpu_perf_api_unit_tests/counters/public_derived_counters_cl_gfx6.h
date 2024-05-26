//==============================================================================
// Copyright (c) 2015-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for CL GFX6 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_CL_GFX6
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_CL_GFX6

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for CLGfx6 Public counter index
#define WAVEFRONTS_PUBLIC_CL_GFX6 0
#define VALUINSTS_PUBLIC_CL_GFX6 1
#define SALUINSTS_PUBLIC_CL_GFX6 2
#define VFETCHINSTS_PUBLIC_CL_GFX6 3
#define SFETCHINSTS_PUBLIC_CL_GFX6 4
#define VWRITEINSTS_PUBLIC_CL_GFX6 5
#define LDSINSTS_PUBLIC_CL_GFX6 6
#define GDSINSTS_PUBLIC_CL_GFX6 7
#define VALUUTILIZATION_PUBLIC_CL_GFX6 8
#define VALUBUSY_PUBLIC_CL_GFX6 9
#define SALUBUSY_PUBLIC_CL_GFX6 10
#define FETCHSIZE_PUBLIC_CL_GFX6 11
#define WRITESIZE_PUBLIC_CL_GFX6 12
#define CACHEHIT_PUBLIC_CL_GFX6 13
#define MEMUNITBUSY_PUBLIC_CL_GFX6 14
#define MEMUNITSTALLED_PUBLIC_CL_GFX6 15
#define WRITEUNITSTALLED_PUBLIC_CL_GFX6 16
#define LDSBANKCONFLICT_PUBLIC_CL_GFX6 17

/// Number of public counters for CL GFX6 
const size_t kClGfx6PublicCounterCount = 18;

/// Array of public counters for CL GFX6 
extern const GpaCounterDesc kClGfx6PublicCounters[kClGfx6PublicCounterCount];

#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_CL_GFX6
