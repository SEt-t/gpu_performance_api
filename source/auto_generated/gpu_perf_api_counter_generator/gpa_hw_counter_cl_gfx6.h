//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief CL counter definitions for GFX6.
//==============================================================================

// This file is NOT autogenerated by the ConvertHWEnums project.

#ifndef GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_CL_GFX6_H_
#define GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_CL_GFX6_H_

// clang-format off

#include <set>

struct GpaHardwareCounterDesc;
struct GpaCounterGroupDesc;
struct GpaSqCounterGroupDesc;

namespace counter_cl_gfx6
{
    extern std::vector<std::vector<GpaHardwareCounterDesc>*> kClCounterGroupArrayGfx6;           ///< Array of hardware counter groups for Cl for Gfx6 family
    extern std::vector<GpaCounterGroupDesc>                  kHwClGroupsGfx6;                    ///< Array of counter groups for Cl for Gfx6 family
    extern GpaCounterGroupExposedCounterDesc                 kHwClExposedCountersByGroupGfx6[];  ///< Array of exposed counter groups for Cl for Gfx6 family
    extern GpaPaddedCounterDesc                              kClPaddedCounterByGroupGfx6[];      ///< Array of reserved counter for Cl for Gfx6 family
    extern GpaSqCounterGroupDesc                             kHwClSqGroupsGfx6[];                ///< Array of SQ groups for Cl for Gfx6 family
    extern unsigned int                                      kHwClSqIsolatedGroupsGfx6[];        ///< Array of counter groups isolated from SQ counter groups for Cl for Gfx6 family
    extern const std::set<unsigned int>                      kHwClTimestampBlockIdsGfx6;         ///< Timestamp block id's for Cl for Gfx6 family
    extern const std::set<unsigned int>                      kHwClTimeCounterIndicesGfx6;        ///< Timestamp counter indices for Cl for Gfx6 family
    extern const unsigned int                                kHwClGroupCountGfx6;                ///< Hardware Group Count for Cl for Gfx6 family
    extern const unsigned int                                kClPaddedCounterGroupCountGfx6;     ///< reserved counter group count for Cl for Gfx6 family
    extern const unsigned int                                kHwClSqGroupCountGfx6;              ///< Hardware SQ Group Count for Cl for Gfx6 family
    extern const unsigned int                                kHwClSqIsolatedGroupCountGfx6;      ///< Hardware Isolated Group Count for Cl for Gfx6 family

    /// @brief If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
    ///
    /// @param [in] asic_type The ASIC type that is currently in use.
    ///
    /// @return True if the ASIC is matched by this file and block instances are updated, otherwise false.
    inline bool OverrideMaxBlockEvents(GDT_HW_ASIC_TYPE asic_type)
    {
        UNREFERENCED_PARAMETER(asic_type);

        return true;
    }
}  //  namespace counter_cl_gfx6

// clang-format on

#endif  // GPA_AUTO_GENERATED_GPU_PERF_API_COUNTER_GENERATOR_GPA_HW_COUNTER_CL_GFX6_H_
