//==============================================================================
// Copyright (c) 2010-2020 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Hardware counter info for GFX9_PLACEHOLDER4
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project

#ifndef _GPA_HW_COUNTER_GFX9_PLACEHOLDER4_H_
#define _GPA_HW_COUNTER_GFX9_PLACEHOLDER4_H_

#include <set>

struct GPA_HardwareCounterDesc;
#include "gpa_hw_counter_gfx9.h"

namespace countergfx9placeholder4
{
/// Uses the input ASIC type to determine if this data provides an ASIC specific version.
/// \param asic_type The ASIC type that is currently in use.
/// \return True if the ASIC is matched by this file.
inline bool MatchAsic(GDT_HW_ASIC_TYPE asic_type)
{
    static std::set<GDT_HW_ASIC_TYPE> asics_supported = { GDT_ASIC_PLACEHOLDER_4 };

    if (asics_supported.find(asic_type) == asics_supported.end())
    {
        return false;
    }

    return true;
}

    extern GPA_HardwareCounterDesc pa_su0_counters_gfx9_placeholder4[]; ///< Array of internal counters for pa_su0 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc pa_su1_counters_gfx9_placeholder4[]; ///< Array of internal counters for pa_su1 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc pa_su2_counters_gfx9_placeholder4[]; ///< Array of internal counters for pa_su2 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc pa_su3_counters_gfx9_placeholder4[]; ///< Array of internal counters for pa_su3 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc pa_sc0_counters_gfx9_placeholder4[]; ///< Array of internal counters for pa_sc0 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc pa_sc1_counters_gfx9_placeholder4[]; ///< Array of internal counters for pa_sc1 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc pa_sc2_counters_gfx9_placeholder4[]; ///< Array of internal counters for pa_sc2 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc pa_sc3_counters_gfx9_placeholder4[]; ///< Array of internal counters for pa_sc3 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc ia0_counters_gfx9_placeholder4[]; ///< Array of internal counters for ia0 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc ia1_counters_gfx9_placeholder4[]; ///< Array of internal counters for ia1 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea0_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea0 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea1_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea1 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea2_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea2 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea3_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea3 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea4_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea4 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea5_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea5 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea6_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea6 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea7_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea7 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea8_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea8 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea9_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea9 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea10_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea10 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea11_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea11 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea12_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea12 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea13_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea13 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea14_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea14 block for gfx9_placeholder4 family
    extern GPA_HardwareCounterDesc gcea15_counters_gfx9_placeholder4[]; ///< Array of internal counters for gcea15 block for gfx9_placeholder4 family

/// Replaces count number of block instance counters at the destination with the overriding source counters.
/// \param dest_counter Destination to update.
/// \param src_counter Source to update from.
/// \param count Number of counters to update.
inline void ReplaceBlockInstanceCounters(GPA_HardwareCounterDesc* dest_counter, GPA_HardwareCounterDesc* src_counter, uint32_t count)
{
    for (uint32_t i = 0; i < count; i++)
    {
        dest_counter[i] = src_counter[i];
    }
}

/// If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
/// \param asic_type The ASIC type that is currently in use.
/// \return True if the ASIC is matched by this file and block instances are updated, otherwise false.
inline bool OverrideBlockInstanceCounters(GDT_HW_ASIC_TYPE asic_type)
{
    if (!MatchAsic(asic_type))
    {
        return false;
    }

    ReplaceBlockInstanceCounters(countergfx9::pa_su0_counters_gfx9, pa_su0_counters_gfx9_placeholder4, 351);
    ReplaceBlockInstanceCounters(countergfx9::pa_su1_counters_gfx9, pa_su1_counters_gfx9_placeholder4, 351);
    ReplaceBlockInstanceCounters(countergfx9::pa_su2_counters_gfx9, pa_su2_counters_gfx9_placeholder4, 351);
    ReplaceBlockInstanceCounters(countergfx9::pa_su3_counters_gfx9, pa_su3_counters_gfx9_placeholder4, 351);
    ReplaceBlockInstanceCounters(countergfx9::pa_sc0_counters_gfx9, pa_sc0_counters_gfx9_placeholder4, 492);
    ReplaceBlockInstanceCounters(countergfx9::pa_sc1_counters_gfx9, pa_sc1_counters_gfx9_placeholder4, 492);
    ReplaceBlockInstanceCounters(countergfx9::pa_sc2_counters_gfx9, pa_sc2_counters_gfx9_placeholder4, 492);
    ReplaceBlockInstanceCounters(countergfx9::pa_sc3_counters_gfx9, pa_sc3_counters_gfx9_placeholder4, 492);
    ReplaceBlockInstanceCounters(countergfx9::ia0_counters_gfx9, ia0_counters_gfx9_placeholder4, 31);
    ReplaceBlockInstanceCounters(countergfx9::ia1_counters_gfx9, ia1_counters_gfx9_placeholder4, 31);
    ReplaceBlockInstanceCounters(countergfx9::gcea0_counters_gfx9, gcea0_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea1_counters_gfx9, gcea1_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea2_counters_gfx9, gcea2_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea3_counters_gfx9, gcea3_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea4_counters_gfx9, gcea4_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea5_counters_gfx9, gcea5_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea6_counters_gfx9, gcea6_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea7_counters_gfx9, gcea7_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea8_counters_gfx9, gcea8_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea9_counters_gfx9, gcea9_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea10_counters_gfx9, gcea10_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea11_counters_gfx9, gcea11_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea12_counters_gfx9, gcea12_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea13_counters_gfx9, gcea13_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea14_counters_gfx9, gcea14_counters_gfx9_placeholder4, 83);
    ReplaceBlockInstanceCounters(countergfx9::gcea15_counters_gfx9, gcea15_counters_gfx9_placeholder4, 83);

    return true;
}
} // countergfx9placeholder4

#endif  // _GPA_HW_COUNTER_GFX9_PLACEHOLDER4_H_