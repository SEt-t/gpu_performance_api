//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Public Counter Definitions for CL GFX6.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/public_counter_definitions_cl_gfx6.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicDerivedCountersClGfx6(GpaDerivedCounters& c)
{
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1639);

        c.DefineDerivedCounter("Wavefronts", "General", "Total wavefronts.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0", "e8999836-489d-80a6-8e94-2c3ea191fd58");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1649);
        internal_counters.push_back(1639);

        c.DefineDerivedCounter("VALUInsts", "General", "The average number of vector ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "17c27c10-3d5c-64c2-e7b4-4ee1abdbbb46");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1653);
        internal_counters.push_back(1639);

        c.DefineDerivedCounter("SALUInsts", "General", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "e5693881-8d63-951d-1f4f-f9e4c84236f5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1651);
        internal_counters.push_back(1639);

        c.DefineDerivedCounter("VFetchInsts", "General", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "d45b0277-03fa-9480-eada-4871ec89c504");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1654);
        internal_counters.push_back(1639);

        c.DefineDerivedCounter("SFetchInsts", "General", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "7d9e4356-a8f5-04c7-f7a8-fe68dc01c441");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1650);
        internal_counters.push_back(1639);

        c.DefineDerivedCounter("VWriteInsts", "General", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "d33f2e7c-3198-cf69-2432-d2a32f385d46");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1655);
        internal_counters.push_back(1639);

        c.DefineDerivedCounter("LDSInsts", "LocalMemory", "The average number of LDS read or LDS write instructions executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "852ccd67-d2eb-d238-567a-0d1f7bf5f34f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1656);
        internal_counters.push_back(1639);

        c.DefineDerivedCounter("GDSInsts", "General", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "c63fc276-151e-3b88-6edb-a0c92507aadb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1693);
        internal_counters.push_back(1685);

        c.DefineDerivedCounter("VALUUtilization", "General", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,(64),*,/,(100),*,(100),min", "ffea5f90-624f-67dd-4ca6-74911f4c85d3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1685);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("VALUBusy", "General", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,(4),*,NUM_SIMDS,/,1,/,(100),*", "51800108-e003-3c1f-b92a-e224aaab3c1b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1690);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("SALUBusy", "General", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*", "f1d53e7a-0182-42f8-7d2c-6029bff6bc2d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5801);
        internal_counters.push_back(5929);
        internal_counters.push_back(6057);
        internal_counters.push_back(6185);
        internal_counters.push_back(6313);
        internal_counters.push_back(6441);
        internal_counters.push_back(6569);
        internal_counters.push_back(6697);
        internal_counters.push_back(6825);
        internal_counters.push_back(6953);
        internal_counters.push_back(7081);
        internal_counters.push_back(7209);

        c.DefineDerivedCounter("FetchSize", "GlobalMemory", "The total kilobytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,sum12,(32),*,(1024),/", "d91ac445-b44f-f821-9123-9d829e544c33");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5795);
        internal_counters.push_back(5923);
        internal_counters.push_back(6051);
        internal_counters.push_back(6179);
        internal_counters.push_back(6307);
        internal_counters.push_back(6435);
        internal_counters.push_back(6563);
        internal_counters.push_back(6691);
        internal_counters.push_back(6819);
        internal_counters.push_back(6947);
        internal_counters.push_back(7075);
        internal_counters.push_back(7203);

        c.DefineDerivedCounter("WriteSize", "GlobalMemory", "The total kilobytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,sum12,(32),*,(1024),/", "e09d95da-2772-f7cb-51f5-4fad27bb998b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5787);
        internal_counters.push_back(5915);
        internal_counters.push_back(6043);
        internal_counters.push_back(6171);
        internal_counters.push_back(6299);
        internal_counters.push_back(6427);
        internal_counters.push_back(6555);
        internal_counters.push_back(6683);
        internal_counters.push_back(6811);
        internal_counters.push_back(6939);
        internal_counters.push_back(7067);
        internal_counters.push_back(7195);
        internal_counters.push_back(5788);
        internal_counters.push_back(5916);
        internal_counters.push_back(6044);
        internal_counters.push_back(6172);
        internal_counters.push_back(6300);
        internal_counters.push_back(6428);
        internal_counters.push_back(6556);
        internal_counters.push_back(6684);
        internal_counters.push_back(6812);
        internal_counters.push_back(6940);
        internal_counters.push_back(7068);
        internal_counters.push_back(7196);

        c.DefineDerivedCounter("CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,sum12,0,1,2,3,4,5,6,7,8,9,10,11,sum12,12,13,14,15,16,17,18,19,20,21,22,23,sum12,+,/,(100),*", "dfbeebab-f7c1-1211-e502-4aae361e2ad7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4859);
        internal_counters.push_back(4965);
        internal_counters.push_back(5071);
        internal_counters.push_back(5177);
        internal_counters.push_back(5283);
        internal_counters.push_back(5389);
        internal_counters.push_back(5495);
        internal_counters.push_back(5601);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("MemUnitBusy", "GlobalMemory", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,/,NUM_SHADER_ENGINES,/,(100),*", "a1efa380-4a72-e066-e06a-2ab71a488521");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7708);
        internal_counters.push_back(7818);
        internal_counters.push_back(7928);
        internal_counters.push_back(8038);
        internal_counters.push_back(8148);
        internal_counters.push_back(8258);
        internal_counters.push_back(8368);
        internal_counters.push_back(8478);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("MemUnitStalled", "GlobalMemory", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,/,NUM_SHADER_ENGINES,/,(100),*", "465ba54f-d250-1453-790a-731b10d230b1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5796);
        internal_counters.push_back(5924);
        internal_counters.push_back(6052);
        internal_counters.push_back(6180);
        internal_counters.push_back(6308);
        internal_counters.push_back(6436);
        internal_counters.push_back(6564);
        internal_counters.push_back(6692);
        internal_counters.push_back(6820);
        internal_counters.push_back(6948);
        internal_counters.push_back(7076);
        internal_counters.push_back(7204);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("WriteUnitStalled", "GlobalMemory", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,/,(100),*", "594ad3ce-d1ec-10fc-7d59-25738e397d72");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1697);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("LDSBankConflict", "LocalMemory", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,/,NUM_SIMDS,/,(100),*", "b3387100-3d5a-3235-e612-58b941683eb6");
    }
}

