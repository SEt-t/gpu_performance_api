//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Public Counter Definitions for VK GFX7.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/public_counter_definitions_vk_gfx7.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicDerivedCountersVkGfx7(GpaDerivedCounters& c)
{
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36722);

        c.DefineDerivedCounter("GPUTime", "Timing", "Time this API command took to execute on the GPU in nanoseconds from the time the previous command reached the bottom of the pipeline (BOP) to the time this command reaches the bottom of the pipeline (BOP). Does not include time that draw calls are processed in parallel.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "0,TS_FREQ,/,(1000000000),*", "cbd338f2-de6c-7b14-92ad-ba724ca2e501");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36725);

        c.DefineDerivedCounter("ExecutionDuration", "Timing", "GPU command execution duration in nanoseconds, from the time the command enters the top of the pipeline (TOP) to the time the command reaches the bottom of the pipeline (BOP). Does not include time that draw calls are processed in parallel.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "0,TS_FREQ,/,(1000000000),*", "b2f08d0d-af13-cd66-d3b4-b290ad448e69");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36726);

        c.DefineDerivedCounter("ExecutionStart", "Timing", "GPU command execution start time in nanoseconds. This is the time the command enters the top of the pipeline (TOP).", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "0,TS_FREQ,/,(1000000000),*", "a368f79d-fcfe-2158-71c4-2f0c4eef5aa4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36727);

        c.DefineDerivedCounter("ExecutionEnd", "Timing", "GPU command execution end time in nanoseconds. This is the time the command reaches the bottom of the pipeline (BOP).", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "0,TS_FREQ,/,(1000000000),*", "0bce206a-0976-06a2-bf20-03fb351035a8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36073);
        internal_counters.push_back(36071);

        c.DefineDerivedCounter("GPUBusy", "Timing", "The percentage of time GPU was busy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,/,(100),*,(100),min", "bef38bf3-1167-0844-81f0-67d2d28ddbc5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("GPUBusyCycles", "Timing", "Number of GPU cycles that the GPU was busy.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0", "1e84970d-7014-2b8d-d61e-388b5f782691");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(186);
        internal_counters.push_back(326);
        internal_counters.push_back(466);
        internal_counters.push_back(606);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("TessellatorBusy", "Timing", "The percentage of time the tessellation engine is busy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,/,(100),*", "36af6c72-dcfb-8102-4fd4-ce8ddc573365");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(186);
        internal_counters.push_back(326);
        internal_counters.push_back(466);
        internal_counters.push_back(606);

        c.DefineDerivedCounter("TessellatorBusyCycles", "Timing", "Number of GPU cycles that the tessellation engine is busy.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,max,2,max,3,max", "60289dcb-7b33-46e7-26d1-8a2121605543");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2814);
        internal_counters.push_back(3000);
        internal_counters.push_back(3186);
        internal_counters.push_back(3372);
        internal_counters.push_back(2839);
        internal_counters.push_back(3025);
        internal_counters.push_back(3211);
        internal_counters.push_back(3397);
        internal_counters.push_back(2861);
        internal_counters.push_back(3047);
        internal_counters.push_back(3233);
        internal_counters.push_back(3419);
        internal_counters.push_back(2883);
        internal_counters.push_back(3069);
        internal_counters.push_back(3255);
        internal_counters.push_back(3441);
        internal_counters.push_back(2823);
        internal_counters.push_back(3009);
        internal_counters.push_back(3195);
        internal_counters.push_back(3381);
        internal_counters.push_back(2845);
        internal_counters.push_back(3031);
        internal_counters.push_back(3217);
        internal_counters.push_back(3403);
        internal_counters.push_back(2867);
        internal_counters.push_back(3053);
        internal_counters.push_back(3239);
        internal_counters.push_back(3425);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("VSBusy", "Timing", "The percentage of time the ShaderUnit has vertex shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,16,ifnotzero,4,20,ifnotzero,8,24,ifnotzero,(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,max,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max,28,/,(100),*,(100),min", "94caad5e-867c-6c09-cf3a-d05b51df8f3b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2814);
        internal_counters.push_back(3000);
        internal_counters.push_back(3186);
        internal_counters.push_back(3372);
        internal_counters.push_back(2839);
        internal_counters.push_back(3025);
        internal_counters.push_back(3211);
        internal_counters.push_back(3397);
        internal_counters.push_back(2861);
        internal_counters.push_back(3047);
        internal_counters.push_back(3233);
        internal_counters.push_back(3419);
        internal_counters.push_back(2883);
        internal_counters.push_back(3069);
        internal_counters.push_back(3255);
        internal_counters.push_back(3441);
        internal_counters.push_back(2823);
        internal_counters.push_back(3009);
        internal_counters.push_back(3195);
        internal_counters.push_back(3381);
        internal_counters.push_back(2845);
        internal_counters.push_back(3031);
        internal_counters.push_back(3217);
        internal_counters.push_back(3403);
        internal_counters.push_back(2867);
        internal_counters.push_back(3053);
        internal_counters.push_back(3239);
        internal_counters.push_back(3425);

        c.DefineDerivedCounter("VSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has vertex shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,16,ifnotzero,4,20,ifnotzero,8,24,ifnotzero,(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,max,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max", "a2086d4e-274b-48a8-3e08-a4ab76ac15dd");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36722);
        internal_counters.push_back(2814);
        internal_counters.push_back(3000);
        internal_counters.push_back(3186);
        internal_counters.push_back(3372);
        internal_counters.push_back(2839);
        internal_counters.push_back(3025);
        internal_counters.push_back(3211);
        internal_counters.push_back(3397);
        internal_counters.push_back(2861);
        internal_counters.push_back(3047);
        internal_counters.push_back(3233);
        internal_counters.push_back(3419);
        internal_counters.push_back(2883);
        internal_counters.push_back(3069);
        internal_counters.push_back(3255);
        internal_counters.push_back(3441);
        internal_counters.push_back(2823);
        internal_counters.push_back(3009);
        internal_counters.push_back(3195);
        internal_counters.push_back(3381);
        internal_counters.push_back(2845);
        internal_counters.push_back(3031);
        internal_counters.push_back(3217);
        internal_counters.push_back(3403);
        internal_counters.push_back(2867);
        internal_counters.push_back(3053);
        internal_counters.push_back(3239);
        internal_counters.push_back(3425);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("VSTime", "Timing", "Time vertex shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max,(0),4,20,ifnotzero,8,24,ifnotzero,12,28,ifnotzero,max,29,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "d6ce819e-69af-a241-d07a-5dd8d146e436");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2851);
        internal_counters.push_back(3037);
        internal_counters.push_back(3223);
        internal_counters.push_back(3409);
        internal_counters.push_back(2857);
        internal_counters.push_back(3043);
        internal_counters.push_back(3229);
        internal_counters.push_back(3415);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("HSBusy", "Timing", "The percentage of time the ShaderUnit has hull shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min", "16f30a0b-4cbf-eccd-b13f-ab68dd254d32");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2851);
        internal_counters.push_back(3037);
        internal_counters.push_back(3223);
        internal_counters.push_back(3409);
        internal_counters.push_back(2857);
        internal_counters.push_back(3043);
        internal_counters.push_back(3229);
        internal_counters.push_back(3415);

        c.DefineDerivedCounter("HSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has hull shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "753e76ef-8ef8-3f13-b511-4bd9f3589fdb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36722);
        internal_counters.push_back(2851);
        internal_counters.push_back(3037);
        internal_counters.push_back(3223);
        internal_counters.push_back(3409);
        internal_counters.push_back(2857);
        internal_counters.push_back(3043);
        internal_counters.push_back(3229);
        internal_counters.push_back(3415);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("HSTime", "Timing", "Time hull shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "8386a863-dd34-1526-f703-0f0c7b241bc4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2814);
        internal_counters.push_back(3000);
        internal_counters.push_back(3186);
        internal_counters.push_back(3372);
        internal_counters.push_back(2839);
        internal_counters.push_back(3025);
        internal_counters.push_back(3211);
        internal_counters.push_back(3397);
        internal_counters.push_back(2883);
        internal_counters.push_back(3069);
        internal_counters.push_back(3255);
        internal_counters.push_back(3441);
        internal_counters.push_back(2845);
        internal_counters.push_back(3031);
        internal_counters.push_back(3217);
        internal_counters.push_back(3403);
        internal_counters.push_back(2867);
        internal_counters.push_back(3053);
        internal_counters.push_back(3239);
        internal_counters.push_back(3425);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("DSBusy", "Timing", "The percentage of time the ShaderUnit has domain shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,4,12,ifnotzero,16,ifnotzero,(0),1,5,13,ifnotzero,17,ifnotzero,max,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max,20,/,(100),*,(100),min", "0c626e8a-9b82-b6d4-d9a3-578509316301");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2814);
        internal_counters.push_back(3000);
        internal_counters.push_back(3186);
        internal_counters.push_back(3372);
        internal_counters.push_back(2839);
        internal_counters.push_back(3025);
        internal_counters.push_back(3211);
        internal_counters.push_back(3397);
        internal_counters.push_back(2883);
        internal_counters.push_back(3069);
        internal_counters.push_back(3255);
        internal_counters.push_back(3441);
        internal_counters.push_back(2845);
        internal_counters.push_back(3031);
        internal_counters.push_back(3217);
        internal_counters.push_back(3403);
        internal_counters.push_back(2867);
        internal_counters.push_back(3053);
        internal_counters.push_back(3239);
        internal_counters.push_back(3425);

        c.DefineDerivedCounter("DSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has domain shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,4,12,ifnotzero,16,ifnotzero,(0),1,5,13,ifnotzero,17,ifnotzero,max,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max", "2f3f7561-0549-2232-536d-129ffc5f7703");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36722);
        internal_counters.push_back(2814);
        internal_counters.push_back(3000);
        internal_counters.push_back(3186);
        internal_counters.push_back(3372);
        internal_counters.push_back(2839);
        internal_counters.push_back(3025);
        internal_counters.push_back(3211);
        internal_counters.push_back(3397);
        internal_counters.push_back(2883);
        internal_counters.push_back(3069);
        internal_counters.push_back(3255);
        internal_counters.push_back(3441);
        internal_counters.push_back(2845);
        internal_counters.push_back(3031);
        internal_counters.push_back(3217);
        internal_counters.push_back(3403);
        internal_counters.push_back(2867);
        internal_counters.push_back(3053);
        internal_counters.push_back(3239);
        internal_counters.push_back(3425);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("DSTime", "Timing", "Time domain shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,5,13,ifnotzero,17,ifnotzero,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max,(0),4,8,16,ifnotzero,20,ifnotzero,max,21,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "bfe28947-c727-8a9f-aa59-c218e58bfba5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2830);
        internal_counters.push_back(3016);
        internal_counters.push_back(3202);
        internal_counters.push_back(3388);
        internal_counters.push_back(2833);
        internal_counters.push_back(3019);
        internal_counters.push_back(3205);
        internal_counters.push_back(3391);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("GSBusy", "Timing", "The percentage of time the ShaderUnit has geometry shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min", "876f36d8-d046-833f-7832-673cbffd0a45");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2830);
        internal_counters.push_back(3016);
        internal_counters.push_back(3202);
        internal_counters.push_back(3388);
        internal_counters.push_back(2833);
        internal_counters.push_back(3019);
        internal_counters.push_back(3205);
        internal_counters.push_back(3391);

        c.DefineDerivedCounter("GSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has geometry shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "48203b6b-8983-c067-d63e-05da8be5111b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36722);
        internal_counters.push_back(2830);
        internal_counters.push_back(3016);
        internal_counters.push_back(3202);
        internal_counters.push_back(3388);
        internal_counters.push_back(2833);
        internal_counters.push_back(3019);
        internal_counters.push_back(3205);
        internal_counters.push_back(3391);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("GSTime", "Timing", "Time geometry shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "c73e715f-59af-76e8-9e22-097b94c066c4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2883);
        internal_counters.push_back(3069);
        internal_counters.push_back(3255);
        internal_counters.push_back(3441);
        internal_counters.push_back(2888);
        internal_counters.push_back(3074);
        internal_counters.push_back(3260);
        internal_counters.push_back(3446);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("PSBusy", "Timing", "The percentage of time the ShaderUnit has pixel shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*", "7e772beb-d82c-bd9a-aed0-fe504d416ce5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2883);
        internal_counters.push_back(3069);
        internal_counters.push_back(3255);
        internal_counters.push_back(3441);
        internal_counters.push_back(2888);
        internal_counters.push_back(3074);
        internal_counters.push_back(3260);
        internal_counters.push_back(3446);

        c.DefineDerivedCounter("PSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has pixel shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "b58bea04-ce8e-2984-80f4-8aba7d4c817b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36722);
        internal_counters.push_back(2883);
        internal_counters.push_back(3069);
        internal_counters.push_back(3255);
        internal_counters.push_back(3441);
        internal_counters.push_back(2888);
        internal_counters.push_back(3074);
        internal_counters.push_back(3260);
        internal_counters.push_back(3446);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("PSTime", "Timing", "Time pixel shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,0,TS_FREQ,/,(1000000000),*,*", "edca7694-7416-e8a6-0c5a-63a5ad5f3d74");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2871);
        internal_counters.push_back(3057);
        internal_counters.push_back(3243);
        internal_counters.push_back(3429);
        internal_counters.push_back(2875);
        internal_counters.push_back(3061);
        internal_counters.push_back(3247);
        internal_counters.push_back(3433);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("CSBusy", "Timing", "The percentage of time the ShaderUnit has compute shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min", "493fdd90-8d2b-a055-5e4e-2d29c3396b8c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2871);
        internal_counters.push_back(3057);
        internal_counters.push_back(3243);
        internal_counters.push_back(3429);
        internal_counters.push_back(2875);
        internal_counters.push_back(3061);
        internal_counters.push_back(3247);
        internal_counters.push_back(3433);

        c.DefineDerivedCounter("CSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has compute shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "39bcf1b8-f6b2-4c37-f9af-0a2bb59512f9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36722);
        internal_counters.push_back(2871);
        internal_counters.push_back(3057);
        internal_counters.push_back(3243);
        internal_counters.push_back(3429);
        internal_counters.push_back(2875);
        internal_counters.push_back(3061);
        internal_counters.push_back(3247);
        internal_counters.push_back(3433);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("CSTime", "Timing", "Time compute shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "dbc24916-ecb2-7eef-8d63-7afadaaab6bc");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(81);
        internal_counters.push_back(221);
        internal_counters.push_back(361);
        internal_counters.push_back(501);
        internal_counters.push_back(62);
        internal_counters.push_back(202);
        internal_counters.push_back(342);
        internal_counters.push_back(482);
        internal_counters.push_back(157);
        internal_counters.push_back(297);
        internal_counters.push_back(437);
        internal_counters.push_back(577);

        c.DefineDerivedCounter("VSVerticesIn", "VertexShader", "The number of vertices processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,8,9,10,11,sum4,ifnotzero", "810a04c8-2ff4-081d-766d-bfa2bd4ad916");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6607);
        internal_counters.push_back(6859);
        internal_counters.push_back(7111);
        internal_counters.push_back(7363);
        internal_counters.push_back(6585);
        internal_counters.push_back(6837);
        internal_counters.push_back(7089);
        internal_counters.push_back(7341);
        internal_counters.push_back(4591);
        internal_counters.push_back(4843);
        internal_counters.push_back(5095);
        internal_counters.push_back(5347);
        internal_counters.push_back(4569);
        internal_counters.push_back(4821);
        internal_counters.push_back(5073);
        internal_counters.push_back(5325);
        internal_counters.push_back(4579);
        internal_counters.push_back(4831);
        internal_counters.push_back(5083);
        internal_counters.push_back(5335);
        internal_counters.push_back(8623);
        internal_counters.push_back(8875);
        internal_counters.push_back(9127);
        internal_counters.push_back(9379);
        internal_counters.push_back(8601);
        internal_counters.push_back(8853);
        internal_counters.push_back(9105);
        internal_counters.push_back(9357);
        internal_counters.push_back(8611);
        internal_counters.push_back(8863);
        internal_counters.push_back(9115);
        internal_counters.push_back(9367);

        c.DefineDerivedCounter("VSVALUInstCount", "VertexShader", "Average number of vector ALU instructions executed in the VS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,24,25,26,27,sum4,/,28,29,30,31,sum4,ifnotzero", "8ec604e4-63f5-e6b5-4558-c38f0b26d4b1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6611);
        internal_counters.push_back(6863);
        internal_counters.push_back(7115);
        internal_counters.push_back(7367);
        internal_counters.push_back(6585);
        internal_counters.push_back(6837);
        internal_counters.push_back(7089);
        internal_counters.push_back(7341);
        internal_counters.push_back(4595);
        internal_counters.push_back(4847);
        internal_counters.push_back(5099);
        internal_counters.push_back(5351);
        internal_counters.push_back(4569);
        internal_counters.push_back(4821);
        internal_counters.push_back(5073);
        internal_counters.push_back(5325);
        internal_counters.push_back(4579);
        internal_counters.push_back(4831);
        internal_counters.push_back(5083);
        internal_counters.push_back(5335);
        internal_counters.push_back(8627);
        internal_counters.push_back(8879);
        internal_counters.push_back(9131);
        internal_counters.push_back(9383);
        internal_counters.push_back(8601);
        internal_counters.push_back(8853);
        internal_counters.push_back(9105);
        internal_counters.push_back(9357);
        internal_counters.push_back(8611);
        internal_counters.push_back(8863);
        internal_counters.push_back(9115);
        internal_counters.push_back(9367);

        c.DefineDerivedCounter("VSSALUInstCount", "VertexShader", "Average number of scalar ALU instructions executed in the VS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,24,25,26,27,sum4,/,28,29,30,31,sum4,ifnotzero", "e3da0383-7322-7f65-8cf2-3ce641578e54");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6662);
        internal_counters.push_back(6914);
        internal_counters.push_back(7166);
        internal_counters.push_back(7418);
        internal_counters.push_back(4646);
        internal_counters.push_back(4898);
        internal_counters.push_back(5150);
        internal_counters.push_back(5402);
        internal_counters.push_back(4579);
        internal_counters.push_back(4831);
        internal_counters.push_back(5083);
        internal_counters.push_back(5335);
        internal_counters.push_back(36073);
        internal_counters.push_back(8678);
        internal_counters.push_back(8930);
        internal_counters.push_back(9182);
        internal_counters.push_back(9434);
        internal_counters.push_back(8611);
        internal_counters.push_back(8863);
        internal_counters.push_back(9115);
        internal_counters.push_back(9367);

        c.DefineDerivedCounter("VSVALUBusy", "VertexShader", "The percentage of GPUTime vector ALU instructions are being processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,13,14,15,16,sum4,17,18,19,20,sum4,ifnotzero,(4),*,NUM_SIMDS,/,12,/,(100),*", "8b3572f7-fda0-eddf-6c93-2ab145b8754b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6662);
        internal_counters.push_back(6914);
        internal_counters.push_back(7166);
        internal_counters.push_back(7418);
        internal_counters.push_back(4646);
        internal_counters.push_back(4898);
        internal_counters.push_back(5150);
        internal_counters.push_back(5402);
        internal_counters.push_back(4579);
        internal_counters.push_back(4831);
        internal_counters.push_back(5083);
        internal_counters.push_back(5335);
        internal_counters.push_back(8678);
        internal_counters.push_back(8930);
        internal_counters.push_back(9182);
        internal_counters.push_back(9434);
        internal_counters.push_back(8611);
        internal_counters.push_back(8863);
        internal_counters.push_back(9115);
        internal_counters.push_back(9367);

        c.DefineDerivedCounter("VSVALUBusyCycles", "VertexShader", "Number of GPU cycles where vector ALU instructions are being processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,16,17,18,19,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "0af1686e-6d77-2f6e-2862-7bb8e869a776");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6667);
        internal_counters.push_back(6919);
        internal_counters.push_back(7171);
        internal_counters.push_back(7423);
        internal_counters.push_back(4651);
        internal_counters.push_back(4903);
        internal_counters.push_back(5155);
        internal_counters.push_back(5407);
        internal_counters.push_back(4579);
        internal_counters.push_back(4831);
        internal_counters.push_back(5083);
        internal_counters.push_back(5335);
        internal_counters.push_back(36073);
        internal_counters.push_back(8683);
        internal_counters.push_back(8935);
        internal_counters.push_back(9187);
        internal_counters.push_back(9439);
        internal_counters.push_back(8611);
        internal_counters.push_back(8863);
        internal_counters.push_back(9115);
        internal_counters.push_back(9367);

        c.DefineDerivedCounter("VSSALUBusy", "VertexShader", "The percentage of GPUTime scalar ALU instructions are being processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,13,14,15,16,sum4,17,18,19,20,sum4,ifnotzero,(4),*,NUM_SIMDS,/,12,/,(100),*", "3bc8730c-e3bc-e2f0-7d24-36974064c25a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6667);
        internal_counters.push_back(6919);
        internal_counters.push_back(7171);
        internal_counters.push_back(7423);
        internal_counters.push_back(4651);
        internal_counters.push_back(4903);
        internal_counters.push_back(5155);
        internal_counters.push_back(5407);
        internal_counters.push_back(4579);
        internal_counters.push_back(4831);
        internal_counters.push_back(5083);
        internal_counters.push_back(5335);
        internal_counters.push_back(8683);
        internal_counters.push_back(8935);
        internal_counters.push_back(9187);
        internal_counters.push_back(9439);
        internal_counters.push_back(8611);
        internal_counters.push_back(8863);
        internal_counters.push_back(9115);
        internal_counters.push_back(9367);

        c.DefineDerivedCounter("VSSALUBusyCycles", "VertexShader", "Number of GPU cycles where scalar ALU instructions are being processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,16,17,18,19,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "357ac7cd-2e1c-dcb0-77f6-37527237f35b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(166);
        internal_counters.push_back(306);
        internal_counters.push_back(446);
        internal_counters.push_back(586);

        c.DefineDerivedCounter("HSPatches", "HullShader", "The number of patches processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "d1bbd27d-d591-4509-df52-d329fb73a98f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9631);
        internal_counters.push_back(9883);
        internal_counters.push_back(10135);
        internal_counters.push_back(10387);
        internal_counters.push_back(9609);
        internal_counters.push_back(9861);
        internal_counters.push_back(10113);
        internal_counters.push_back(10365);

        c.DefineDerivedCounter("HSVALUInstCount", "HullShader", "Average number of vector ALU instructions executed in the HS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "786673bf-d58f-9895-3a37-9d6efb5e5804");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9635);
        internal_counters.push_back(9887);
        internal_counters.push_back(10139);
        internal_counters.push_back(10391);
        internal_counters.push_back(9609);
        internal_counters.push_back(9861);
        internal_counters.push_back(10113);
        internal_counters.push_back(10365);

        c.DefineDerivedCounter("HSSALUInstCount", "HullShader", "Average number of scalar ALU instructions executed in the HS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "1af675c4-cb0b-c4c5-c131-2796750f683e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9686);
        internal_counters.push_back(9938);
        internal_counters.push_back(10190);
        internal_counters.push_back(10442);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("HSVALUBusy", "HullShader", "The percentage of GPUTime vector ALU instructions are being processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "7880d192-8015-0311-d43e-fb0b7a4df179");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9686);
        internal_counters.push_back(9938);
        internal_counters.push_back(10190);
        internal_counters.push_back(10442);

        c.DefineDerivedCounter("HSVALUBusyCycles", "HullShader", "Number of GPU cycles vector where ALU instructions are being processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "3afb94e4-e937-5730-0cc9-41d3113ba012");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9691);
        internal_counters.push_back(9943);
        internal_counters.push_back(10195);
        internal_counters.push_back(10447);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("HSSALUBusy", "HullShader", "The percentage of GPUTime scalar ALU instructions are being processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "34748a4b-9148-0b06-b7b9-5700d6631bde");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(9691);
        internal_counters.push_back(9943);
        internal_counters.push_back(10195);
        internal_counters.push_back(10447);

        c.DefineDerivedCounter("HSSALUBusyCycles", "HullShader", "Number of GPU cycles where scalar ALU instructions are being processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "9bceabf7-3f01-2fd9-7b1d-8fe46c729efc");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(81);
        internal_counters.push_back(221);
        internal_counters.push_back(361);
        internal_counters.push_back(501);
        internal_counters.push_back(62);
        internal_counters.push_back(202);
        internal_counters.push_back(342);
        internal_counters.push_back(482);
        internal_counters.push_back(157);
        internal_counters.push_back(297);
        internal_counters.push_back(437);
        internal_counters.push_back(577);

        c.DefineDerivedCounter("DSVerticesIn", "DomainShader", "The number of vertices processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,ifnotzero", "b88d9d05-2418-e639-4e3d-3a5815855f8d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6607);
        internal_counters.push_back(6859);
        internal_counters.push_back(7111);
        internal_counters.push_back(7363);
        internal_counters.push_back(6585);
        internal_counters.push_back(6837);
        internal_counters.push_back(7089);
        internal_counters.push_back(7341);
        internal_counters.push_back(4591);
        internal_counters.push_back(4843);
        internal_counters.push_back(5095);
        internal_counters.push_back(5347);
        internal_counters.push_back(4569);
        internal_counters.push_back(4821);
        internal_counters.push_back(5073);
        internal_counters.push_back(5325);
        internal_counters.push_back(4579);
        internal_counters.push_back(4831);
        internal_counters.push_back(5083);
        internal_counters.push_back(5335);
        internal_counters.push_back(8611);
        internal_counters.push_back(8863);
        internal_counters.push_back(9115);
        internal_counters.push_back(9367);

        c.DefineDerivedCounter("DSVALUInstCount", "DomainShader", "Average number of vector ALU instructions executed in the DS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,ifnotzero", "03a3e949-82f9-be4d-7228-5eb5ad80915a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6611);
        internal_counters.push_back(6863);
        internal_counters.push_back(7115);
        internal_counters.push_back(7367);
        internal_counters.push_back(6585);
        internal_counters.push_back(6837);
        internal_counters.push_back(7089);
        internal_counters.push_back(7341);
        internal_counters.push_back(4595);
        internal_counters.push_back(4847);
        internal_counters.push_back(5099);
        internal_counters.push_back(5351);
        internal_counters.push_back(4569);
        internal_counters.push_back(4821);
        internal_counters.push_back(5073);
        internal_counters.push_back(5325);
        internal_counters.push_back(4579);
        internal_counters.push_back(4831);
        internal_counters.push_back(5083);
        internal_counters.push_back(5335);
        internal_counters.push_back(8611);
        internal_counters.push_back(8863);
        internal_counters.push_back(9115);
        internal_counters.push_back(9367);

        c.DefineDerivedCounter("DSSALUInstCount", "DomainShader", "Average number of scalar ALU instructions executed in the DS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,ifnotzero", "73daa728-483e-95d0-5b40-504719aadc1c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6662);
        internal_counters.push_back(6914);
        internal_counters.push_back(7166);
        internal_counters.push_back(7418);
        internal_counters.push_back(4646);
        internal_counters.push_back(4898);
        internal_counters.push_back(5150);
        internal_counters.push_back(5402);
        internal_counters.push_back(36073);
        internal_counters.push_back(4579);
        internal_counters.push_back(4831);
        internal_counters.push_back(5083);
        internal_counters.push_back(5335);
        internal_counters.push_back(8611);
        internal_counters.push_back(8863);
        internal_counters.push_back(9115);
        internal_counters.push_back(9367);

        c.DefineDerivedCounter("DSVALUBusy", "DomainShader", "The percentage of GPUTime vector ALU instructions are being processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,9,10,11,12,sum4,ifnotzero,13,14,15,16,sum4,ifnotzero,(4),*,NUM_SIMDS,/,8,/,(100),*", "ddc0dd0c-0c73-b831-a410-cfea8b9713d9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6662);
        internal_counters.push_back(6914);
        internal_counters.push_back(7166);
        internal_counters.push_back(7418);
        internal_counters.push_back(4646);
        internal_counters.push_back(4898);
        internal_counters.push_back(5150);
        internal_counters.push_back(5402);
        internal_counters.push_back(4579);
        internal_counters.push_back(4831);
        internal_counters.push_back(5083);
        internal_counters.push_back(5335);
        internal_counters.push_back(8611);
        internal_counters.push_back(8863);
        internal_counters.push_back(9115);
        internal_counters.push_back(9367);

        c.DefineDerivedCounter("DSVALUBusyCycles", "DomainShader", "Number of GPU cycles where vector ALU instructions are being processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "1e280912-81ee-a684-823b-94c468d8ebda");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6667);
        internal_counters.push_back(6919);
        internal_counters.push_back(7171);
        internal_counters.push_back(7423);
        internal_counters.push_back(4651);
        internal_counters.push_back(4903);
        internal_counters.push_back(5155);
        internal_counters.push_back(5407);
        internal_counters.push_back(36073);
        internal_counters.push_back(4579);
        internal_counters.push_back(4831);
        internal_counters.push_back(5083);
        internal_counters.push_back(5335);
        internal_counters.push_back(8611);
        internal_counters.push_back(8863);
        internal_counters.push_back(9115);
        internal_counters.push_back(9367);

        c.DefineDerivedCounter("DSSALUBusy", "DomainShader", "The percentage of GPUTime scalar ALU instructions are being processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,9,10,11,12,sum4,ifnotzero,13,14,15,16,sum4,ifnotzero,(4),*,NUM_SIMDS,/,8,/,(100),*", "b639f64c-24af-348f-6439-43c701b4fc07");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6667);
        internal_counters.push_back(6919);
        internal_counters.push_back(7171);
        internal_counters.push_back(7423);
        internal_counters.push_back(4651);
        internal_counters.push_back(4903);
        internal_counters.push_back(5155);
        internal_counters.push_back(5407);
        internal_counters.push_back(4579);
        internal_counters.push_back(4831);
        internal_counters.push_back(5083);
        internal_counters.push_back(5335);
        internal_counters.push_back(8611);
        internal_counters.push_back(8863);
        internal_counters.push_back(9115);
        internal_counters.push_back(9367);

        c.DefineDerivedCounter("DSSALUBusyCycles", "DomainShader", "Number of GPU cycles where scalar ALU instructions are being processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "b5bf8a0c-e682-1aa6-23d7-c6c6784ffa5c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(70);
        internal_counters.push_back(210);
        internal_counters.push_back(350);
        internal_counters.push_back(490);

        c.DefineDerivedCounter("GSPrimsIn", "GeometryShader", "The number of primitives passed into the GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "20c29866-509a-aaab-2697-6b2c38f79953");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(81);
        internal_counters.push_back(221);
        internal_counters.push_back(361);
        internal_counters.push_back(501);
        internal_counters.push_back(62);
        internal_counters.push_back(202);
        internal_counters.push_back(342);
        internal_counters.push_back(482);

        c.DefineDerivedCounter("GSVerticesOut", "GeometryShader", "The number of vertices output by the GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,ifnotzero", "775b9736-319a-bd8a-48c9-68db9c91d978");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5599);
        internal_counters.push_back(5851);
        internal_counters.push_back(6103);
        internal_counters.push_back(6355);
        internal_counters.push_back(5577);
        internal_counters.push_back(5829);
        internal_counters.push_back(6081);
        internal_counters.push_back(6333);

        c.DefineDerivedCounter("GSVALUInstCount", "GeometryShader", "Average number of vector ALU instructions executed in the GS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "21b12bfa-b8cd-2e71-a2d5-f9e9f1d65d61");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5603);
        internal_counters.push_back(5855);
        internal_counters.push_back(6107);
        internal_counters.push_back(6359);
        internal_counters.push_back(5577);
        internal_counters.push_back(5829);
        internal_counters.push_back(6081);
        internal_counters.push_back(6333);

        c.DefineDerivedCounter("GSSALUInstCount", "GeometryShader", "Average number of scalar ALU instructions executed in the GS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "a8562594-d335-ca43-61bf-03b72d2b98a5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5654);
        internal_counters.push_back(5906);
        internal_counters.push_back(6158);
        internal_counters.push_back(6410);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("GSVALUBusy", "GeometryShader", "The percentage of GPUTime vector ALU instructions are being processed by the GS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "228a4818-1e56-cebb-0720-3b2cdc057a6f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5654);
        internal_counters.push_back(5906);
        internal_counters.push_back(6158);
        internal_counters.push_back(6410);

        c.DefineDerivedCounter("GSVALUBusyCycles", "GeometryShader", "Number of GPU cycles where vector ALU instructions are being processed by the GS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "be217edd-226f-bd97-9a48-46e2809b1933");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5659);
        internal_counters.push_back(5911);
        internal_counters.push_back(6163);
        internal_counters.push_back(6415);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("GSSALUBusy", "GeometryShader", "The percentage of GPUTime scalar ALU instructions are being processed by the GS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,4,/,(100),*", "f28ce300-800e-9822-39e4-f48528bdb935");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5659);
        internal_counters.push_back(5911);
        internal_counters.push_back(6163);
        internal_counters.push_back(6415);

        c.DefineDerivedCounter("GSSALUBusyCycles", "GeometryShader", "Number of GPU cycles where scalar ALU instructions are being processed by the GS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "b3eace7c-3bc4-0107-887f-923851dc8ea7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(726);
        internal_counters.push_back(879);
        internal_counters.push_back(1032);
        internal_counters.push_back(1185);
        internal_counters.push_back(730);
        internal_counters.push_back(883);
        internal_counters.push_back(1036);
        internal_counters.push_back(1189);
        internal_counters.push_back(682);
        internal_counters.push_back(835);
        internal_counters.push_back(988);
        internal_counters.push_back(1141);
        internal_counters.push_back(694);
        internal_counters.push_back(847);
        internal_counters.push_back(1000);
        internal_counters.push_back(1153);
        internal_counters.push_back(683);
        internal_counters.push_back(836);
        internal_counters.push_back(989);
        internal_counters.push_back(1142);
        internal_counters.push_back(695);
        internal_counters.push_back(848);
        internal_counters.push_back(1001);
        internal_counters.push_back(1154);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("PrimitiveAssemblyBusy", "Timing", "The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,4,-,8,12,+,16,+,20,(2),*,+,SU_CLOCKS_PRIM,*,-,1,5,-,9,13,+,17,+,21,(2),*,+,SU_CLOCKS_PRIM,*,-,max,2,6,-,10,14,+,18,+,22,(2),*,+,SU_CLOCKS_PRIM,*,-,max,3,7,-,11,15,+,19,+,23,(2),*,+,SU_CLOCKS_PRIM,*,-,max,(0),max,24,/,(100),*,(100),min", "54ac5640-c4d7-95e2-20e0-6a9fdfc07333");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(726);
        internal_counters.push_back(879);
        internal_counters.push_back(1032);
        internal_counters.push_back(1185);
        internal_counters.push_back(730);
        internal_counters.push_back(883);
        internal_counters.push_back(1036);
        internal_counters.push_back(1189);
        internal_counters.push_back(682);
        internal_counters.push_back(835);
        internal_counters.push_back(988);
        internal_counters.push_back(1141);
        internal_counters.push_back(694);
        internal_counters.push_back(847);
        internal_counters.push_back(1000);
        internal_counters.push_back(1153);
        internal_counters.push_back(683);
        internal_counters.push_back(836);
        internal_counters.push_back(989);
        internal_counters.push_back(1142);
        internal_counters.push_back(695);
        internal_counters.push_back(848);
        internal_counters.push_back(1001);
        internal_counters.push_back(1154);

        c.DefineDerivedCounter("PrimitiveAssemblyBusyCycles", "Timing", "Number of GPU cycles the primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,4,-,8,12,+,16,+,20,(2),*,+,SU_CLOCKS_PRIM,*,-,1,5,-,9,13,+,17,+,21,(2),*,+,SU_CLOCKS_PRIM,*,-,max,2,6,-,10,14,+,18,+,22,(2),*,+,SU_CLOCKS_PRIM,*,-,max,3,7,-,11,15,+,19,+,23,(2),*,+,SU_CLOCKS_PRIM,*,-,max,(0),max", "99777f2d-9626-c78a-a97c-c4505eba1e5f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(629);
        internal_counters.push_back(782);
        internal_counters.push_back(935);
        internal_counters.push_back(1088);

        c.DefineDerivedCounter("PrimitivesIn", "PrimitiveAssembly", "The number of primitives received by the hardware. This includes primitives generated by tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "a515b80d-75c3-c7d2-0d2f-d7766b4759a6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(635);
        internal_counters.push_back(788);
        internal_counters.push_back(941);
        internal_counters.push_back(1094);
        internal_counters.push_back(675);
        internal_counters.push_back(828);
        internal_counters.push_back(981);
        internal_counters.push_back(1134);
        internal_counters.push_back(676);
        internal_counters.push_back(829);
        internal_counters.push_back(982);
        internal_counters.push_back(1135);
        internal_counters.push_back(677);
        internal_counters.push_back(830);
        internal_counters.push_back(983);
        internal_counters.push_back(1136);
        internal_counters.push_back(678);
        internal_counters.push_back(831);
        internal_counters.push_back(984);
        internal_counters.push_back(1137);

        c.DefineDerivedCounter("CulledPrims", "PrimitiveAssembly", "The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+,2,+,3,+,4,+,5,+,6,+,7,+,8,+,9,+,10,+,11,+,12,+,13,+,14,+,15,+,16,+,17,+,18,+,19,+", "589bdf55-9192-280a-41c3-584bc94f2562");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(642);
        internal_counters.push_back(795);
        internal_counters.push_back(948);
        internal_counters.push_back(1101);

        c.DefineDerivedCounter("ClippedPrims", "PrimitiveAssembly", "The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "5ef6f9d5-155e-5baa-163f-8359d9ea9bbf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(730);
        internal_counters.push_back(883);
        internal_counters.push_back(1036);
        internal_counters.push_back(1189);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("PAStalledOnRasterizer", "PrimitiveAssembly", "Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,/,(100),*", "6f9f416b-53c1-0457-f88c-7b6ba8973974");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(730);
        internal_counters.push_back(883);
        internal_counters.push_back(1036);
        internal_counters.push_back(1189);

        c.DefineDerivedCounter("PAStalledOnRasterizerCycles", "PrimitiveAssembly", "Number of GPU cycles the primitive assembly waits for rasterization to be ready to accept data. Indicates the number of GPU cycles the pipeline is bottlenecked by pixel operations.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,max,2,max,3,max", "7a8c492a-c566-9328-6805-760dbff5c0f2");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11633);
        internal_counters.push_back(11665);
        internal_counters.push_back(11697);
        internal_counters.push_back(11729);
        internal_counters.push_back(11638);
        internal_counters.push_back(11670);
        internal_counters.push_back(11702);
        internal_counters.push_back(11734);
        internal_counters.push_back(11643);
        internal_counters.push_back(11675);
        internal_counters.push_back(11707);
        internal_counters.push_back(11739);
        internal_counters.push_back(11648);
        internal_counters.push_back(11680);
        internal_counters.push_back(11712);
        internal_counters.push_back(11744);

        c.DefineDerivedCounter("PSPixelsOut", "PixelShader", "Pixels exported from shader to color buffers. Does not include killed or alpha tested pixels; if there are multiple render targets, each render target receives one export, so this will be 2 for 1 pixel written to two RTs.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,12,13,14,15,sum4,sum4", "24cba16c-baa6-6ecd-95ad-92ecb1338da1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11635);
        internal_counters.push_back(11667);
        internal_counters.push_back(11699);
        internal_counters.push_back(11731);
        internal_counters.push_back(11640);
        internal_counters.push_back(11672);
        internal_counters.push_back(11704);
        internal_counters.push_back(11736);
        internal_counters.push_back(11645);
        internal_counters.push_back(11677);
        internal_counters.push_back(11709);
        internal_counters.push_back(11741);
        internal_counters.push_back(11650);
        internal_counters.push_back(11682);
        internal_counters.push_back(11714);
        internal_counters.push_back(11746);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("PSExportStalls", "PixelShader", "Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max,16,/,(100),*", "9b4f466c-ff97-22bb-557d-84d3c4c51895");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11635);
        internal_counters.push_back(11667);
        internal_counters.push_back(11699);
        internal_counters.push_back(11731);
        internal_counters.push_back(11640);
        internal_counters.push_back(11672);
        internal_counters.push_back(11704);
        internal_counters.push_back(11736);
        internal_counters.push_back(11645);
        internal_counters.push_back(11677);
        internal_counters.push_back(11709);
        internal_counters.push_back(11741);
        internal_counters.push_back(11650);
        internal_counters.push_back(11682);
        internal_counters.push_back(11714);
        internal_counters.push_back(11746);

        c.DefineDerivedCounter("PSExportStallsCycles", "PixelShader", "Number of GPU cycles the pixel shader output stalls. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max", "47c72aad-64e6-0864-d533-d8e0bc27c156");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7615);
        internal_counters.push_back(7867);
        internal_counters.push_back(8119);
        internal_counters.push_back(8371);
        internal_counters.push_back(7593);
        internal_counters.push_back(7845);
        internal_counters.push_back(8097);
        internal_counters.push_back(8349);

        c.DefineDerivedCounter("PSVALUInstCount", "PixelShader", "Average number of vector ALU instructions executed in the PS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "eb74389e-435c-4137-ecf1-39eb5bc1cbfe");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7619);
        internal_counters.push_back(7871);
        internal_counters.push_back(8123);
        internal_counters.push_back(8375);
        internal_counters.push_back(7593);
        internal_counters.push_back(7845);
        internal_counters.push_back(8097);
        internal_counters.push_back(8349);

        c.DefineDerivedCounter("PSSALUInstCount", "PixelShader", "Average number of scalar ALU instructions executed in the PS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "e6a06580-8a82-96d6-976c-acc121fc5516");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7670);
        internal_counters.push_back(7922);
        internal_counters.push_back(8174);
        internal_counters.push_back(8426);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("PSVALUBusy", "PixelShader", "The percentage of GPUTime vector ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "6ce6fef7-8e33-10b4-f351-af755e177e85");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7670);
        internal_counters.push_back(7922);
        internal_counters.push_back(8174);
        internal_counters.push_back(8426);

        c.DefineDerivedCounter("PSVALUBusyCycles", "PixelShader", "Number of GPU cycles where vector ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "1e276f86-cd2a-72e7-fc9d-004f666f2981");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7675);
        internal_counters.push_back(7927);
        internal_counters.push_back(8179);
        internal_counters.push_back(8431);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("PSSALUBusy", "PixelShader", "The percentage of GPUTime scalar ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,4,/,(100),*", "2ff9f34f-e94b-af4d-18c2-5fbbf6d1727a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7675);
        internal_counters.push_back(7927);
        internal_counters.push_back(8179);
        internal_counters.push_back(8431);

        c.DefineDerivedCounter("PSSALUBusyCycles", "PixelShader", "Number of GPU cycles where scalar ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "29808906-f128-b078-fc79-820a4b3b3b8d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSThreadGroups", "ComputeShader", "Total number of thread groups.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "8ce3fc80-56b2-97f9-8e70-2e8c747cea68");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2875);
        internal_counters.push_back(3061);
        internal_counters.push_back(3247);
        internal_counters.push_back(3433);

        c.DefineDerivedCounter("CSWavefronts", "ComputeShader", "The total number of wavefronts used for the CS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "42379c6e-369b-c237-8b25-cdb9cdc65c4d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);
        internal_counters.push_back(3571);
        internal_counters.push_back(3823);
        internal_counters.push_back(4075);
        internal_counters.push_back(4327);

        c.DefineDerivedCounter("CSThreads", "ComputeShader", "The number of CS threads processed by the hardware.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),4,5,6,7,sum4,0,1,2,3,sum4,ifnotzero", "7a648013-6eac-2665-ac36-13c6f4ac9c26");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10639);
        internal_counters.push_back(10891);
        internal_counters.push_back(11143);
        internal_counters.push_back(11395);
        internal_counters.push_back(10617);
        internal_counters.push_back(10869);
        internal_counters.push_back(11121);
        internal_counters.push_back(11373);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSVALUInsts", "ComputeShader", "The average number of vector ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "376cb1cc-5a40-9d1d-404c-f1736c0c5084");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10702);
        internal_counters.push_back(10954);
        internal_counters.push_back(11206);
        internal_counters.push_back(11458);
        internal_counters.push_back(10694);
        internal_counters.push_back(10946);
        internal_counters.push_back(11198);
        internal_counters.push_back(11450);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSVALUUtilization", "ComputeShader", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,(64),*,/,(100),*,8,9,10,11,sum4,ifnotzero,(100),min", "4476879e-cdc0-d602-b24e-9b4a8d38438f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10643);
        internal_counters.push_back(10895);
        internal_counters.push_back(11147);
        internal_counters.push_back(11399);
        internal_counters.push_back(10617);
        internal_counters.push_back(10869);
        internal_counters.push_back(11121);
        internal_counters.push_back(11373);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSSALUInsts", "ComputeShader", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "eb211144-8136-ff86-e8bf-4d0493a904cb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10641);
        internal_counters.push_back(10893);
        internal_counters.push_back(11145);
        internal_counters.push_back(11397);
        internal_counters.push_back(10617);
        internal_counters.push_back(10869);
        internal_counters.push_back(11121);
        internal_counters.push_back(11373);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSVFetchInsts", "ComputeShader", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "3e2829c0-6215-783b-c271-6d57ff2c520e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10644);
        internal_counters.push_back(10896);
        internal_counters.push_back(11148);
        internal_counters.push_back(11400);
        internal_counters.push_back(10617);
        internal_counters.push_back(10869);
        internal_counters.push_back(11121);
        internal_counters.push_back(11373);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSSFetchInsts", "ComputeShader", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "da09171c-6a0a-584f-fddc-dc5062d63a3e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10640);
        internal_counters.push_back(10892);
        internal_counters.push_back(11144);
        internal_counters.push_back(11396);
        internal_counters.push_back(10617);
        internal_counters.push_back(10869);
        internal_counters.push_back(11121);
        internal_counters.push_back(11373);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSVWriteInsts", "ComputeShader", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "43438c22-e910-b377-b767-b32902e0df0d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10645);
        internal_counters.push_back(10897);
        internal_counters.push_back(11149);
        internal_counters.push_back(11401);
        internal_counters.push_back(10646);
        internal_counters.push_back(10898);
        internal_counters.push_back(11150);
        internal_counters.push_back(11402);
        internal_counters.push_back(10617);
        internal_counters.push_back(10869);
        internal_counters.push_back(11121);
        internal_counters.push_back(11373);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSFlatVMemInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,-,8,9,10,11,sum4,/,12,13,14,15,sum4,ifnotzero", "2570b477-13e3-f5b6-e6ff-7159373bc74d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10694);
        internal_counters.push_back(10946);
        internal_counters.push_back(11198);
        internal_counters.push_back(11450);
        internal_counters.push_back(36073);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSVALUBusy", "ComputeShader", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*,5,6,7,8,sum4,ifnotzero", "f1e64815-f6a8-c277-d4f9-d054b443e205");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10694);
        internal_counters.push_back(10946);
        internal_counters.push_back(11198);
        internal_counters.push_back(11450);

        c.DefineDerivedCounter("CSVALUBusyCycles", "ComputeShader", "Number of GPU cycles where vector ALU instructions are processed.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "2d0d5852-2658-eb73-68d2-f23f7118c9c3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10699);
        internal_counters.push_back(10951);
        internal_counters.push_back(11203);
        internal_counters.push_back(11455);
        internal_counters.push_back(36073);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSSALUBusy", "ComputeShader", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,4,/,(100),*,5,6,7,8,sum4,ifnotzero", "3fc35f4e-9882-94e3-6f5f-4e81cd97082a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10699);
        internal_counters.push_back(10951);
        internal_counters.push_back(11203);
        internal_counters.push_back(11455);

        c.DefineDerivedCounter("CSSALUBusyCycles", "ComputeShader", "Number of GPU cycles where scalar ALU instructions are processed.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "de58f8fc-8ed4-a799-648d-62ded7b1c4c4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11749);
        internal_counters.push_back(11860);
        internal_counters.push_back(11971);
        internal_counters.push_back(12082);
        internal_counters.push_back(12193);
        internal_counters.push_back(12304);
        internal_counters.push_back(12415);
        internal_counters.push_back(12526);
        internal_counters.push_back(12637);
        internal_counters.push_back(12748);
        internal_counters.push_back(12859);
        internal_counters.push_back(12970);
        internal_counters.push_back(13081);
        internal_counters.push_back(13192);
        internal_counters.push_back(13303);
        internal_counters.push_back(13414);
        internal_counters.push_back(13525);
        internal_counters.push_back(13636);
        internal_counters.push_back(13747);
        internal_counters.push_back(13858);
        internal_counters.push_back(13969);
        internal_counters.push_back(14080);
        internal_counters.push_back(14191);
        internal_counters.push_back(14302);
        internal_counters.push_back(14413);
        internal_counters.push_back(14524);
        internal_counters.push_back(14635);
        internal_counters.push_back(14746);
        internal_counters.push_back(14857);
        internal_counters.push_back(14968);
        internal_counters.push_back(15079);
        internal_counters.push_back(15190);
        internal_counters.push_back(15301);
        internal_counters.push_back(15412);
        internal_counters.push_back(15523);
        internal_counters.push_back(15634);
        internal_counters.push_back(15745);
        internal_counters.push_back(15856);
        internal_counters.push_back(15967);
        internal_counters.push_back(16078);
        internal_counters.push_back(16189);
        internal_counters.push_back(16300);
        internal_counters.push_back(16411);
        internal_counters.push_back(16522);
        internal_counters.push_back(36073);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSMemUnitBusy", "ComputeShader", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44,44,/,(100),*,45,46,47,48,sum4,ifnotzero", "42ab96e1-0a24-96c8-c4ff-098fa267d78e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11749);
        internal_counters.push_back(11860);
        internal_counters.push_back(11971);
        internal_counters.push_back(12082);
        internal_counters.push_back(12193);
        internal_counters.push_back(12304);
        internal_counters.push_back(12415);
        internal_counters.push_back(12526);
        internal_counters.push_back(12637);
        internal_counters.push_back(12748);
        internal_counters.push_back(12859);
        internal_counters.push_back(12970);
        internal_counters.push_back(13081);
        internal_counters.push_back(13192);
        internal_counters.push_back(13303);
        internal_counters.push_back(13414);
        internal_counters.push_back(13525);
        internal_counters.push_back(13636);
        internal_counters.push_back(13747);
        internal_counters.push_back(13858);
        internal_counters.push_back(13969);
        internal_counters.push_back(14080);
        internal_counters.push_back(14191);
        internal_counters.push_back(14302);
        internal_counters.push_back(14413);
        internal_counters.push_back(14524);
        internal_counters.push_back(14635);
        internal_counters.push_back(14746);
        internal_counters.push_back(14857);
        internal_counters.push_back(14968);
        internal_counters.push_back(15079);
        internal_counters.push_back(15190);
        internal_counters.push_back(15301);
        internal_counters.push_back(15412);
        internal_counters.push_back(15523);
        internal_counters.push_back(15634);
        internal_counters.push_back(15745);
        internal_counters.push_back(15856);
        internal_counters.push_back(15967);
        internal_counters.push_back(16078);
        internal_counters.push_back(16189);
        internal_counters.push_back(16300);
        internal_counters.push_back(16411);
        internal_counters.push_back(16522);

        c.DefineDerivedCounter("CSMemUnitBusyCycles", "ComputeShader", "Number of GPU cycles the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44", "39d5687f-c727-7c0c-af82-bb711d3897ed");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18792);
        internal_counters.push_back(18946);
        internal_counters.push_back(19100);
        internal_counters.push_back(19254);
        internal_counters.push_back(19408);
        internal_counters.push_back(19562);
        internal_counters.push_back(19716);
        internal_counters.push_back(19870);
        internal_counters.push_back(20024);
        internal_counters.push_back(20178);
        internal_counters.push_back(20332);
        internal_counters.push_back(20486);
        internal_counters.push_back(20640);
        internal_counters.push_back(20794);
        internal_counters.push_back(20948);
        internal_counters.push_back(21102);
        internal_counters.push_back(21256);
        internal_counters.push_back(21410);
        internal_counters.push_back(21564);
        internal_counters.push_back(21718);
        internal_counters.push_back(21872);
        internal_counters.push_back(22026);
        internal_counters.push_back(22180);
        internal_counters.push_back(22334);
        internal_counters.push_back(22488);
        internal_counters.push_back(22642);
        internal_counters.push_back(22796);
        internal_counters.push_back(22950);
        internal_counters.push_back(23104);
        internal_counters.push_back(23258);
        internal_counters.push_back(23412);
        internal_counters.push_back(23566);
        internal_counters.push_back(23720);
        internal_counters.push_back(23874);
        internal_counters.push_back(24028);
        internal_counters.push_back(24182);
        internal_counters.push_back(24336);
        internal_counters.push_back(24490);
        internal_counters.push_back(24644);
        internal_counters.push_back(24798);
        internal_counters.push_back(24952);
        internal_counters.push_back(25106);
        internal_counters.push_back(25260);
        internal_counters.push_back(25414);
        internal_counters.push_back(36073);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSMemUnitStalled", "ComputeShader", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44,44,/,(100),*,45,46,47,48,sum4,ifnotzero", "f18e8679-1511-d533-d9ee-4365197f7d0c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18792);
        internal_counters.push_back(18946);
        internal_counters.push_back(19100);
        internal_counters.push_back(19254);
        internal_counters.push_back(19408);
        internal_counters.push_back(19562);
        internal_counters.push_back(19716);
        internal_counters.push_back(19870);
        internal_counters.push_back(20024);
        internal_counters.push_back(20178);
        internal_counters.push_back(20332);
        internal_counters.push_back(20486);
        internal_counters.push_back(20640);
        internal_counters.push_back(20794);
        internal_counters.push_back(20948);
        internal_counters.push_back(21102);
        internal_counters.push_back(21256);
        internal_counters.push_back(21410);
        internal_counters.push_back(21564);
        internal_counters.push_back(21718);
        internal_counters.push_back(21872);
        internal_counters.push_back(22026);
        internal_counters.push_back(22180);
        internal_counters.push_back(22334);
        internal_counters.push_back(22488);
        internal_counters.push_back(22642);
        internal_counters.push_back(22796);
        internal_counters.push_back(22950);
        internal_counters.push_back(23104);
        internal_counters.push_back(23258);
        internal_counters.push_back(23412);
        internal_counters.push_back(23566);
        internal_counters.push_back(23720);
        internal_counters.push_back(23874);
        internal_counters.push_back(24028);
        internal_counters.push_back(24182);
        internal_counters.push_back(24336);
        internal_counters.push_back(24490);
        internal_counters.push_back(24644);
        internal_counters.push_back(24798);
        internal_counters.push_back(24952);
        internal_counters.push_back(25106);
        internal_counters.push_back(25260);
        internal_counters.push_back(25414);

        c.DefineDerivedCounter("CSMemUnitStalledCycles", "ComputeShader", "Number of GPU cycles the memory unit is stalled. Try reducing the number or size of fetches and writes if possible.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44", "51991c84-ed2b-bf31-c4ab-8f8e9eb8f29f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(25589);
        internal_counters.push_back(25749);
        internal_counters.push_back(25909);
        internal_counters.push_back(26069);
        internal_counters.push_back(26229);
        internal_counters.push_back(26389);
        internal_counters.push_back(26549);
        internal_counters.push_back(26709);
        internal_counters.push_back(26869);
        internal_counters.push_back(27029);
        internal_counters.push_back(27189);
        internal_counters.push_back(27349);
        internal_counters.push_back(27509);
        internal_counters.push_back(27669);
        internal_counters.push_back(27829);
        internal_counters.push_back(27989);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSFetchSize", "ComputeShader", "The total kilobytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,(1024),/,16,17,18,19,sum4,ifnotzero", "03cdb7e9-2bc3-15c1-811f-2106f3449295");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(25583);
        internal_counters.push_back(25743);
        internal_counters.push_back(25903);
        internal_counters.push_back(26063);
        internal_counters.push_back(26223);
        internal_counters.push_back(26383);
        internal_counters.push_back(26543);
        internal_counters.push_back(26703);
        internal_counters.push_back(26863);
        internal_counters.push_back(27023);
        internal_counters.push_back(27183);
        internal_counters.push_back(27343);
        internal_counters.push_back(27503);
        internal_counters.push_back(27663);
        internal_counters.push_back(27823);
        internal_counters.push_back(27983);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSWriteSize", "ComputeShader", "The total kilobytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,(1024),/,16,17,18,19,sum4,ifnotzero", "3ec1ce55-d621-b7a5-5b8d-2909cf2dbe7d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(25575);
        internal_counters.push_back(25735);
        internal_counters.push_back(25895);
        internal_counters.push_back(26055);
        internal_counters.push_back(26215);
        internal_counters.push_back(26375);
        internal_counters.push_back(26535);
        internal_counters.push_back(26695);
        internal_counters.push_back(26855);
        internal_counters.push_back(27015);
        internal_counters.push_back(27175);
        internal_counters.push_back(27335);
        internal_counters.push_back(27495);
        internal_counters.push_back(27655);
        internal_counters.push_back(27815);
        internal_counters.push_back(27975);
        internal_counters.push_back(25576);
        internal_counters.push_back(25736);
        internal_counters.push_back(25896);
        internal_counters.push_back(26056);
        internal_counters.push_back(26216);
        internal_counters.push_back(26376);
        internal_counters.push_back(26536);
        internal_counters.push_back(26696);
        internal_counters.push_back(26856);
        internal_counters.push_back(27016);
        internal_counters.push_back(27176);
        internal_counters.push_back(27336);
        internal_counters.push_back(27496);
        internal_counters.push_back(27656);
        internal_counters.push_back(27816);
        internal_counters.push_back(27976);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSCacheHit", "ComputeShader", "The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*,32,33,34,35,sum4,ifnotzero", "50fdbc38-d099-5957-5f75-dfe5341b2187");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(25575);
        internal_counters.push_back(25735);
        internal_counters.push_back(25895);
        internal_counters.push_back(26055);
        internal_counters.push_back(26215);
        internal_counters.push_back(26375);
        internal_counters.push_back(26535);
        internal_counters.push_back(26695);
        internal_counters.push_back(26855);
        internal_counters.push_back(27015);
        internal_counters.push_back(27175);
        internal_counters.push_back(27335);
        internal_counters.push_back(27495);
        internal_counters.push_back(27655);
        internal_counters.push_back(27815);
        internal_counters.push_back(27975);

        c.DefineDerivedCounter("CSCacheHitCount", "ComputeShader", "Count of fetch, write, atomic, and other instructions that hit the data cache.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "bee6ef8f-13fc-1b98-7bb9-c28a357dc3be");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(25576);
        internal_counters.push_back(25736);
        internal_counters.push_back(25896);
        internal_counters.push_back(26056);
        internal_counters.push_back(26216);
        internal_counters.push_back(26376);
        internal_counters.push_back(26536);
        internal_counters.push_back(26696);
        internal_counters.push_back(26856);
        internal_counters.push_back(27016);
        internal_counters.push_back(27176);
        internal_counters.push_back(27336);
        internal_counters.push_back(27496);
        internal_counters.push_back(27656);
        internal_counters.push_back(27816);
        internal_counters.push_back(27976);

        c.DefineDerivedCounter("CSCacheMissCount", "ComputeShader", "Count of fetch, write, atomic, and other instructions that miss the data cache.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "c38cd67e-6557-c53b-9fd3-934bf3d7a196");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(25584);
        internal_counters.push_back(25744);
        internal_counters.push_back(25904);
        internal_counters.push_back(26064);
        internal_counters.push_back(26224);
        internal_counters.push_back(26384);
        internal_counters.push_back(26544);
        internal_counters.push_back(26704);
        internal_counters.push_back(26864);
        internal_counters.push_back(27024);
        internal_counters.push_back(27184);
        internal_counters.push_back(27344);
        internal_counters.push_back(27504);
        internal_counters.push_back(27664);
        internal_counters.push_back(27824);
        internal_counters.push_back(27984);
        internal_counters.push_back(36073);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSWriteUnitStalled", "ComputeShader", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*,17,18,19,20,sum4,ifnotzero", "3e0e1bdc-f66c-eddd-af3d-f8e9e8f45fd8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(25584);
        internal_counters.push_back(25744);
        internal_counters.push_back(25904);
        internal_counters.push_back(26064);
        internal_counters.push_back(26224);
        internal_counters.push_back(26384);
        internal_counters.push_back(26544);
        internal_counters.push_back(26704);
        internal_counters.push_back(26864);
        internal_counters.push_back(27024);
        internal_counters.push_back(27184);
        internal_counters.push_back(27344);
        internal_counters.push_back(27504);
        internal_counters.push_back(27664);
        internal_counters.push_back(27824);
        internal_counters.push_back(27984);

        c.DefineDerivedCounter("CSWriteUnitStalledCycles", "ComputeShader", "Number of GPU cycles the write unit is stalled.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "be164c60-5e48-acac-9622-29616d09aa9a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10648);
        internal_counters.push_back(10900);
        internal_counters.push_back(11152);
        internal_counters.push_back(11404);
        internal_counters.push_back(10617);
        internal_counters.push_back(10869);
        internal_counters.push_back(11121);
        internal_counters.push_back(11373);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSGDSInsts", "ComputeShader", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "2a867f3e-4a37-ad16-55d1-f03d74707819");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10647);
        internal_counters.push_back(10899);
        internal_counters.push_back(11151);
        internal_counters.push_back(11403);
        internal_counters.push_back(10645);
        internal_counters.push_back(10897);
        internal_counters.push_back(11149);
        internal_counters.push_back(11401);
        internal_counters.push_back(10617);
        internal_counters.push_back(10869);
        internal_counters.push_back(11121);
        internal_counters.push_back(11373);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSLDSInsts", "ComputeShader", "The average number of LDS read/write instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,-,8,9,10,11,sum4,/,12,13,14,15,sum4,ifnotzero", "61b0b351-7e06-ef8e-a8e0-7a9e3200a836");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10646);
        internal_counters.push_back(10898);
        internal_counters.push_back(11150);
        internal_counters.push_back(11402);
        internal_counters.push_back(10617);
        internal_counters.push_back(10869);
        internal_counters.push_back(11121);
        internal_counters.push_back(11373);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSFlatLDSInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "99672cda-de2b-014c-482e-cf73b90068d5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10674);
        internal_counters.push_back(10926);
        internal_counters.push_back(11178);
        internal_counters.push_back(11430);
        internal_counters.push_back(10617);
        internal_counters.push_back(10869);
        internal_counters.push_back(11121);
        internal_counters.push_back(11373);
        internal_counters.push_back(36073);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSALUStalledByLDS", "ComputeShader", "The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,/,NUM_SHADER_ENGINES,/,(100),*,9,10,11,12,sum4,ifnotzero", "6dc4f1c2-bad0-c9ff-156e-883b319a752a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10674);
        internal_counters.push_back(10926);
        internal_counters.push_back(11178);
        internal_counters.push_back(11430);

        c.DefineDerivedCounter("CSALUStalledByLDSCycles", "ComputeShader", "Number of GPU cycles the ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,NUM_SHADER_ENGINES,/", "8f3d5f25-2159-0374-fafe-e26a7799b6c8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10710);
        internal_counters.push_back(10962);
        internal_counters.push_back(11214);
        internal_counters.push_back(11466);
        internal_counters.push_back(36073);
        internal_counters.push_back(2872);
        internal_counters.push_back(3058);
        internal_counters.push_back(3244);
        internal_counters.push_back(3430);

        c.DefineDerivedCounter("CSLDSBankConflict", "ComputeShader", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,4,/,NUM_SIMDS,/,(100),*,5,6,7,8,sum4,ifnotzero", "1065ee10-2e41-ea41-1eb3-b61b491752f4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10710);
        internal_counters.push_back(10962);
        internal_counters.push_back(11214);
        internal_counters.push_back(11466);

        c.DefineDerivedCounter("CSLDSBankConflictCycles", "ComputeShader", "Number of GPU cycles the LDS is stalled by bank conflicts. Value range: 0 (optimal) to GPUBusyCycles (bad).", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,NUM_SIMDS,/", "1fd1adf3-c51e-94fd-083e-c482a0a0809e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11749);
        internal_counters.push_back(11860);
        internal_counters.push_back(11971);
        internal_counters.push_back(12082);
        internal_counters.push_back(12193);
        internal_counters.push_back(12304);
        internal_counters.push_back(12415);
        internal_counters.push_back(12526);
        internal_counters.push_back(12637);
        internal_counters.push_back(12748);
        internal_counters.push_back(12859);
        internal_counters.push_back(12970);
        internal_counters.push_back(13081);
        internal_counters.push_back(13192);
        internal_counters.push_back(13303);
        internal_counters.push_back(13414);
        internal_counters.push_back(13525);
        internal_counters.push_back(13636);
        internal_counters.push_back(13747);
        internal_counters.push_back(13858);
        internal_counters.push_back(13969);
        internal_counters.push_back(14080);
        internal_counters.push_back(14191);
        internal_counters.push_back(14302);
        internal_counters.push_back(14413);
        internal_counters.push_back(14524);
        internal_counters.push_back(14635);
        internal_counters.push_back(14746);
        internal_counters.push_back(14857);
        internal_counters.push_back(14968);
        internal_counters.push_back(15079);
        internal_counters.push_back(15190);
        internal_counters.push_back(15301);
        internal_counters.push_back(15412);
        internal_counters.push_back(15523);
        internal_counters.push_back(15634);
        internal_counters.push_back(15745);
        internal_counters.push_back(15856);
        internal_counters.push_back(15967);
        internal_counters.push_back(16078);
        internal_counters.push_back(16189);
        internal_counters.push_back(16300);
        internal_counters.push_back(16411);
        internal_counters.push_back(16522);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("TexUnitBusy", "Timing", "The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44,44,/,(100),*", "36afb8d9-42fc-aafe-66c5-449542153b2c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11749);
        internal_counters.push_back(11860);
        internal_counters.push_back(11971);
        internal_counters.push_back(12082);
        internal_counters.push_back(12193);
        internal_counters.push_back(12304);
        internal_counters.push_back(12415);
        internal_counters.push_back(12526);
        internal_counters.push_back(12637);
        internal_counters.push_back(12748);
        internal_counters.push_back(12859);
        internal_counters.push_back(12970);
        internal_counters.push_back(13081);
        internal_counters.push_back(13192);
        internal_counters.push_back(13303);
        internal_counters.push_back(13414);
        internal_counters.push_back(13525);
        internal_counters.push_back(13636);
        internal_counters.push_back(13747);
        internal_counters.push_back(13858);
        internal_counters.push_back(13969);
        internal_counters.push_back(14080);
        internal_counters.push_back(14191);
        internal_counters.push_back(14302);
        internal_counters.push_back(14413);
        internal_counters.push_back(14524);
        internal_counters.push_back(14635);
        internal_counters.push_back(14746);
        internal_counters.push_back(14857);
        internal_counters.push_back(14968);
        internal_counters.push_back(15079);
        internal_counters.push_back(15190);
        internal_counters.push_back(15301);
        internal_counters.push_back(15412);
        internal_counters.push_back(15523);
        internal_counters.push_back(15634);
        internal_counters.push_back(15745);
        internal_counters.push_back(15856);
        internal_counters.push_back(15967);
        internal_counters.push_back(16078);
        internal_counters.push_back(16189);
        internal_counters.push_back(16300);
        internal_counters.push_back(16411);
        internal_counters.push_back(16522);

        c.DefineDerivedCounter("TexUnitBusyCycles", "Timing", "Number of GPU cycles the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44", "c68761f2-248c-4f39-6528-c308b1c0807c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11818);
        internal_counters.push_back(11929);
        internal_counters.push_back(12040);
        internal_counters.push_back(12151);
        internal_counters.push_back(12262);
        internal_counters.push_back(12373);
        internal_counters.push_back(12484);
        internal_counters.push_back(12595);
        internal_counters.push_back(12706);
        internal_counters.push_back(12817);
        internal_counters.push_back(12928);
        internal_counters.push_back(13039);
        internal_counters.push_back(13150);
        internal_counters.push_back(13261);
        internal_counters.push_back(13372);
        internal_counters.push_back(13483);
        internal_counters.push_back(13594);
        internal_counters.push_back(13705);
        internal_counters.push_back(13816);
        internal_counters.push_back(13927);
        internal_counters.push_back(14038);
        internal_counters.push_back(14149);
        internal_counters.push_back(14260);
        internal_counters.push_back(14371);
        internal_counters.push_back(14482);
        internal_counters.push_back(14593);
        internal_counters.push_back(14704);
        internal_counters.push_back(14815);
        internal_counters.push_back(14926);
        internal_counters.push_back(15037);
        internal_counters.push_back(15148);
        internal_counters.push_back(15259);
        internal_counters.push_back(15370);
        internal_counters.push_back(15481);
        internal_counters.push_back(15592);
        internal_counters.push_back(15703);
        internal_counters.push_back(15814);
        internal_counters.push_back(15925);
        internal_counters.push_back(16036);
        internal_counters.push_back(16147);
        internal_counters.push_back(16258);
        internal_counters.push_back(16369);
        internal_counters.push_back(16480);
        internal_counters.push_back(16591);
        internal_counters.push_back(11817);
        internal_counters.push_back(11928);
        internal_counters.push_back(12039);
        internal_counters.push_back(12150);
        internal_counters.push_back(12261);
        internal_counters.push_back(12372);
        internal_counters.push_back(12483);
        internal_counters.push_back(12594);
        internal_counters.push_back(12705);
        internal_counters.push_back(12816);
        internal_counters.push_back(12927);
        internal_counters.push_back(13038);
        internal_counters.push_back(13149);
        internal_counters.push_back(13260);
        internal_counters.push_back(13371);
        internal_counters.push_back(13482);
        internal_counters.push_back(13593);
        internal_counters.push_back(13704);
        internal_counters.push_back(13815);
        internal_counters.push_back(13926);
        internal_counters.push_back(14037);
        internal_counters.push_back(14148);
        internal_counters.push_back(14259);
        internal_counters.push_back(14370);
        internal_counters.push_back(14481);
        internal_counters.push_back(14592);
        internal_counters.push_back(14703);
        internal_counters.push_back(14814);
        internal_counters.push_back(14925);
        internal_counters.push_back(15036);
        internal_counters.push_back(15147);
        internal_counters.push_back(15258);
        internal_counters.push_back(15369);
        internal_counters.push_back(15480);
        internal_counters.push_back(15591);
        internal_counters.push_back(15702);
        internal_counters.push_back(15813);
        internal_counters.push_back(15924);
        internal_counters.push_back(16035);
        internal_counters.push_back(16146);
        internal_counters.push_back(16257);
        internal_counters.push_back(16368);
        internal_counters.push_back(16479);
        internal_counters.push_back(16590);

        c.DefineDerivedCounter("TexTriFilteringPct", "TextureUnit", "Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,sum44,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,+,/,(100),*", "1affc3c8-b917-5c81-622b-7004527208ae");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11818);
        internal_counters.push_back(11929);
        internal_counters.push_back(12040);
        internal_counters.push_back(12151);
        internal_counters.push_back(12262);
        internal_counters.push_back(12373);
        internal_counters.push_back(12484);
        internal_counters.push_back(12595);
        internal_counters.push_back(12706);
        internal_counters.push_back(12817);
        internal_counters.push_back(12928);
        internal_counters.push_back(13039);
        internal_counters.push_back(13150);
        internal_counters.push_back(13261);
        internal_counters.push_back(13372);
        internal_counters.push_back(13483);
        internal_counters.push_back(13594);
        internal_counters.push_back(13705);
        internal_counters.push_back(13816);
        internal_counters.push_back(13927);
        internal_counters.push_back(14038);
        internal_counters.push_back(14149);
        internal_counters.push_back(14260);
        internal_counters.push_back(14371);
        internal_counters.push_back(14482);
        internal_counters.push_back(14593);
        internal_counters.push_back(14704);
        internal_counters.push_back(14815);
        internal_counters.push_back(14926);
        internal_counters.push_back(15037);
        internal_counters.push_back(15148);
        internal_counters.push_back(15259);
        internal_counters.push_back(15370);
        internal_counters.push_back(15481);
        internal_counters.push_back(15592);
        internal_counters.push_back(15703);
        internal_counters.push_back(15814);
        internal_counters.push_back(15925);
        internal_counters.push_back(16036);
        internal_counters.push_back(16147);
        internal_counters.push_back(16258);
        internal_counters.push_back(16369);
        internal_counters.push_back(16480);
        internal_counters.push_back(16591);

        c.DefineDerivedCounter("TexTriFilteringCount", "TextureUnit", "Count of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44", "5785b3a1-a513-18db-4b1c-bdeef75bb2b6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11817);
        internal_counters.push_back(11928);
        internal_counters.push_back(12039);
        internal_counters.push_back(12150);
        internal_counters.push_back(12261);
        internal_counters.push_back(12372);
        internal_counters.push_back(12483);
        internal_counters.push_back(12594);
        internal_counters.push_back(12705);
        internal_counters.push_back(12816);
        internal_counters.push_back(12927);
        internal_counters.push_back(13038);
        internal_counters.push_back(13149);
        internal_counters.push_back(13260);
        internal_counters.push_back(13371);
        internal_counters.push_back(13482);
        internal_counters.push_back(13593);
        internal_counters.push_back(13704);
        internal_counters.push_back(13815);
        internal_counters.push_back(13926);
        internal_counters.push_back(14037);
        internal_counters.push_back(14148);
        internal_counters.push_back(14259);
        internal_counters.push_back(14370);
        internal_counters.push_back(14481);
        internal_counters.push_back(14592);
        internal_counters.push_back(14703);
        internal_counters.push_back(14814);
        internal_counters.push_back(14925);
        internal_counters.push_back(15036);
        internal_counters.push_back(15147);
        internal_counters.push_back(15258);
        internal_counters.push_back(15369);
        internal_counters.push_back(15480);
        internal_counters.push_back(15591);
        internal_counters.push_back(15702);
        internal_counters.push_back(15813);
        internal_counters.push_back(15924);
        internal_counters.push_back(16035);
        internal_counters.push_back(16146);
        internal_counters.push_back(16257);
        internal_counters.push_back(16368);
        internal_counters.push_back(16479);
        internal_counters.push_back(16590);

        c.DefineDerivedCounter("NoTexTriFilteringCount", "TextureUnit", "Count of pixels that did not receive trilinear filtering.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44", "179da29a-81af-c06e-ce8c-a0a731ea030d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11820);
        internal_counters.push_back(11931);
        internal_counters.push_back(12042);
        internal_counters.push_back(12153);
        internal_counters.push_back(12264);
        internal_counters.push_back(12375);
        internal_counters.push_back(12486);
        internal_counters.push_back(12597);
        internal_counters.push_back(12708);
        internal_counters.push_back(12819);
        internal_counters.push_back(12930);
        internal_counters.push_back(13041);
        internal_counters.push_back(13152);
        internal_counters.push_back(13263);
        internal_counters.push_back(13374);
        internal_counters.push_back(13485);
        internal_counters.push_back(13596);
        internal_counters.push_back(13707);
        internal_counters.push_back(13818);
        internal_counters.push_back(13929);
        internal_counters.push_back(14040);
        internal_counters.push_back(14151);
        internal_counters.push_back(14262);
        internal_counters.push_back(14373);
        internal_counters.push_back(14484);
        internal_counters.push_back(14595);
        internal_counters.push_back(14706);
        internal_counters.push_back(14817);
        internal_counters.push_back(14928);
        internal_counters.push_back(15039);
        internal_counters.push_back(15150);
        internal_counters.push_back(15261);
        internal_counters.push_back(15372);
        internal_counters.push_back(15483);
        internal_counters.push_back(15594);
        internal_counters.push_back(15705);
        internal_counters.push_back(15816);
        internal_counters.push_back(15927);
        internal_counters.push_back(16038);
        internal_counters.push_back(16149);
        internal_counters.push_back(16260);
        internal_counters.push_back(16371);
        internal_counters.push_back(16482);
        internal_counters.push_back(16593);
        internal_counters.push_back(11819);
        internal_counters.push_back(11930);
        internal_counters.push_back(12041);
        internal_counters.push_back(12152);
        internal_counters.push_back(12263);
        internal_counters.push_back(12374);
        internal_counters.push_back(12485);
        internal_counters.push_back(12596);
        internal_counters.push_back(12707);
        internal_counters.push_back(12818);
        internal_counters.push_back(12929);
        internal_counters.push_back(13040);
        internal_counters.push_back(13151);
        internal_counters.push_back(13262);
        internal_counters.push_back(13373);
        internal_counters.push_back(13484);
        internal_counters.push_back(13595);
        internal_counters.push_back(13706);
        internal_counters.push_back(13817);
        internal_counters.push_back(13928);
        internal_counters.push_back(14039);
        internal_counters.push_back(14150);
        internal_counters.push_back(14261);
        internal_counters.push_back(14372);
        internal_counters.push_back(14483);
        internal_counters.push_back(14594);
        internal_counters.push_back(14705);
        internal_counters.push_back(14816);
        internal_counters.push_back(14927);
        internal_counters.push_back(15038);
        internal_counters.push_back(15149);
        internal_counters.push_back(15260);
        internal_counters.push_back(15371);
        internal_counters.push_back(15482);
        internal_counters.push_back(15593);
        internal_counters.push_back(15704);
        internal_counters.push_back(15815);
        internal_counters.push_back(15926);
        internal_counters.push_back(16037);
        internal_counters.push_back(16148);
        internal_counters.push_back(16259);
        internal_counters.push_back(16370);
        internal_counters.push_back(16481);
        internal_counters.push_back(16592);

        c.DefineDerivedCounter("TexVolFilteringPct", "TextureUnit", "Percentage of pixels that received volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,sum44,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,+,/,(100),*", "b5ff6bed-3178-aee4-42dd-c74391c02a2d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11820);
        internal_counters.push_back(11931);
        internal_counters.push_back(12042);
        internal_counters.push_back(12153);
        internal_counters.push_back(12264);
        internal_counters.push_back(12375);
        internal_counters.push_back(12486);
        internal_counters.push_back(12597);
        internal_counters.push_back(12708);
        internal_counters.push_back(12819);
        internal_counters.push_back(12930);
        internal_counters.push_back(13041);
        internal_counters.push_back(13152);
        internal_counters.push_back(13263);
        internal_counters.push_back(13374);
        internal_counters.push_back(13485);
        internal_counters.push_back(13596);
        internal_counters.push_back(13707);
        internal_counters.push_back(13818);
        internal_counters.push_back(13929);
        internal_counters.push_back(14040);
        internal_counters.push_back(14151);
        internal_counters.push_back(14262);
        internal_counters.push_back(14373);
        internal_counters.push_back(14484);
        internal_counters.push_back(14595);
        internal_counters.push_back(14706);
        internal_counters.push_back(14817);
        internal_counters.push_back(14928);
        internal_counters.push_back(15039);
        internal_counters.push_back(15150);
        internal_counters.push_back(15261);
        internal_counters.push_back(15372);
        internal_counters.push_back(15483);
        internal_counters.push_back(15594);
        internal_counters.push_back(15705);
        internal_counters.push_back(15816);
        internal_counters.push_back(15927);
        internal_counters.push_back(16038);
        internal_counters.push_back(16149);
        internal_counters.push_back(16260);
        internal_counters.push_back(16371);
        internal_counters.push_back(16482);
        internal_counters.push_back(16593);

        c.DefineDerivedCounter("TexVolFilteringCount", "TextureUnit", "Count of pixels that received volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44", "4bddc587-d589-8128-e18c-762eab2c871f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11819);
        internal_counters.push_back(11930);
        internal_counters.push_back(12041);
        internal_counters.push_back(12152);
        internal_counters.push_back(12263);
        internal_counters.push_back(12374);
        internal_counters.push_back(12485);
        internal_counters.push_back(12596);
        internal_counters.push_back(12707);
        internal_counters.push_back(12818);
        internal_counters.push_back(12929);
        internal_counters.push_back(13040);
        internal_counters.push_back(13151);
        internal_counters.push_back(13262);
        internal_counters.push_back(13373);
        internal_counters.push_back(13484);
        internal_counters.push_back(13595);
        internal_counters.push_back(13706);
        internal_counters.push_back(13817);
        internal_counters.push_back(13928);
        internal_counters.push_back(14039);
        internal_counters.push_back(14150);
        internal_counters.push_back(14261);
        internal_counters.push_back(14372);
        internal_counters.push_back(14483);
        internal_counters.push_back(14594);
        internal_counters.push_back(14705);
        internal_counters.push_back(14816);
        internal_counters.push_back(14927);
        internal_counters.push_back(15038);
        internal_counters.push_back(15149);
        internal_counters.push_back(15260);
        internal_counters.push_back(15371);
        internal_counters.push_back(15482);
        internal_counters.push_back(15593);
        internal_counters.push_back(15704);
        internal_counters.push_back(15815);
        internal_counters.push_back(15926);
        internal_counters.push_back(16037);
        internal_counters.push_back(16148);
        internal_counters.push_back(16259);
        internal_counters.push_back(16370);
        internal_counters.push_back(16481);
        internal_counters.push_back(16592);

        c.DefineDerivedCounter("NoTexVolFilteringCount", "TextureUnit", "Count of pixels that did not receive volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44", "9fe1a854-17c6-9d26-b2b9-80610cd5827d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11838);
        internal_counters.push_back(11949);
        internal_counters.push_back(12060);
        internal_counters.push_back(12171);
        internal_counters.push_back(12282);
        internal_counters.push_back(12393);
        internal_counters.push_back(12504);
        internal_counters.push_back(12615);
        internal_counters.push_back(12726);
        internal_counters.push_back(12837);
        internal_counters.push_back(12948);
        internal_counters.push_back(13059);
        internal_counters.push_back(13170);
        internal_counters.push_back(13281);
        internal_counters.push_back(13392);
        internal_counters.push_back(13503);
        internal_counters.push_back(13614);
        internal_counters.push_back(13725);
        internal_counters.push_back(13836);
        internal_counters.push_back(13947);
        internal_counters.push_back(14058);
        internal_counters.push_back(14169);
        internal_counters.push_back(14280);
        internal_counters.push_back(14391);
        internal_counters.push_back(14502);
        internal_counters.push_back(14613);
        internal_counters.push_back(14724);
        internal_counters.push_back(14835);
        internal_counters.push_back(14946);
        internal_counters.push_back(15057);
        internal_counters.push_back(15168);
        internal_counters.push_back(15279);
        internal_counters.push_back(15390);
        internal_counters.push_back(15501);
        internal_counters.push_back(15612);
        internal_counters.push_back(15723);
        internal_counters.push_back(15834);
        internal_counters.push_back(15945);
        internal_counters.push_back(16056);
        internal_counters.push_back(16167);
        internal_counters.push_back(16278);
        internal_counters.push_back(16389);
        internal_counters.push_back(16500);
        internal_counters.push_back(16611);
        internal_counters.push_back(11839);
        internal_counters.push_back(11950);
        internal_counters.push_back(12061);
        internal_counters.push_back(12172);
        internal_counters.push_back(12283);
        internal_counters.push_back(12394);
        internal_counters.push_back(12505);
        internal_counters.push_back(12616);
        internal_counters.push_back(12727);
        internal_counters.push_back(12838);
        internal_counters.push_back(12949);
        internal_counters.push_back(13060);
        internal_counters.push_back(13171);
        internal_counters.push_back(13282);
        internal_counters.push_back(13393);
        internal_counters.push_back(13504);
        internal_counters.push_back(13615);
        internal_counters.push_back(13726);
        internal_counters.push_back(13837);
        internal_counters.push_back(13948);
        internal_counters.push_back(14059);
        internal_counters.push_back(14170);
        internal_counters.push_back(14281);
        internal_counters.push_back(14392);
        internal_counters.push_back(14503);
        internal_counters.push_back(14614);
        internal_counters.push_back(14725);
        internal_counters.push_back(14836);
        internal_counters.push_back(14947);
        internal_counters.push_back(15058);
        internal_counters.push_back(15169);
        internal_counters.push_back(15280);
        internal_counters.push_back(15391);
        internal_counters.push_back(15502);
        internal_counters.push_back(15613);
        internal_counters.push_back(15724);
        internal_counters.push_back(15835);
        internal_counters.push_back(15946);
        internal_counters.push_back(16057);
        internal_counters.push_back(16168);
        internal_counters.push_back(16279);
        internal_counters.push_back(16390);
        internal_counters.push_back(16501);
        internal_counters.push_back(16612);
        internal_counters.push_back(11840);
        internal_counters.push_back(11951);
        internal_counters.push_back(12062);
        internal_counters.push_back(12173);
        internal_counters.push_back(12284);
        internal_counters.push_back(12395);
        internal_counters.push_back(12506);
        internal_counters.push_back(12617);
        internal_counters.push_back(12728);
        internal_counters.push_back(12839);
        internal_counters.push_back(12950);
        internal_counters.push_back(13061);
        internal_counters.push_back(13172);
        internal_counters.push_back(13283);
        internal_counters.push_back(13394);
        internal_counters.push_back(13505);
        internal_counters.push_back(13616);
        internal_counters.push_back(13727);
        internal_counters.push_back(13838);
        internal_counters.push_back(13949);
        internal_counters.push_back(14060);
        internal_counters.push_back(14171);
        internal_counters.push_back(14282);
        internal_counters.push_back(14393);
        internal_counters.push_back(14504);
        internal_counters.push_back(14615);
        internal_counters.push_back(14726);
        internal_counters.push_back(14837);
        internal_counters.push_back(14948);
        internal_counters.push_back(15059);
        internal_counters.push_back(15170);
        internal_counters.push_back(15281);
        internal_counters.push_back(15392);
        internal_counters.push_back(15503);
        internal_counters.push_back(15614);
        internal_counters.push_back(15725);
        internal_counters.push_back(15836);
        internal_counters.push_back(15947);
        internal_counters.push_back(16058);
        internal_counters.push_back(16169);
        internal_counters.push_back(16280);
        internal_counters.push_back(16391);
        internal_counters.push_back(16502);
        internal_counters.push_back(16613);
        internal_counters.push_back(11841);
        internal_counters.push_back(11952);
        internal_counters.push_back(12063);
        internal_counters.push_back(12174);
        internal_counters.push_back(12285);
        internal_counters.push_back(12396);
        internal_counters.push_back(12507);
        internal_counters.push_back(12618);
        internal_counters.push_back(12729);
        internal_counters.push_back(12840);
        internal_counters.push_back(12951);
        internal_counters.push_back(13062);
        internal_counters.push_back(13173);
        internal_counters.push_back(13284);
        internal_counters.push_back(13395);
        internal_counters.push_back(13506);
        internal_counters.push_back(13617);
        internal_counters.push_back(13728);
        internal_counters.push_back(13839);
        internal_counters.push_back(13950);
        internal_counters.push_back(14061);
        internal_counters.push_back(14172);
        internal_counters.push_back(14283);
        internal_counters.push_back(14394);
        internal_counters.push_back(14505);
        internal_counters.push_back(14616);
        internal_counters.push_back(14727);
        internal_counters.push_back(14838);
        internal_counters.push_back(14949);
        internal_counters.push_back(15060);
        internal_counters.push_back(15171);
        internal_counters.push_back(15282);
        internal_counters.push_back(15393);
        internal_counters.push_back(15504);
        internal_counters.push_back(15615);
        internal_counters.push_back(15726);
        internal_counters.push_back(15837);
        internal_counters.push_back(15948);
        internal_counters.push_back(16059);
        internal_counters.push_back(16170);
        internal_counters.push_back(16281);
        internal_counters.push_back(16392);
        internal_counters.push_back(16503);
        internal_counters.push_back(16614);
        internal_counters.push_back(11842);
        internal_counters.push_back(11953);
        internal_counters.push_back(12064);
        internal_counters.push_back(12175);
        internal_counters.push_back(12286);
        internal_counters.push_back(12397);
        internal_counters.push_back(12508);
        internal_counters.push_back(12619);
        internal_counters.push_back(12730);
        internal_counters.push_back(12841);
        internal_counters.push_back(12952);
        internal_counters.push_back(13063);
        internal_counters.push_back(13174);
        internal_counters.push_back(13285);
        internal_counters.push_back(13396);
        internal_counters.push_back(13507);
        internal_counters.push_back(13618);
        internal_counters.push_back(13729);
        internal_counters.push_back(13840);
        internal_counters.push_back(13951);
        internal_counters.push_back(14062);
        internal_counters.push_back(14173);
        internal_counters.push_back(14284);
        internal_counters.push_back(14395);
        internal_counters.push_back(14506);
        internal_counters.push_back(14617);
        internal_counters.push_back(14728);
        internal_counters.push_back(14839);
        internal_counters.push_back(14950);
        internal_counters.push_back(15061);
        internal_counters.push_back(15172);
        internal_counters.push_back(15283);
        internal_counters.push_back(15394);
        internal_counters.push_back(15505);
        internal_counters.push_back(15616);
        internal_counters.push_back(15727);
        internal_counters.push_back(15838);
        internal_counters.push_back(15949);
        internal_counters.push_back(16060);
        internal_counters.push_back(16171);
        internal_counters.push_back(16282);
        internal_counters.push_back(16393);
        internal_counters.push_back(16504);
        internal_counters.push_back(16615);
        internal_counters.push_back(11843);
        internal_counters.push_back(11954);
        internal_counters.push_back(12065);
        internal_counters.push_back(12176);
        internal_counters.push_back(12287);
        internal_counters.push_back(12398);
        internal_counters.push_back(12509);
        internal_counters.push_back(12620);
        internal_counters.push_back(12731);
        internal_counters.push_back(12842);
        internal_counters.push_back(12953);
        internal_counters.push_back(13064);
        internal_counters.push_back(13175);
        internal_counters.push_back(13286);
        internal_counters.push_back(13397);
        internal_counters.push_back(13508);
        internal_counters.push_back(13619);
        internal_counters.push_back(13730);
        internal_counters.push_back(13841);
        internal_counters.push_back(13952);
        internal_counters.push_back(14063);
        internal_counters.push_back(14174);
        internal_counters.push_back(14285);
        internal_counters.push_back(14396);
        internal_counters.push_back(14507);
        internal_counters.push_back(14618);
        internal_counters.push_back(14729);
        internal_counters.push_back(14840);
        internal_counters.push_back(14951);
        internal_counters.push_back(15062);
        internal_counters.push_back(15173);
        internal_counters.push_back(15284);
        internal_counters.push_back(15395);
        internal_counters.push_back(15506);
        internal_counters.push_back(15617);
        internal_counters.push_back(15728);
        internal_counters.push_back(15839);
        internal_counters.push_back(15950);
        internal_counters.push_back(16061);
        internal_counters.push_back(16172);
        internal_counters.push_back(16283);
        internal_counters.push_back(16394);
        internal_counters.push_back(16505);
        internal_counters.push_back(16616);
        internal_counters.push_back(11844);
        internal_counters.push_back(11955);
        internal_counters.push_back(12066);
        internal_counters.push_back(12177);
        internal_counters.push_back(12288);
        internal_counters.push_back(12399);
        internal_counters.push_back(12510);
        internal_counters.push_back(12621);
        internal_counters.push_back(12732);
        internal_counters.push_back(12843);
        internal_counters.push_back(12954);
        internal_counters.push_back(13065);
        internal_counters.push_back(13176);
        internal_counters.push_back(13287);
        internal_counters.push_back(13398);
        internal_counters.push_back(13509);
        internal_counters.push_back(13620);
        internal_counters.push_back(13731);
        internal_counters.push_back(13842);
        internal_counters.push_back(13953);
        internal_counters.push_back(14064);
        internal_counters.push_back(14175);
        internal_counters.push_back(14286);
        internal_counters.push_back(14397);
        internal_counters.push_back(14508);
        internal_counters.push_back(14619);
        internal_counters.push_back(14730);
        internal_counters.push_back(14841);
        internal_counters.push_back(14952);
        internal_counters.push_back(15063);
        internal_counters.push_back(15174);
        internal_counters.push_back(15285);
        internal_counters.push_back(15396);
        internal_counters.push_back(15507);
        internal_counters.push_back(15618);
        internal_counters.push_back(15729);
        internal_counters.push_back(15840);
        internal_counters.push_back(15951);
        internal_counters.push_back(16062);
        internal_counters.push_back(16173);
        internal_counters.push_back(16284);
        internal_counters.push_back(16395);
        internal_counters.push_back(16506);
        internal_counters.push_back(16617);
        internal_counters.push_back(11845);
        internal_counters.push_back(11956);
        internal_counters.push_back(12067);
        internal_counters.push_back(12178);
        internal_counters.push_back(12289);
        internal_counters.push_back(12400);
        internal_counters.push_back(12511);
        internal_counters.push_back(12622);
        internal_counters.push_back(12733);
        internal_counters.push_back(12844);
        internal_counters.push_back(12955);
        internal_counters.push_back(13066);
        internal_counters.push_back(13177);
        internal_counters.push_back(13288);
        internal_counters.push_back(13399);
        internal_counters.push_back(13510);
        internal_counters.push_back(13621);
        internal_counters.push_back(13732);
        internal_counters.push_back(13843);
        internal_counters.push_back(13954);
        internal_counters.push_back(14065);
        internal_counters.push_back(14176);
        internal_counters.push_back(14287);
        internal_counters.push_back(14398);
        internal_counters.push_back(14509);
        internal_counters.push_back(14620);
        internal_counters.push_back(14731);
        internal_counters.push_back(14842);
        internal_counters.push_back(14953);
        internal_counters.push_back(15064);
        internal_counters.push_back(15175);
        internal_counters.push_back(15286);
        internal_counters.push_back(15397);
        internal_counters.push_back(15508);
        internal_counters.push_back(15619);
        internal_counters.push_back(15730);
        internal_counters.push_back(15841);
        internal_counters.push_back(15952);
        internal_counters.push_back(16063);
        internal_counters.push_back(16174);
        internal_counters.push_back(16285);
        internal_counters.push_back(16396);
        internal_counters.push_back(16507);
        internal_counters.push_back(16618);
        internal_counters.push_back(11846);
        internal_counters.push_back(11957);
        internal_counters.push_back(12068);
        internal_counters.push_back(12179);
        internal_counters.push_back(12290);
        internal_counters.push_back(12401);
        internal_counters.push_back(12512);
        internal_counters.push_back(12623);
        internal_counters.push_back(12734);
        internal_counters.push_back(12845);
        internal_counters.push_back(12956);
        internal_counters.push_back(13067);
        internal_counters.push_back(13178);
        internal_counters.push_back(13289);
        internal_counters.push_back(13400);
        internal_counters.push_back(13511);
        internal_counters.push_back(13622);
        internal_counters.push_back(13733);
        internal_counters.push_back(13844);
        internal_counters.push_back(13955);
        internal_counters.push_back(14066);
        internal_counters.push_back(14177);
        internal_counters.push_back(14288);
        internal_counters.push_back(14399);
        internal_counters.push_back(14510);
        internal_counters.push_back(14621);
        internal_counters.push_back(14732);
        internal_counters.push_back(14843);
        internal_counters.push_back(14954);
        internal_counters.push_back(15065);
        internal_counters.push_back(15176);
        internal_counters.push_back(15287);
        internal_counters.push_back(15398);
        internal_counters.push_back(15509);
        internal_counters.push_back(15620);
        internal_counters.push_back(15731);
        internal_counters.push_back(15842);
        internal_counters.push_back(15953);
        internal_counters.push_back(16064);
        internal_counters.push_back(16175);
        internal_counters.push_back(16286);
        internal_counters.push_back(16397);
        internal_counters.push_back(16508);
        internal_counters.push_back(16619);

        c.DefineDerivedCounter("TexAveAnisotropy", "TextureUnit", "The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,(2),44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,sum44,*,+,(4),88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,sum44,*,+,(6),132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,sum44,*,+,(8),176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,sum44,*,+,(10),220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,sum44,*,+,(12),264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,sum44,*,+,(14),308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,sum44,*,+,(16),352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,384,385,386,387,388,389,390,391,392,393,394,395,sum44,*,+,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,sum44,+,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,sum44,+,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,sum44,+,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,sum44,+,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,sum44,+,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,sum44,+,308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,sum44,+,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,384,385,386,387,388,389,390,391,392,393,394,395,sum44,+,/", "7ca2a2b9-a4eb-ce23-d163-59147e672396");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28347);
        internal_counters.push_back(28604);
        internal_counters.push_back(28861);
        internal_counters.push_back(29118);
        internal_counters.push_back(29375);
        internal_counters.push_back(29632);
        internal_counters.push_back(29889);
        internal_counters.push_back(30146);
        internal_counters.push_back(30403);
        internal_counters.push_back(30660);
        internal_counters.push_back(30917);
        internal_counters.push_back(31174);
        internal_counters.push_back(31431);
        internal_counters.push_back(31688);
        internal_counters.push_back(31945);
        internal_counters.push_back(32202);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("DepthStencilTestBusy", "Timing", "Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "6834fb52-42e8-bb50-fd48-ec2f2904e7e0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28347);
        internal_counters.push_back(28604);
        internal_counters.push_back(28861);
        internal_counters.push_back(29118);
        internal_counters.push_back(29375);
        internal_counters.push_back(29632);
        internal_counters.push_back(29889);
        internal_counters.push_back(30146);
        internal_counters.push_back(30403);
        internal_counters.push_back(30660);
        internal_counters.push_back(30917);
        internal_counters.push_back(31174);
        internal_counters.push_back(31431);
        internal_counters.push_back(31688);
        internal_counters.push_back(31945);
        internal_counters.push_back(32202);

        c.DefineDerivedCounter("DepthStencilTestBusyCount", "Timing", "Number of GPU cycles spent performing depth and stencil tests.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "e02860fa-c7bd-90ea-2149-69b4e98a636c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28218);
        internal_counters.push_back(28475);
        internal_counters.push_back(28732);
        internal_counters.push_back(28989);
        internal_counters.push_back(29246);
        internal_counters.push_back(29503);
        internal_counters.push_back(29760);
        internal_counters.push_back(30017);
        internal_counters.push_back(30274);
        internal_counters.push_back(30531);
        internal_counters.push_back(30788);
        internal_counters.push_back(31045);
        internal_counters.push_back(31302);
        internal_counters.push_back(31559);
        internal_counters.push_back(31816);
        internal_counters.push_back(32073);
        internal_counters.push_back(28207);
        internal_counters.push_back(28464);
        internal_counters.push_back(28721);
        internal_counters.push_back(28978);
        internal_counters.push_back(29235);
        internal_counters.push_back(29492);
        internal_counters.push_back(29749);
        internal_counters.push_back(30006);
        internal_counters.push_back(30263);
        internal_counters.push_back(30520);
        internal_counters.push_back(30777);
        internal_counters.push_back(31034);
        internal_counters.push_back(31291);
        internal_counters.push_back(31548);
        internal_counters.push_back(31805);
        internal_counters.push_back(32062);

        c.DefineDerivedCounter("HiZTilesAccepted", "DepthAndStencil", "Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,/,(100),*", "56176f45-d7ff-813d-4f05-3b2f046067e7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28218);
        internal_counters.push_back(28475);
        internal_counters.push_back(28732);
        internal_counters.push_back(28989);
        internal_counters.push_back(29246);
        internal_counters.push_back(29503);
        internal_counters.push_back(29760);
        internal_counters.push_back(30017);
        internal_counters.push_back(30274);
        internal_counters.push_back(30531);
        internal_counters.push_back(30788);
        internal_counters.push_back(31045);
        internal_counters.push_back(31302);
        internal_counters.push_back(31559);
        internal_counters.push_back(31816);
        internal_counters.push_back(32073);

        c.DefineDerivedCounter("HiZTilesAcceptedCount", "DepthAndStencil", "Count of tiles accepted by HiZ and will be rendered to the depth or color buffers.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "95d4e3f6-b2f0-f26e-8423-aacdfaf79ea3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28207);
        internal_counters.push_back(28464);
        internal_counters.push_back(28721);
        internal_counters.push_back(28978);
        internal_counters.push_back(29235);
        internal_counters.push_back(29492);
        internal_counters.push_back(29749);
        internal_counters.push_back(30006);
        internal_counters.push_back(30263);
        internal_counters.push_back(30520);
        internal_counters.push_back(30777);
        internal_counters.push_back(31034);
        internal_counters.push_back(31291);
        internal_counters.push_back(31548);
        internal_counters.push_back(31805);
        internal_counters.push_back(32062);

        c.DefineDerivedCounter("HiZTilesRejectedCount", "DepthAndStencil", "Count of tiles not accepted by HiZ.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "156ba142-7eeb-aa6e-a00a-f8aea4e41e0b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28207);
        internal_counters.push_back(28464);
        internal_counters.push_back(28721);
        internal_counters.push_back(28978);
        internal_counters.push_back(29235);
        internal_counters.push_back(29492);
        internal_counters.push_back(29749);
        internal_counters.push_back(30006);
        internal_counters.push_back(30263);
        internal_counters.push_back(30520);
        internal_counters.push_back(30777);
        internal_counters.push_back(31034);
        internal_counters.push_back(31291);
        internal_counters.push_back(31548);
        internal_counters.push_back(31805);
        internal_counters.push_back(32062);
        internal_counters.push_back(28231);
        internal_counters.push_back(28488);
        internal_counters.push_back(28745);
        internal_counters.push_back(29002);
        internal_counters.push_back(29259);
        internal_counters.push_back(29516);
        internal_counters.push_back(29773);
        internal_counters.push_back(30030);
        internal_counters.push_back(30287);
        internal_counters.push_back(30544);
        internal_counters.push_back(30801);
        internal_counters.push_back(31058);
        internal_counters.push_back(31315);
        internal_counters.push_back(31572);
        internal_counters.push_back(31829);
        internal_counters.push_back(32086);

        c.DefineDerivedCounter("PreZTilesDetailCulled", "DepthAndStencil", "Percentage of tiles rejected because the associated prim had no contributing area.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "cad7f54d-a044-7574-c472-6f2065cbeeac");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28231);
        internal_counters.push_back(28488);
        internal_counters.push_back(28745);
        internal_counters.push_back(29002);
        internal_counters.push_back(29259);
        internal_counters.push_back(29516);
        internal_counters.push_back(29773);
        internal_counters.push_back(30030);
        internal_counters.push_back(30287);
        internal_counters.push_back(30544);
        internal_counters.push_back(30801);
        internal_counters.push_back(31058);
        internal_counters.push_back(31315);
        internal_counters.push_back(31572);
        internal_counters.push_back(31829);
        internal_counters.push_back(32086);

        c.DefineDerivedCounter("PreZTilesDetailCulledCount", "DepthAndStencil", "Count of tiles rejected because the associated primitive had no contributing area.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "49262c8a-b1e6-90dd-f096-0fc4921715e9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28207);
        internal_counters.push_back(28464);
        internal_counters.push_back(28721);
        internal_counters.push_back(28978);
        internal_counters.push_back(29235);
        internal_counters.push_back(29492);
        internal_counters.push_back(29749);
        internal_counters.push_back(30006);
        internal_counters.push_back(30263);
        internal_counters.push_back(30520);
        internal_counters.push_back(30777);
        internal_counters.push_back(31034);
        internal_counters.push_back(31291);
        internal_counters.push_back(31548);
        internal_counters.push_back(31805);
        internal_counters.push_back(32062);

        c.DefineDerivedCounter("PreZTilesDetailSurvivingCount", "DepthAndStencil", "Count of tiles surviving because the associated primitive had contributing area.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "f803eaa4-bbed-bd39-775f-a64df92e2c08");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1396);
        internal_counters.push_back(1791);
        internal_counters.push_back(2186);
        internal_counters.push_back(2581);
        internal_counters.push_back(1397);
        internal_counters.push_back(1792);
        internal_counters.push_back(2187);
        internal_counters.push_back(2582);
        internal_counters.push_back(1398);
        internal_counters.push_back(1793);
        internal_counters.push_back(2188);
        internal_counters.push_back(2583);
        internal_counters.push_back(1399);
        internal_counters.push_back(1794);
        internal_counters.push_back(2189);
        internal_counters.push_back(2584);
        internal_counters.push_back(1472);
        internal_counters.push_back(1867);
        internal_counters.push_back(2262);
        internal_counters.push_back(2657);
        internal_counters.push_back(1473);
        internal_counters.push_back(1868);
        internal_counters.push_back(2263);
        internal_counters.push_back(2658);
        internal_counters.push_back(1474);
        internal_counters.push_back(1869);
        internal_counters.push_back(2264);
        internal_counters.push_back(2659);
        internal_counters.push_back(1475);
        internal_counters.push_back(1870);
        internal_counters.push_back(2265);
        internal_counters.push_back(2660);

        c.DefineDerivedCounter("HiZQuadsCulled", "DepthAndStencil", "Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "fa0e319b-5573-6d34-5bab-904769925036");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1396);
        internal_counters.push_back(1791);
        internal_counters.push_back(2186);
        internal_counters.push_back(2581);
        internal_counters.push_back(1397);
        internal_counters.push_back(1792);
        internal_counters.push_back(2187);
        internal_counters.push_back(2582);
        internal_counters.push_back(1398);
        internal_counters.push_back(1793);
        internal_counters.push_back(2188);
        internal_counters.push_back(2583);
        internal_counters.push_back(1399);
        internal_counters.push_back(1794);
        internal_counters.push_back(2189);
        internal_counters.push_back(2584);
        internal_counters.push_back(1472);
        internal_counters.push_back(1867);
        internal_counters.push_back(2262);
        internal_counters.push_back(2657);
        internal_counters.push_back(1473);
        internal_counters.push_back(1868);
        internal_counters.push_back(2263);
        internal_counters.push_back(2658);
        internal_counters.push_back(1474);
        internal_counters.push_back(1869);
        internal_counters.push_back(2264);
        internal_counters.push_back(2659);
        internal_counters.push_back(1475);
        internal_counters.push_back(1870);
        internal_counters.push_back(2265);
        internal_counters.push_back(2660);

        c.DefineDerivedCounter("HiZQuadsCulledCount", "DepthAndStencil", "Count of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-", "73b0b39d-6df2-3e24-0b5c-7cb0ac8b6f39");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1472);
        internal_counters.push_back(1867);
        internal_counters.push_back(2262);
        internal_counters.push_back(2657);
        internal_counters.push_back(1473);
        internal_counters.push_back(1868);
        internal_counters.push_back(2263);
        internal_counters.push_back(2658);
        internal_counters.push_back(1474);
        internal_counters.push_back(1869);
        internal_counters.push_back(2264);
        internal_counters.push_back(2659);
        internal_counters.push_back(1475);
        internal_counters.push_back(1870);
        internal_counters.push_back(2265);
        internal_counters.push_back(2660);

        c.DefineDerivedCounter("HiZQuadsAcceptedCount", "DepthAndStencil", "Count of quads that did continue on in the pipeline after HiZ.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "59049ad9-42b5-c7cb-3616-6a8f6a8e4894");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1396);
        internal_counters.push_back(1791);
        internal_counters.push_back(2186);
        internal_counters.push_back(2581);
        internal_counters.push_back(1397);
        internal_counters.push_back(1792);
        internal_counters.push_back(2187);
        internal_counters.push_back(2582);
        internal_counters.push_back(1398);
        internal_counters.push_back(1793);
        internal_counters.push_back(2188);
        internal_counters.push_back(2583);
        internal_counters.push_back(1399);
        internal_counters.push_back(1794);
        internal_counters.push_back(2189);
        internal_counters.push_back(2584);
        internal_counters.push_back(1496);
        internal_counters.push_back(1891);
        internal_counters.push_back(2286);
        internal_counters.push_back(2681);
        internal_counters.push_back(1472);
        internal_counters.push_back(1867);
        internal_counters.push_back(2262);
        internal_counters.push_back(2657);
        internal_counters.push_back(1473);
        internal_counters.push_back(1868);
        internal_counters.push_back(2263);
        internal_counters.push_back(2658);
        internal_counters.push_back(1474);
        internal_counters.push_back(1869);
        internal_counters.push_back(2264);
        internal_counters.push_back(2659);
        internal_counters.push_back(1475);
        internal_counters.push_back(1870);
        internal_counters.push_back(2265);
        internal_counters.push_back(2660);

        c.DefineDerivedCounter("PreZQuadsCulled", "DepthAndStencil", "Percentage of quads rejected based on the detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,sum16,16,17,18,19,sum4,-,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "4e77547b-ec55-5663-f034-af59be66d77d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1396);
        internal_counters.push_back(1791);
        internal_counters.push_back(2186);
        internal_counters.push_back(2581);
        internal_counters.push_back(1397);
        internal_counters.push_back(1792);
        internal_counters.push_back(2187);
        internal_counters.push_back(2582);
        internal_counters.push_back(1398);
        internal_counters.push_back(1793);
        internal_counters.push_back(2188);
        internal_counters.push_back(2583);
        internal_counters.push_back(1399);
        internal_counters.push_back(1794);
        internal_counters.push_back(2189);
        internal_counters.push_back(2584);
        internal_counters.push_back(1496);
        internal_counters.push_back(1891);
        internal_counters.push_back(2286);
        internal_counters.push_back(2681);
        internal_counters.push_back(1472);
        internal_counters.push_back(1867);
        internal_counters.push_back(2262);
        internal_counters.push_back(2657);
        internal_counters.push_back(1473);
        internal_counters.push_back(1868);
        internal_counters.push_back(2263);
        internal_counters.push_back(2658);
        internal_counters.push_back(1474);
        internal_counters.push_back(1869);
        internal_counters.push_back(2264);
        internal_counters.push_back(2659);
        internal_counters.push_back(1475);
        internal_counters.push_back(1870);
        internal_counters.push_back(2265);
        internal_counters.push_back(2660);

        c.DefineDerivedCounter("PreZQuadsCulledCount", "DepthAndStencil", "Count of quads rejected based on the detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,sum4,-,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,sum16,-", "1bf169e6-9304-834e-df5f-0c44d7890a08");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1496);
        internal_counters.push_back(1891);
        internal_counters.push_back(2286);
        internal_counters.push_back(2681);
        internal_counters.push_back(1472);
        internal_counters.push_back(1867);
        internal_counters.push_back(2262);
        internal_counters.push_back(2657);
        internal_counters.push_back(1473);
        internal_counters.push_back(1868);
        internal_counters.push_back(2263);
        internal_counters.push_back(2658);
        internal_counters.push_back(1474);
        internal_counters.push_back(1869);
        internal_counters.push_back(2264);
        internal_counters.push_back(2659);
        internal_counters.push_back(1475);
        internal_counters.push_back(1870);
        internal_counters.push_back(2265);
        internal_counters.push_back(2660);

        c.DefineDerivedCounter("PreZQuadsSurvivingCount", "DepthAndStencil", "Count of quads surviving detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,sum16,0,1,2,3,sum4,-", "50e25e51-3713-89cb-7f92-559cde5e5532");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1496);
        internal_counters.push_back(1891);
        internal_counters.push_back(2286);
        internal_counters.push_back(2681);
        internal_counters.push_back(1396);
        internal_counters.push_back(1791);
        internal_counters.push_back(2186);
        internal_counters.push_back(2581);
        internal_counters.push_back(1397);
        internal_counters.push_back(1792);
        internal_counters.push_back(2187);
        internal_counters.push_back(2582);
        internal_counters.push_back(1398);
        internal_counters.push_back(1793);
        internal_counters.push_back(2188);
        internal_counters.push_back(2583);
        internal_counters.push_back(1399);
        internal_counters.push_back(1794);
        internal_counters.push_back(2189);
        internal_counters.push_back(2584);

        c.DefineDerivedCounter("PostZQuads", "DepthAndStencil", "Percentage of quads for which the pixel shader will run and may be postZ tested.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,sum16,/,(100),*", "58f0d34b-eeb8-e8db-abce-cb72584144be");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1496);
        internal_counters.push_back(1891);
        internal_counters.push_back(2286);
        internal_counters.push_back(2681);

        c.DefineDerivedCounter("PostZQuadCount", "DepthAndStencil", "Count of quads for which the pixel shader will run and may be postZ tested.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "08404526-ce35-939b-34c8-a7a35a0ff4d6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28380);
        internal_counters.push_back(28637);
        internal_counters.push_back(28894);
        internal_counters.push_back(29151);
        internal_counters.push_back(29408);
        internal_counters.push_back(29665);
        internal_counters.push_back(29922);
        internal_counters.push_back(30179);
        internal_counters.push_back(30436);
        internal_counters.push_back(30693);
        internal_counters.push_back(30950);
        internal_counters.push_back(31207);
        internal_counters.push_back(31464);
        internal_counters.push_back(31721);
        internal_counters.push_back(31978);
        internal_counters.push_back(32235);

        c.DefineDerivedCounter("PreZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z before shading and passed.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "3bfe6c4d-7422-ca03-7ea5-e67ff1a00136");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28382);
        internal_counters.push_back(28639);
        internal_counters.push_back(28896);
        internal_counters.push_back(29153);
        internal_counters.push_back(29410);
        internal_counters.push_back(29667);
        internal_counters.push_back(29924);
        internal_counters.push_back(30181);
        internal_counters.push_back(30438);
        internal_counters.push_back(30695);
        internal_counters.push_back(30952);
        internal_counters.push_back(31209);
        internal_counters.push_back(31466);
        internal_counters.push_back(31723);
        internal_counters.push_back(31980);
        internal_counters.push_back(32237);

        c.DefineDerivedCounter("PreZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z before shading and failed stencil test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "df7f705e-5162-d3b5-da8b-63466cf9c4e5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28381);
        internal_counters.push_back(28638);
        internal_counters.push_back(28895);
        internal_counters.push_back(29152);
        internal_counters.push_back(29409);
        internal_counters.push_back(29666);
        internal_counters.push_back(29923);
        internal_counters.push_back(30180);
        internal_counters.push_back(30437);
        internal_counters.push_back(30694);
        internal_counters.push_back(30951);
        internal_counters.push_back(31208);
        internal_counters.push_back(31465);
        internal_counters.push_back(31722);
        internal_counters.push_back(31979);
        internal_counters.push_back(32236);

        c.DefineDerivedCounter("PreZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z before shading and failed Z test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "4484e950-f7a4-3800-bc74-78dd297f017e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28377);
        internal_counters.push_back(28634);
        internal_counters.push_back(28891);
        internal_counters.push_back(29148);
        internal_counters.push_back(29405);
        internal_counters.push_back(29662);
        internal_counters.push_back(29919);
        internal_counters.push_back(30176);
        internal_counters.push_back(30433);
        internal_counters.push_back(30690);
        internal_counters.push_back(30947);
        internal_counters.push_back(31204);
        internal_counters.push_back(31461);
        internal_counters.push_back(31718);
        internal_counters.push_back(31975);
        internal_counters.push_back(32232);

        c.DefineDerivedCounter("PostZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z after shading and passed.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "4995d5d6-2330-b986-508b-fae24856f44c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28379);
        internal_counters.push_back(28636);
        internal_counters.push_back(28893);
        internal_counters.push_back(29150);
        internal_counters.push_back(29407);
        internal_counters.push_back(29664);
        internal_counters.push_back(29921);
        internal_counters.push_back(30178);
        internal_counters.push_back(30435);
        internal_counters.push_back(30692);
        internal_counters.push_back(30949);
        internal_counters.push_back(31206);
        internal_counters.push_back(31463);
        internal_counters.push_back(31720);
        internal_counters.push_back(31977);
        internal_counters.push_back(32234);

        c.DefineDerivedCounter("PostZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z after shading and failed stencil test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "ae558af4-f4be-3dd4-7316-b2c4dcf0def8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28378);
        internal_counters.push_back(28635);
        internal_counters.push_back(28892);
        internal_counters.push_back(29149);
        internal_counters.push_back(29406);
        internal_counters.push_back(29663);
        internal_counters.push_back(29920);
        internal_counters.push_back(30177);
        internal_counters.push_back(30434);
        internal_counters.push_back(30691);
        internal_counters.push_back(30948);
        internal_counters.push_back(31205);
        internal_counters.push_back(31462);
        internal_counters.push_back(31719);
        internal_counters.push_back(31976);
        internal_counters.push_back(32233);

        c.DefineDerivedCounter("PostZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z after shading and failed Z test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "b3684c94-814a-c695-c85d-a5b6ab798b35");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28249);
        internal_counters.push_back(28506);
        internal_counters.push_back(28763);
        internal_counters.push_back(29020);
        internal_counters.push_back(29277);
        internal_counters.push_back(29534);
        internal_counters.push_back(29791);
        internal_counters.push_back(30048);
        internal_counters.push_back(30305);
        internal_counters.push_back(30562);
        internal_counters.push_back(30819);
        internal_counters.push_back(31076);
        internal_counters.push_back(31333);
        internal_counters.push_back(31590);
        internal_counters.push_back(31847);
        internal_counters.push_back(32104);
        internal_counters.push_back(36073);

        c.DefineDerivedCounter("ZUnitStalled", "DepthAndStencil", "The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "5e86c3ad-1726-3157-1d01-7ed188bf854d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28249);
        internal_counters.push_back(28506);
        internal_counters.push_back(28763);
        internal_counters.push_back(29020);
        internal_counters.push_back(29277);
        internal_counters.push_back(29534);
        internal_counters.push_back(29791);
        internal_counters.push_back(30048);
        internal_counters.push_back(30305);
        internal_counters.push_back(30562);
        internal_counters.push_back(30819);
        internal_counters.push_back(31076);
        internal_counters.push_back(31333);
        internal_counters.push_back(31590);
        internal_counters.push_back(31847);
        internal_counters.push_back(32104);

        c.DefineDerivedCounter("ZUnitStalledCycles", "DepthAndStencil", "Number of GPU cycles the depth buffer spends waiting for the color buffer to be ready to accept data. Larger numbers indicate a bottleneck in color buffer operations.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "4351fa7f-6737-2c3e-3ffb-b3addbdceedd");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28251);
        internal_counters.push_back(28508);
        internal_counters.push_back(28765);
        internal_counters.push_back(29022);
        internal_counters.push_back(29279);
        internal_counters.push_back(29536);
        internal_counters.push_back(29793);
        internal_counters.push_back(30050);
        internal_counters.push_back(30307);
        internal_counters.push_back(30564);
        internal_counters.push_back(30821);
        internal_counters.push_back(31078);
        internal_counters.push_back(31335);
        internal_counters.push_back(31592);
        internal_counters.push_back(31849);
        internal_counters.push_back(32106);
        internal_counters.push_back(28258);
        internal_counters.push_back(28515);
        internal_counters.push_back(28772);
        internal_counters.push_back(29029);
        internal_counters.push_back(29286);
        internal_counters.push_back(29543);
        internal_counters.push_back(29800);
        internal_counters.push_back(30057);
        internal_counters.push_back(30314);
        internal_counters.push_back(30571);
        internal_counters.push_back(30828);
        internal_counters.push_back(31085);
        internal_counters.push_back(31342);
        internal_counters.push_back(31599);
        internal_counters.push_back(31856);
        internal_counters.push_back(32113);

        c.DefineDerivedCounter("DBMemRead", "DepthAndStencil", "Number of bytes read from the depth buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(256),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+", "dcdb4ee7-bd50-00f7-c028-9e5f4ce888c0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(28263);
        internal_counters.push_back(28520);
        internal_counters.push_back(28777);
        internal_counters.push_back(29034);
        internal_counters.push_back(29291);
        internal_counters.push_back(29548);
        internal_counters.push_back(29805);
        internal_counters.push_back(30062);
        internal_counters.push_back(30319);
        internal_counters.push_back(30576);
        internal_counters.push_back(30833);
        internal_counters.push_back(31090);
        internal_counters.push_back(31347);
        internal_counters.push_back(31604);
        internal_counters.push_back(31861);
        internal_counters.push_back(32118);
        internal_counters.push_back(28266);
        internal_counters.push_back(28523);
        internal_counters.push_back(28780);
        internal_counters.push_back(29037);
        internal_counters.push_back(29294);
        internal_counters.push_back(29551);
        internal_counters.push_back(29808);
        internal_counters.push_back(30065);
        internal_counters.push_back(30322);
        internal_counters.push_back(30579);
        internal_counters.push_back(30836);
        internal_counters.push_back(31093);
        internal_counters.push_back(31350);
        internal_counters.push_back(31607);
        internal_counters.push_back(31864);
        internal_counters.push_back(32121);

        c.DefineDerivedCounter("DBMemWritten", "DepthAndStencil", "Number of bytes written to the depth buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+", "de5717f8-8a49-ee44-4645-10de51b37dcf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(32442);
        internal_counters.push_back(32668);
        internal_counters.push_back(32894);
        internal_counters.push_back(33120);
        internal_counters.push_back(33346);
        internal_counters.push_back(33572);
        internal_counters.push_back(33798);
        internal_counters.push_back(34024);
        internal_counters.push_back(34250);
        internal_counters.push_back(34476);
        internal_counters.push_back(34702);
        internal_counters.push_back(34928);
        internal_counters.push_back(35154);
        internal_counters.push_back(35380);
        internal_counters.push_back(35606);
        internal_counters.push_back(35832);

        c.DefineDerivedCounter("CBMemRead", "ColorBuffer", "Number of bytes read from the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "84b531d8-a1f8-7f49-7c27-7bc97801f1e6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(32432);
        internal_counters.push_back(32658);
        internal_counters.push_back(32884);
        internal_counters.push_back(33110);
        internal_counters.push_back(33336);
        internal_counters.push_back(33562);
        internal_counters.push_back(33788);
        internal_counters.push_back(34014);
        internal_counters.push_back(34240);
        internal_counters.push_back(34466);
        internal_counters.push_back(34692);
        internal_counters.push_back(34918);
        internal_counters.push_back(35144);
        internal_counters.push_back(35370);
        internal_counters.push_back(35596);
        internal_counters.push_back(35822);

        c.DefineDerivedCounter("CBMemWritten", "ColorBuffer", "Number of bytes written to the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "550f8ff8-60b6-a6bf-87d0-25ac9e87de70");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(32476);
        internal_counters.push_back(32702);
        internal_counters.push_back(32928);
        internal_counters.push_back(33154);
        internal_counters.push_back(33380);
        internal_counters.push_back(33606);
        internal_counters.push_back(33832);
        internal_counters.push_back(34058);
        internal_counters.push_back(34284);
        internal_counters.push_back(34510);
        internal_counters.push_back(34736);
        internal_counters.push_back(34962);
        internal_counters.push_back(35188);
        internal_counters.push_back(35414);
        internal_counters.push_back(35640);
        internal_counters.push_back(35866);
        internal_counters.push_back(32322);
        internal_counters.push_back(32548);
        internal_counters.push_back(32774);
        internal_counters.push_back(33000);
        internal_counters.push_back(33226);
        internal_counters.push_back(33452);
        internal_counters.push_back(33678);
        internal_counters.push_back(33904);
        internal_counters.push_back(34130);
        internal_counters.push_back(34356);
        internal_counters.push_back(34582);
        internal_counters.push_back(34808);
        internal_counters.push_back(35034);
        internal_counters.push_back(35260);
        internal_counters.push_back(35486);
        internal_counters.push_back(35712);

        c.DefineDerivedCounter("CBSlowPixelPct", "ColorBuffer", "Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,/,(100),*,(100),min", "5775943f-0313-7e52-9638-b24a449197bc");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(32476);
        internal_counters.push_back(32702);
        internal_counters.push_back(32928);
        internal_counters.push_back(33154);
        internal_counters.push_back(33380);
        internal_counters.push_back(33606);
        internal_counters.push_back(33832);
        internal_counters.push_back(34058);
        internal_counters.push_back(34284);
        internal_counters.push_back(34510);
        internal_counters.push_back(34736);
        internal_counters.push_back(34962);
        internal_counters.push_back(35188);
        internal_counters.push_back(35414);
        internal_counters.push_back(35640);
        internal_counters.push_back(35866);

        c.DefineDerivedCounter("CBSlowPixelCount", "ColorBuffer", "Number of pixels written to the color buffer using a half-rate or quarter-rate format.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "47eacbb0-28c8-22b4-5c69-c00d5813bb1c");
    }
}

