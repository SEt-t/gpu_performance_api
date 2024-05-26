//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Public Counter Definitions for CL GFX7.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/public_counter_definitions_cl_gfx7.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicDerivedCountersClGfx7(GpaDerivedCounters& c)
{
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2736);

        c.DefineDerivedCounter("Wavefronts", "General", "Total wavefronts.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0", "e8999836-489d-80a6-8e94-2c3ea191fd58");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2758);
        internal_counters.push_back(2736);

        c.DefineDerivedCounter("VALUInsts", "General", "The average number of vector ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "17c27c10-3d5c-64c2-e7b4-4ee1abdbbb46");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2762);
        internal_counters.push_back(2736);

        c.DefineDerivedCounter("SALUInsts", "General", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "e5693881-8d63-951d-1f4f-f9e4c84236f5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2760);
        internal_counters.push_back(2736);

        c.DefineDerivedCounter("VFetchInsts", "General", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "d45b0277-03fa-9480-eada-4871ec89c504");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2763);
        internal_counters.push_back(2736);

        c.DefineDerivedCounter("SFetchInsts", "General", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "7d9e4356-a8f5-04c7-f7a8-fe68dc01c441");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2759);
        internal_counters.push_back(2736);

        c.DefineDerivedCounter("VWriteInsts", "General", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "d33f2e7c-3198-cf69-2432-d2a32f385d46");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2764);
        internal_counters.push_back(2765);
        internal_counters.push_back(2736);

        c.DefineDerivedCounter("FlatVMemInsts", "General", "The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,-,2,/", "05e4a953-c59a-e722-872b-e4bc7526bcee");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2766);
        internal_counters.push_back(2764);
        internal_counters.push_back(2736);

        c.DefineDerivedCounter("LDSInsts", "LocalMemory", "The average number of LDS read or LDS write instructions executed per work item (affected by flow control). Excludes FLAT instructions that read from or write to LDS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,-,2,/", "be9bbead-f82a-a2c6-8333-1a5c4ce5ee98");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2765);
        internal_counters.push_back(2736);

        c.DefineDerivedCounter("FlatLDSInsts", "LocalMemory", "The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "0f7d8f58-1750-a36f-d03e-85a2d9cd6e08");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2767);
        internal_counters.push_back(2736);

        c.DefineDerivedCounter("GDSInsts", "General", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,/", "c63fc276-151e-3b88-6edb-a0c92507aadb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2821);
        internal_counters.push_back(2813);

        c.DefineDerivedCounter("VALUUtilization", "General", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,(64),*,/,(100),*,(100),min", "ffea5f90-624f-67dd-4ca6-74911f4c85d3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2813);
        internal_counters.push_back(1951);

        c.DefineDerivedCounter("VALUBusy", "General", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,(4),*,NUM_SIMDS,/,1,/,(100),*", "51800108-e003-3c1f-b92a-e224aaab3c1b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2818);
        internal_counters.push_back(1951);

        c.DefineDerivedCounter("SALUBusy", "General", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*", "f1d53e7a-0182-42f8-7d2c-6029bff6bc2d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6103);
        internal_counters.push_back(6263);
        internal_counters.push_back(6423);
        internal_counters.push_back(6583);
        internal_counters.push_back(6743);
        internal_counters.push_back(6903);
        internal_counters.push_back(7063);
        internal_counters.push_back(7223);
        internal_counters.push_back(7383);
        internal_counters.push_back(7543);
        internal_counters.push_back(7703);
        internal_counters.push_back(7863);
        internal_counters.push_back(8023);
        internal_counters.push_back(8183);
        internal_counters.push_back(8343);
        internal_counters.push_back(8503);

        c.DefineDerivedCounter("FetchSize", "GlobalMemory", "The total kilobytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,(1024),/", "d91ac445-b44f-f821-9123-9d829e544c33");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6097);
        internal_counters.push_back(6257);
        internal_counters.push_back(6417);
        internal_counters.push_back(6577);
        internal_counters.push_back(6737);
        internal_counters.push_back(6897);
        internal_counters.push_back(7057);
        internal_counters.push_back(7217);
        internal_counters.push_back(7377);
        internal_counters.push_back(7537);
        internal_counters.push_back(7697);
        internal_counters.push_back(7857);
        internal_counters.push_back(8017);
        internal_counters.push_back(8177);
        internal_counters.push_back(8337);
        internal_counters.push_back(8497);

        c.DefineDerivedCounter("WriteSize", "GlobalMemory", "The total kilobytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,(1024),/", "e09d95da-2772-f7cb-51f5-4fad27bb998b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6089);
        internal_counters.push_back(6249);
        internal_counters.push_back(6409);
        internal_counters.push_back(6569);
        internal_counters.push_back(6729);
        internal_counters.push_back(6889);
        internal_counters.push_back(7049);
        internal_counters.push_back(7209);
        internal_counters.push_back(7369);
        internal_counters.push_back(7529);
        internal_counters.push_back(7689);
        internal_counters.push_back(7849);
        internal_counters.push_back(8009);
        internal_counters.push_back(8169);
        internal_counters.push_back(8329);
        internal_counters.push_back(8489);
        internal_counters.push_back(6090);
        internal_counters.push_back(6250);
        internal_counters.push_back(6410);
        internal_counters.push_back(6570);
        internal_counters.push_back(6730);
        internal_counters.push_back(6890);
        internal_counters.push_back(7050);
        internal_counters.push_back(7210);
        internal_counters.push_back(7370);
        internal_counters.push_back(7530);
        internal_counters.push_back(7690);
        internal_counters.push_back(7850);
        internal_counters.push_back(8010);
        internal_counters.push_back(8170);
        internal_counters.push_back(8330);
        internal_counters.push_back(8490);

        c.DefineDerivedCounter("CacheHit", "GlobalMemory", "The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*", "dfbeebab-f7c1-1211-e502-4aae361e2ad7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4780);
        internal_counters.push_back(4891);
        internal_counters.push_back(5002);
        internal_counters.push_back(5113);
        internal_counters.push_back(5224);
        internal_counters.push_back(5335);
        internal_counters.push_back(5446);
        internal_counters.push_back(5557);
        internal_counters.push_back(5668);
        internal_counters.push_back(5779);
        internal_counters.push_back(5890);
        internal_counters.push_back(1951);

        c.DefineDerivedCounter("MemUnitBusy", "GlobalMemory", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,/,NUM_SHADER_ENGINES,/,(100),*", "a1efa380-4a72-e066-e06a-2ab71a488521");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9181);
        internal_counters.push_back(9335);
        internal_counters.push_back(9489);
        internal_counters.push_back(9643);
        internal_counters.push_back(9797);
        internal_counters.push_back(9951);
        internal_counters.push_back(10105);
        internal_counters.push_back(10259);
        internal_counters.push_back(10413);
        internal_counters.push_back(10567);
        internal_counters.push_back(10721);
        internal_counters.push_back(1951);

        c.DefineDerivedCounter("MemUnitStalled", "GlobalMemory", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,/,NUM_SHADER_ENGINES,/,(100),*", "465ba54f-d250-1453-790a-731b10d230b1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6098);
        internal_counters.push_back(6258);
        internal_counters.push_back(6418);
        internal_counters.push_back(6578);
        internal_counters.push_back(6738);
        internal_counters.push_back(6898);
        internal_counters.push_back(7058);
        internal_counters.push_back(7218);
        internal_counters.push_back(7378);
        internal_counters.push_back(7538);
        internal_counters.push_back(7698);
        internal_counters.push_back(7858);
        internal_counters.push_back(8018);
        internal_counters.push_back(8178);
        internal_counters.push_back(8338);
        internal_counters.push_back(8498);
        internal_counters.push_back(1951);

        c.DefineDerivedCounter("WriteUnitStalled", "GlobalMemory", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max,16,/,(100),*", "594ad3ce-d1ec-10fc-7d59-25738e397d72");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2829);
        internal_counters.push_back(1951);

        c.DefineDerivedCounter("LDSBankConflict", "LocalMemory", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,/,NUM_SIMDS,/,(100),*", "b3387100-3d5a-3235-e612-58b941683eb6");
    }
}

