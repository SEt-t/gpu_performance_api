//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Public Counter Definitions for DX11 GFX7.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/public_counter_definitions_dx11_gfx7.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicDerivedCountersDx11Gfx7(GpaDerivedCounters& c)
{
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36851);

        c.DefineDerivedCounter("GPUTime", "Timing", "Time this API command took to execute on the GPU in nanoseconds from the time the previous command reached the bottom of the pipeline (BOP) to the time this command reaches the bottom of the pipeline (BOP). Does not include time that draw calls are processed in parallel.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "0,TS_FREQ,/,(1000000000),*", "cbd338f2-de6c-7b14-92ad-ba724ca2e501");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7886);
        internal_counters.push_back(7884);

        c.DefineDerivedCounter("GPUBusy", "Timing", "The percentage of time GPU was busy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,/,(100),*,(100),min", "bef38bf3-1167-0844-81f0-67d2d28ddbc5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("GPUBusyCycles", "Timing", "Number of GPU cycles that the GPU was busy.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0", "1e84970d-7014-2b8d-d61e-388b5f782691");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(35857);
        internal_counters.push_back(35997);
        internal_counters.push_back(36137);
        internal_counters.push_back(36277);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("TessellatorBusy", "Timing", "The percentage of time the tessellation engine is busy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,/,(100),*", "36af6c72-dcfb-8102-4fd4-ce8ddc573365");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(35857);
        internal_counters.push_back(35997);
        internal_counters.push_back(36137);
        internal_counters.push_back(36277);

        c.DefineDerivedCounter("TessellatorBusyCycles", "Timing", "Number of GPU cycles that the tessellation engine is busy.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,max,2,max,3,max", "60289dcb-7b33-46e7-26d1-8a2121605543");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10306);
        internal_counters.push_back(10492);
        internal_counters.push_back(10678);
        internal_counters.push_back(10864);
        internal_counters.push_back(10331);
        internal_counters.push_back(10517);
        internal_counters.push_back(10703);
        internal_counters.push_back(10889);
        internal_counters.push_back(10353);
        internal_counters.push_back(10539);
        internal_counters.push_back(10725);
        internal_counters.push_back(10911);
        internal_counters.push_back(10375);
        internal_counters.push_back(10561);
        internal_counters.push_back(10747);
        internal_counters.push_back(10933);
        internal_counters.push_back(10315);
        internal_counters.push_back(10501);
        internal_counters.push_back(10687);
        internal_counters.push_back(10873);
        internal_counters.push_back(10337);
        internal_counters.push_back(10523);
        internal_counters.push_back(10709);
        internal_counters.push_back(10895);
        internal_counters.push_back(10359);
        internal_counters.push_back(10545);
        internal_counters.push_back(10731);
        internal_counters.push_back(10917);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("VSBusy", "Timing", "The percentage of time the ShaderUnit has vertex shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,16,ifnotzero,4,20,ifnotzero,8,24,ifnotzero,(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,max,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max,28,/,(100),*,(100),min", "94caad5e-867c-6c09-cf3a-d05b51df8f3b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10306);
        internal_counters.push_back(10492);
        internal_counters.push_back(10678);
        internal_counters.push_back(10864);
        internal_counters.push_back(10331);
        internal_counters.push_back(10517);
        internal_counters.push_back(10703);
        internal_counters.push_back(10889);
        internal_counters.push_back(10353);
        internal_counters.push_back(10539);
        internal_counters.push_back(10725);
        internal_counters.push_back(10911);
        internal_counters.push_back(10375);
        internal_counters.push_back(10561);
        internal_counters.push_back(10747);
        internal_counters.push_back(10933);
        internal_counters.push_back(10315);
        internal_counters.push_back(10501);
        internal_counters.push_back(10687);
        internal_counters.push_back(10873);
        internal_counters.push_back(10337);
        internal_counters.push_back(10523);
        internal_counters.push_back(10709);
        internal_counters.push_back(10895);
        internal_counters.push_back(10359);
        internal_counters.push_back(10545);
        internal_counters.push_back(10731);
        internal_counters.push_back(10917);

        c.DefineDerivedCounter("VSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has vertex shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,16,ifnotzero,4,20,ifnotzero,8,24,ifnotzero,(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,max,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max", "a2086d4e-274b-48a8-3e08-a4ab76ac15dd");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36851);
        internal_counters.push_back(10306);
        internal_counters.push_back(10492);
        internal_counters.push_back(10678);
        internal_counters.push_back(10864);
        internal_counters.push_back(10331);
        internal_counters.push_back(10517);
        internal_counters.push_back(10703);
        internal_counters.push_back(10889);
        internal_counters.push_back(10353);
        internal_counters.push_back(10539);
        internal_counters.push_back(10725);
        internal_counters.push_back(10911);
        internal_counters.push_back(10375);
        internal_counters.push_back(10561);
        internal_counters.push_back(10747);
        internal_counters.push_back(10933);
        internal_counters.push_back(10315);
        internal_counters.push_back(10501);
        internal_counters.push_back(10687);
        internal_counters.push_back(10873);
        internal_counters.push_back(10337);
        internal_counters.push_back(10523);
        internal_counters.push_back(10709);
        internal_counters.push_back(10895);
        internal_counters.push_back(10359);
        internal_counters.push_back(10545);
        internal_counters.push_back(10731);
        internal_counters.push_back(10917);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("VSTime", "Timing", "Time vertex shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,17,ifnotzero,5,21,ifnotzero,9,25,ifnotzero,(0),2,18,ifnotzero,6,22,ifnotzero,10,26,ifnotzero,max,(0),3,19,ifnotzero,7,23,ifnotzero,11,27,ifnotzero,max,(0),4,20,ifnotzero,8,24,ifnotzero,12,28,ifnotzero,max,29,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "d6ce819e-69af-a241-d07a-5dd8d146e436");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10343);
        internal_counters.push_back(10529);
        internal_counters.push_back(10715);
        internal_counters.push_back(10901);
        internal_counters.push_back(10349);
        internal_counters.push_back(10535);
        internal_counters.push_back(10721);
        internal_counters.push_back(10907);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("HSBusy", "Timing", "The percentage of time the ShaderUnit has hull shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min", "16f30a0b-4cbf-eccd-b13f-ab68dd254d32");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10343);
        internal_counters.push_back(10529);
        internal_counters.push_back(10715);
        internal_counters.push_back(10901);
        internal_counters.push_back(10349);
        internal_counters.push_back(10535);
        internal_counters.push_back(10721);
        internal_counters.push_back(10907);

        c.DefineDerivedCounter("HSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has hull shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "753e76ef-8ef8-3f13-b511-4bd9f3589fdb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36851);
        internal_counters.push_back(10343);
        internal_counters.push_back(10529);
        internal_counters.push_back(10715);
        internal_counters.push_back(10901);
        internal_counters.push_back(10349);
        internal_counters.push_back(10535);
        internal_counters.push_back(10721);
        internal_counters.push_back(10907);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("HSTime", "Timing", "Time hull shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "8386a863-dd34-1526-f703-0f0c7b241bc4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10306);
        internal_counters.push_back(10492);
        internal_counters.push_back(10678);
        internal_counters.push_back(10864);
        internal_counters.push_back(10331);
        internal_counters.push_back(10517);
        internal_counters.push_back(10703);
        internal_counters.push_back(10889);
        internal_counters.push_back(10375);
        internal_counters.push_back(10561);
        internal_counters.push_back(10747);
        internal_counters.push_back(10933);
        internal_counters.push_back(10337);
        internal_counters.push_back(10523);
        internal_counters.push_back(10709);
        internal_counters.push_back(10895);
        internal_counters.push_back(10359);
        internal_counters.push_back(10545);
        internal_counters.push_back(10731);
        internal_counters.push_back(10917);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("DSBusy", "Timing", "The percentage of time the ShaderUnit has domain shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,4,12,ifnotzero,16,ifnotzero,(0),1,5,13,ifnotzero,17,ifnotzero,max,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max,20,/,(100),*,(100),min", "0c626e8a-9b82-b6d4-d9a3-578509316301");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10306);
        internal_counters.push_back(10492);
        internal_counters.push_back(10678);
        internal_counters.push_back(10864);
        internal_counters.push_back(10331);
        internal_counters.push_back(10517);
        internal_counters.push_back(10703);
        internal_counters.push_back(10889);
        internal_counters.push_back(10375);
        internal_counters.push_back(10561);
        internal_counters.push_back(10747);
        internal_counters.push_back(10933);
        internal_counters.push_back(10337);
        internal_counters.push_back(10523);
        internal_counters.push_back(10709);
        internal_counters.push_back(10895);
        internal_counters.push_back(10359);
        internal_counters.push_back(10545);
        internal_counters.push_back(10731);
        internal_counters.push_back(10917);

        c.DefineDerivedCounter("DSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has domain shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,4,12,ifnotzero,16,ifnotzero,(0),1,5,13,ifnotzero,17,ifnotzero,max,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max", "2f3f7561-0549-2232-536d-129ffc5f7703");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36851);
        internal_counters.push_back(10306);
        internal_counters.push_back(10492);
        internal_counters.push_back(10678);
        internal_counters.push_back(10864);
        internal_counters.push_back(10331);
        internal_counters.push_back(10517);
        internal_counters.push_back(10703);
        internal_counters.push_back(10889);
        internal_counters.push_back(10375);
        internal_counters.push_back(10561);
        internal_counters.push_back(10747);
        internal_counters.push_back(10933);
        internal_counters.push_back(10337);
        internal_counters.push_back(10523);
        internal_counters.push_back(10709);
        internal_counters.push_back(10895);
        internal_counters.push_back(10359);
        internal_counters.push_back(10545);
        internal_counters.push_back(10731);
        internal_counters.push_back(10917);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("DSTime", "Timing", "Time domain shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,5,13,ifnotzero,17,ifnotzero,(0),2,6,14,ifnotzero,18,ifnotzero,max,(0),3,7,15,ifnotzero,19,ifnotzero,max,(0),4,8,16,ifnotzero,20,ifnotzero,max,21,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "bfe28947-c727-8a9f-aa59-c218e58bfba5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10322);
        internal_counters.push_back(10508);
        internal_counters.push_back(10694);
        internal_counters.push_back(10880);
        internal_counters.push_back(10325);
        internal_counters.push_back(10511);
        internal_counters.push_back(10697);
        internal_counters.push_back(10883);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("GSBusy", "Timing", "The percentage of time the ShaderUnit has geometry shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min", "876f36d8-d046-833f-7832-673cbffd0a45");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10322);
        internal_counters.push_back(10508);
        internal_counters.push_back(10694);
        internal_counters.push_back(10880);
        internal_counters.push_back(10325);
        internal_counters.push_back(10511);
        internal_counters.push_back(10697);
        internal_counters.push_back(10883);

        c.DefineDerivedCounter("GSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has geometry shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "48203b6b-8983-c067-d63e-05da8be5111b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36851);
        internal_counters.push_back(10322);
        internal_counters.push_back(10508);
        internal_counters.push_back(10694);
        internal_counters.push_back(10880);
        internal_counters.push_back(10325);
        internal_counters.push_back(10511);
        internal_counters.push_back(10697);
        internal_counters.push_back(10883);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("GSTime", "Timing", "Time geometry shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "c73e715f-59af-76e8-9e22-097b94c066c4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10375);
        internal_counters.push_back(10561);
        internal_counters.push_back(10747);
        internal_counters.push_back(10933);
        internal_counters.push_back(10380);
        internal_counters.push_back(10566);
        internal_counters.push_back(10752);
        internal_counters.push_back(10938);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("PSBusy", "Timing", "The percentage of time the ShaderUnit has pixel shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*", "7e772beb-d82c-bd9a-aed0-fe504d416ce5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10375);
        internal_counters.push_back(10561);
        internal_counters.push_back(10747);
        internal_counters.push_back(10933);
        internal_counters.push_back(10380);
        internal_counters.push_back(10566);
        internal_counters.push_back(10752);
        internal_counters.push_back(10938);

        c.DefineDerivedCounter("PSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has pixel shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "b58bea04-ce8e-2984-80f4-8aba7d4c817b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36851);
        internal_counters.push_back(10375);
        internal_counters.push_back(10561);
        internal_counters.push_back(10747);
        internal_counters.push_back(10933);
        internal_counters.push_back(10380);
        internal_counters.push_back(10566);
        internal_counters.push_back(10752);
        internal_counters.push_back(10938);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("PSTime", "Timing", "Time pixel shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,0,TS_FREQ,/,(1000000000),*,*", "edca7694-7416-e8a6-0c5a-63a5ad5f3d74");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10363);
        internal_counters.push_back(10549);
        internal_counters.push_back(10735);
        internal_counters.push_back(10921);
        internal_counters.push_back(10367);
        internal_counters.push_back(10553);
        internal_counters.push_back(10739);
        internal_counters.push_back(10925);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("CSBusy", "Timing", "The percentage of time the ShaderUnit has compute shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,8,/,(100),*,(100),min", "493fdd90-8d2b-a055-5e4e-2d29c3396b8c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10363);
        internal_counters.push_back(10549);
        internal_counters.push_back(10735);
        internal_counters.push_back(10921);
        internal_counters.push_back(10367);
        internal_counters.push_back(10553);
        internal_counters.push_back(10739);
        internal_counters.push_back(10925);

        c.DefineDerivedCounter("CSBusyCycles", "Timing", "Number of GPU cycles that the ShaderUnit has compute shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,4,ifnotzero,(0),1,5,ifnotzero,max,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max", "39bcf1b8-f6b2-4c37-f9af-0a2bb59512f9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(36851);
        internal_counters.push_back(10363);
        internal_counters.push_back(10549);
        internal_counters.push_back(10735);
        internal_counters.push_back(10921);
        internal_counters.push_back(10367);
        internal_counters.push_back(10553);
        internal_counters.push_back(10739);
        internal_counters.push_back(10925);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("CSTime", "Timing", "Time compute shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,5,ifnotzero,(0),2,6,ifnotzero,max,(0),3,7,ifnotzero,max,(0),4,8,ifnotzero,max,9,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "dbc24916-ecb2-7eef-8d63-7afadaaab6bc");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(35752);
        internal_counters.push_back(35892);
        internal_counters.push_back(36032);
        internal_counters.push_back(36172);
        internal_counters.push_back(35733);
        internal_counters.push_back(35873);
        internal_counters.push_back(36013);
        internal_counters.push_back(36153);
        internal_counters.push_back(35828);
        internal_counters.push_back(35968);
        internal_counters.push_back(36108);
        internal_counters.push_back(36248);

        c.DefineDerivedCounter("VSVerticesIn", "VertexShader", "The number of vertices processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,8,9,10,11,sum4,ifnotzero", "810a04c8-2ff4-081d-766d-bfa2bd4ad916");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14099);
        internal_counters.push_back(14351);
        internal_counters.push_back(14603);
        internal_counters.push_back(14855);
        internal_counters.push_back(14077);
        internal_counters.push_back(14329);
        internal_counters.push_back(14581);
        internal_counters.push_back(14833);
        internal_counters.push_back(12083);
        internal_counters.push_back(12335);
        internal_counters.push_back(12587);
        internal_counters.push_back(12839);
        internal_counters.push_back(12061);
        internal_counters.push_back(12313);
        internal_counters.push_back(12565);
        internal_counters.push_back(12817);
        internal_counters.push_back(12071);
        internal_counters.push_back(12323);
        internal_counters.push_back(12575);
        internal_counters.push_back(12827);
        internal_counters.push_back(16115);
        internal_counters.push_back(16367);
        internal_counters.push_back(16619);
        internal_counters.push_back(16871);
        internal_counters.push_back(16093);
        internal_counters.push_back(16345);
        internal_counters.push_back(16597);
        internal_counters.push_back(16849);
        internal_counters.push_back(16103);
        internal_counters.push_back(16355);
        internal_counters.push_back(16607);
        internal_counters.push_back(16859);

        c.DefineDerivedCounter("VSVALUInstCount", "VertexShader", "Average number of vector ALU instructions executed in the VS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,24,25,26,27,sum4,/,28,29,30,31,sum4,ifnotzero", "8ec604e4-63f5-e6b5-4558-c38f0b26d4b1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14103);
        internal_counters.push_back(14355);
        internal_counters.push_back(14607);
        internal_counters.push_back(14859);
        internal_counters.push_back(14077);
        internal_counters.push_back(14329);
        internal_counters.push_back(14581);
        internal_counters.push_back(14833);
        internal_counters.push_back(12087);
        internal_counters.push_back(12339);
        internal_counters.push_back(12591);
        internal_counters.push_back(12843);
        internal_counters.push_back(12061);
        internal_counters.push_back(12313);
        internal_counters.push_back(12565);
        internal_counters.push_back(12817);
        internal_counters.push_back(12071);
        internal_counters.push_back(12323);
        internal_counters.push_back(12575);
        internal_counters.push_back(12827);
        internal_counters.push_back(16119);
        internal_counters.push_back(16371);
        internal_counters.push_back(16623);
        internal_counters.push_back(16875);
        internal_counters.push_back(16093);
        internal_counters.push_back(16345);
        internal_counters.push_back(16597);
        internal_counters.push_back(16849);
        internal_counters.push_back(16103);
        internal_counters.push_back(16355);
        internal_counters.push_back(16607);
        internal_counters.push_back(16859);

        c.DefineDerivedCounter("VSSALUInstCount", "VertexShader", "Average number of scalar ALU instructions executed in the VS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,24,25,26,27,sum4,/,28,29,30,31,sum4,ifnotzero", "e3da0383-7322-7f65-8cf2-3ce641578e54");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14154);
        internal_counters.push_back(14406);
        internal_counters.push_back(14658);
        internal_counters.push_back(14910);
        internal_counters.push_back(12138);
        internal_counters.push_back(12390);
        internal_counters.push_back(12642);
        internal_counters.push_back(12894);
        internal_counters.push_back(12071);
        internal_counters.push_back(12323);
        internal_counters.push_back(12575);
        internal_counters.push_back(12827);
        internal_counters.push_back(7886);
        internal_counters.push_back(16170);
        internal_counters.push_back(16422);
        internal_counters.push_back(16674);
        internal_counters.push_back(16926);
        internal_counters.push_back(16103);
        internal_counters.push_back(16355);
        internal_counters.push_back(16607);
        internal_counters.push_back(16859);

        c.DefineDerivedCounter("VSVALUBusy", "VertexShader", "The percentage of GPUTime vector ALU instructions are being processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,13,14,15,16,sum4,17,18,19,20,sum4,ifnotzero,(4),*,NUM_SIMDS,/,12,/,(100),*", "8b3572f7-fda0-eddf-6c93-2ab145b8754b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14154);
        internal_counters.push_back(14406);
        internal_counters.push_back(14658);
        internal_counters.push_back(14910);
        internal_counters.push_back(12138);
        internal_counters.push_back(12390);
        internal_counters.push_back(12642);
        internal_counters.push_back(12894);
        internal_counters.push_back(12071);
        internal_counters.push_back(12323);
        internal_counters.push_back(12575);
        internal_counters.push_back(12827);
        internal_counters.push_back(16170);
        internal_counters.push_back(16422);
        internal_counters.push_back(16674);
        internal_counters.push_back(16926);
        internal_counters.push_back(16103);
        internal_counters.push_back(16355);
        internal_counters.push_back(16607);
        internal_counters.push_back(16859);

        c.DefineDerivedCounter("VSVALUBusyCycles", "VertexShader", "Number of GPU cycles where vector ALU instructions are being processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,16,17,18,19,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "0af1686e-6d77-2f6e-2862-7bb8e869a776");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14159);
        internal_counters.push_back(14411);
        internal_counters.push_back(14663);
        internal_counters.push_back(14915);
        internal_counters.push_back(12143);
        internal_counters.push_back(12395);
        internal_counters.push_back(12647);
        internal_counters.push_back(12899);
        internal_counters.push_back(12071);
        internal_counters.push_back(12323);
        internal_counters.push_back(12575);
        internal_counters.push_back(12827);
        internal_counters.push_back(7886);
        internal_counters.push_back(16175);
        internal_counters.push_back(16427);
        internal_counters.push_back(16679);
        internal_counters.push_back(16931);
        internal_counters.push_back(16103);
        internal_counters.push_back(16355);
        internal_counters.push_back(16607);
        internal_counters.push_back(16859);

        c.DefineDerivedCounter("VSSALUBusy", "VertexShader", "The percentage of GPUTime scalar ALU instructions are being processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,13,14,15,16,sum4,17,18,19,20,sum4,ifnotzero,(4),*,NUM_SIMDS,/,12,/,(100),*", "3bc8730c-e3bc-e2f0-7d24-36974064c25a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14159);
        internal_counters.push_back(14411);
        internal_counters.push_back(14663);
        internal_counters.push_back(14915);
        internal_counters.push_back(12143);
        internal_counters.push_back(12395);
        internal_counters.push_back(12647);
        internal_counters.push_back(12899);
        internal_counters.push_back(12071);
        internal_counters.push_back(12323);
        internal_counters.push_back(12575);
        internal_counters.push_back(12827);
        internal_counters.push_back(16175);
        internal_counters.push_back(16427);
        internal_counters.push_back(16679);
        internal_counters.push_back(16931);
        internal_counters.push_back(16103);
        internal_counters.push_back(16355);
        internal_counters.push_back(16607);
        internal_counters.push_back(16859);

        c.DefineDerivedCounter("VSSALUBusyCycles", "VertexShader", "Number of GPU cycles where scalar ALU instructions are being processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,16,17,18,19,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "357ac7cd-2e1c-dcb0-77f6-37527237f35b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(35837);
        internal_counters.push_back(35977);
        internal_counters.push_back(36117);
        internal_counters.push_back(36257);

        c.DefineDerivedCounter("HSPatches", "HullShader", "The number of patches processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "d1bbd27d-d591-4509-df52-d329fb73a98f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17123);
        internal_counters.push_back(17375);
        internal_counters.push_back(17627);
        internal_counters.push_back(17879);
        internal_counters.push_back(17101);
        internal_counters.push_back(17353);
        internal_counters.push_back(17605);
        internal_counters.push_back(17857);

        c.DefineDerivedCounter("HSVALUInstCount", "HullShader", "Average number of vector ALU instructions executed in the HS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "786673bf-d58f-9895-3a37-9d6efb5e5804");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17127);
        internal_counters.push_back(17379);
        internal_counters.push_back(17631);
        internal_counters.push_back(17883);
        internal_counters.push_back(17101);
        internal_counters.push_back(17353);
        internal_counters.push_back(17605);
        internal_counters.push_back(17857);

        c.DefineDerivedCounter("HSSALUInstCount", "HullShader", "Average number of scalar ALU instructions executed in the HS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "1af675c4-cb0b-c4c5-c131-2796750f683e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17178);
        internal_counters.push_back(17430);
        internal_counters.push_back(17682);
        internal_counters.push_back(17934);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("HSVALUBusy", "HullShader", "The percentage of GPUTime vector ALU instructions are being processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "7880d192-8015-0311-d43e-fb0b7a4df179");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17178);
        internal_counters.push_back(17430);
        internal_counters.push_back(17682);
        internal_counters.push_back(17934);

        c.DefineDerivedCounter("HSVALUBusyCycles", "HullShader", "Number of GPU cycles vector where ALU instructions are being processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "3afb94e4-e937-5730-0cc9-41d3113ba012");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17183);
        internal_counters.push_back(17435);
        internal_counters.push_back(17687);
        internal_counters.push_back(17939);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("HSSALUBusy", "HullShader", "The percentage of GPUTime scalar ALU instructions are being processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "34748a4b-9148-0b06-b7b9-5700d6631bde");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(17183);
        internal_counters.push_back(17435);
        internal_counters.push_back(17687);
        internal_counters.push_back(17939);

        c.DefineDerivedCounter("HSSALUBusyCycles", "HullShader", "Number of GPU cycles where scalar ALU instructions are being processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "9bceabf7-3f01-2fd9-7b1d-8fe46c729efc");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(35752);
        internal_counters.push_back(35892);
        internal_counters.push_back(36032);
        internal_counters.push_back(36172);
        internal_counters.push_back(35733);
        internal_counters.push_back(35873);
        internal_counters.push_back(36013);
        internal_counters.push_back(36153);
        internal_counters.push_back(35828);
        internal_counters.push_back(35968);
        internal_counters.push_back(36108);
        internal_counters.push_back(36248);

        c.DefineDerivedCounter("DSVerticesIn", "DomainShader", "The number of vertices processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,4,5,6,7,sum4,ifnotzero,8,9,10,11,sum4,ifnotzero", "b88d9d05-2418-e639-4e3d-3a5815855f8d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14099);
        internal_counters.push_back(14351);
        internal_counters.push_back(14603);
        internal_counters.push_back(14855);
        internal_counters.push_back(14077);
        internal_counters.push_back(14329);
        internal_counters.push_back(14581);
        internal_counters.push_back(14833);
        internal_counters.push_back(12083);
        internal_counters.push_back(12335);
        internal_counters.push_back(12587);
        internal_counters.push_back(12839);
        internal_counters.push_back(12061);
        internal_counters.push_back(12313);
        internal_counters.push_back(12565);
        internal_counters.push_back(12817);
        internal_counters.push_back(12071);
        internal_counters.push_back(12323);
        internal_counters.push_back(12575);
        internal_counters.push_back(12827);
        internal_counters.push_back(16103);
        internal_counters.push_back(16355);
        internal_counters.push_back(16607);
        internal_counters.push_back(16859);

        c.DefineDerivedCounter("DSVALUInstCount", "DomainShader", "Average number of vector ALU instructions executed in the DS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,ifnotzero", "03a3e949-82f9-be4d-7228-5eb5ad80915a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14103);
        internal_counters.push_back(14355);
        internal_counters.push_back(14607);
        internal_counters.push_back(14859);
        internal_counters.push_back(14077);
        internal_counters.push_back(14329);
        internal_counters.push_back(14581);
        internal_counters.push_back(14833);
        internal_counters.push_back(12087);
        internal_counters.push_back(12339);
        internal_counters.push_back(12591);
        internal_counters.push_back(12843);
        internal_counters.push_back(12061);
        internal_counters.push_back(12313);
        internal_counters.push_back(12565);
        internal_counters.push_back(12817);
        internal_counters.push_back(12071);
        internal_counters.push_back(12323);
        internal_counters.push_back(12575);
        internal_counters.push_back(12827);
        internal_counters.push_back(16103);
        internal_counters.push_back(16355);
        internal_counters.push_back(16607);
        internal_counters.push_back(16859);

        c.DefineDerivedCounter("DSSALUInstCount", "DomainShader", "Average number of scalar ALU instructions executed in the DS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,12,13,14,15,sum4,/,16,17,18,19,sum4,ifnotzero,20,21,22,23,sum4,ifnotzero", "73daa728-483e-95d0-5b40-504719aadc1c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14154);
        internal_counters.push_back(14406);
        internal_counters.push_back(14658);
        internal_counters.push_back(14910);
        internal_counters.push_back(12138);
        internal_counters.push_back(12390);
        internal_counters.push_back(12642);
        internal_counters.push_back(12894);
        internal_counters.push_back(7886);
        internal_counters.push_back(12071);
        internal_counters.push_back(12323);
        internal_counters.push_back(12575);
        internal_counters.push_back(12827);
        internal_counters.push_back(16103);
        internal_counters.push_back(16355);
        internal_counters.push_back(16607);
        internal_counters.push_back(16859);

        c.DefineDerivedCounter("DSVALUBusy", "DomainShader", "The percentage of GPUTime vector ALU instructions are being processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,9,10,11,12,sum4,ifnotzero,13,14,15,16,sum4,ifnotzero,(4),*,NUM_SIMDS,/,8,/,(100),*", "ddc0dd0c-0c73-b831-a410-cfea8b9713d9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14154);
        internal_counters.push_back(14406);
        internal_counters.push_back(14658);
        internal_counters.push_back(14910);
        internal_counters.push_back(12138);
        internal_counters.push_back(12390);
        internal_counters.push_back(12642);
        internal_counters.push_back(12894);
        internal_counters.push_back(12071);
        internal_counters.push_back(12323);
        internal_counters.push_back(12575);
        internal_counters.push_back(12827);
        internal_counters.push_back(16103);
        internal_counters.push_back(16355);
        internal_counters.push_back(16607);
        internal_counters.push_back(16859);

        c.DefineDerivedCounter("DSVALUBusyCycles", "DomainShader", "Number of GPU cycles where vector ALU instructions are being processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "1e280912-81ee-a684-823b-94c468d8ebda");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14159);
        internal_counters.push_back(14411);
        internal_counters.push_back(14663);
        internal_counters.push_back(14915);
        internal_counters.push_back(12143);
        internal_counters.push_back(12395);
        internal_counters.push_back(12647);
        internal_counters.push_back(12899);
        internal_counters.push_back(7886);
        internal_counters.push_back(12071);
        internal_counters.push_back(12323);
        internal_counters.push_back(12575);
        internal_counters.push_back(12827);
        internal_counters.push_back(16103);
        internal_counters.push_back(16355);
        internal_counters.push_back(16607);
        internal_counters.push_back(16859);

        c.DefineDerivedCounter("DSSALUBusy", "DomainShader", "The percentage of GPUTime scalar ALU instructions are being processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,9,10,11,12,sum4,ifnotzero,13,14,15,16,sum4,ifnotzero,(4),*,NUM_SIMDS,/,8,/,(100),*", "b639f64c-24af-348f-6439-43c701b4fc07");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14159);
        internal_counters.push_back(14411);
        internal_counters.push_back(14663);
        internal_counters.push_back(14915);
        internal_counters.push_back(12143);
        internal_counters.push_back(12395);
        internal_counters.push_back(12647);
        internal_counters.push_back(12899);
        internal_counters.push_back(12071);
        internal_counters.push_back(12323);
        internal_counters.push_back(12575);
        internal_counters.push_back(12827);
        internal_counters.push_back(16103);
        internal_counters.push_back(16355);
        internal_counters.push_back(16607);
        internal_counters.push_back(16859);

        c.DefineDerivedCounter("DSSALUBusyCycles", "DomainShader", "Number of GPU cycles where scalar ALU instructions are being processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,ifnotzero,12,13,14,15,sum4,ifnotzero,(4),*,NUM_SIMDS,/", "b5bf8a0c-e682-1aa6-23d7-c6c6784ffa5c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(35741);
        internal_counters.push_back(35881);
        internal_counters.push_back(36021);
        internal_counters.push_back(36161);

        c.DefineDerivedCounter("GSPrimsIn", "GeometryShader", "The number of primitives passed into the GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "20c29866-509a-aaab-2697-6b2c38f79953");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(35752);
        internal_counters.push_back(35892);
        internal_counters.push_back(36032);
        internal_counters.push_back(36172);
        internal_counters.push_back(35733);
        internal_counters.push_back(35873);
        internal_counters.push_back(36013);
        internal_counters.push_back(36153);

        c.DefineDerivedCounter("GSVerticesOut", "GeometryShader", "The number of vertices output by the GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,ifnotzero", "775b9736-319a-bd8a-48c9-68db9c91d978");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13091);
        internal_counters.push_back(13343);
        internal_counters.push_back(13595);
        internal_counters.push_back(13847);
        internal_counters.push_back(13069);
        internal_counters.push_back(13321);
        internal_counters.push_back(13573);
        internal_counters.push_back(13825);

        c.DefineDerivedCounter("GSVALUInstCount", "GeometryShader", "Average number of vector ALU instructions executed in the GS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "21b12bfa-b8cd-2e71-a2d5-f9e9f1d65d61");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13095);
        internal_counters.push_back(13347);
        internal_counters.push_back(13599);
        internal_counters.push_back(13851);
        internal_counters.push_back(13069);
        internal_counters.push_back(13321);
        internal_counters.push_back(13573);
        internal_counters.push_back(13825);

        c.DefineDerivedCounter("GSSALUInstCount", "GeometryShader", "Average number of scalar ALU instructions executed in the GS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "a8562594-d335-ca43-61bf-03b72d2b98a5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13146);
        internal_counters.push_back(13398);
        internal_counters.push_back(13650);
        internal_counters.push_back(13902);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("GSVALUBusy", "GeometryShader", "The percentage of GPUTime vector ALU instructions are being processed by the GS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "228a4818-1e56-cebb-0720-3b2cdc057a6f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13146);
        internal_counters.push_back(13398);
        internal_counters.push_back(13650);
        internal_counters.push_back(13902);

        c.DefineDerivedCounter("GSVALUBusyCycles", "GeometryShader", "Number of GPU cycles where vector ALU instructions are being processed by the GS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "be217edd-226f-bd97-9a48-46e2809b1933");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13151);
        internal_counters.push_back(13403);
        internal_counters.push_back(13655);
        internal_counters.push_back(13907);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("GSSALUBusy", "GeometryShader", "The percentage of GPUTime scalar ALU instructions are being processed by the GS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,4,/,(100),*", "f28ce300-800e-9822-39e4-f48528bdb935");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(13151);
        internal_counters.push_back(13403);
        internal_counters.push_back(13655);
        internal_counters.push_back(13907);

        c.DefineDerivedCounter("GSSALUBusyCycles", "GeometryShader", "Number of GPU cycles where scalar ALU instructions are being processed by the GS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "b3eace7c-3bc4-0107-887f-923851dc8ea7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8090);
        internal_counters.push_back(8243);
        internal_counters.push_back(8396);
        internal_counters.push_back(8549);
        internal_counters.push_back(8094);
        internal_counters.push_back(8247);
        internal_counters.push_back(8400);
        internal_counters.push_back(8553);
        internal_counters.push_back(8046);
        internal_counters.push_back(8199);
        internal_counters.push_back(8352);
        internal_counters.push_back(8505);
        internal_counters.push_back(8058);
        internal_counters.push_back(8211);
        internal_counters.push_back(8364);
        internal_counters.push_back(8517);
        internal_counters.push_back(8047);
        internal_counters.push_back(8200);
        internal_counters.push_back(8353);
        internal_counters.push_back(8506);
        internal_counters.push_back(8059);
        internal_counters.push_back(8212);
        internal_counters.push_back(8365);
        internal_counters.push_back(8518);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("PrimitiveAssemblyBusy", "Timing", "The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,4,-,8,12,+,16,+,20,(2),*,+,SU_CLOCKS_PRIM,*,-,1,5,-,9,13,+,17,+,21,(2),*,+,SU_CLOCKS_PRIM,*,-,max,2,6,-,10,14,+,18,+,22,(2),*,+,SU_CLOCKS_PRIM,*,-,max,3,7,-,11,15,+,19,+,23,(2),*,+,SU_CLOCKS_PRIM,*,-,max,(0),max,24,/,(100),*,(100),min", "54ac5640-c4d7-95e2-20e0-6a9fdfc07333");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8090);
        internal_counters.push_back(8243);
        internal_counters.push_back(8396);
        internal_counters.push_back(8549);
        internal_counters.push_back(8094);
        internal_counters.push_back(8247);
        internal_counters.push_back(8400);
        internal_counters.push_back(8553);
        internal_counters.push_back(8046);
        internal_counters.push_back(8199);
        internal_counters.push_back(8352);
        internal_counters.push_back(8505);
        internal_counters.push_back(8058);
        internal_counters.push_back(8211);
        internal_counters.push_back(8364);
        internal_counters.push_back(8517);
        internal_counters.push_back(8047);
        internal_counters.push_back(8200);
        internal_counters.push_back(8353);
        internal_counters.push_back(8506);
        internal_counters.push_back(8059);
        internal_counters.push_back(8212);
        internal_counters.push_back(8365);
        internal_counters.push_back(8518);

        c.DefineDerivedCounter("PrimitiveAssemblyBusyCycles", "Timing", "Number of GPU cycles the primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,4,-,8,12,+,16,+,20,(2),*,+,SU_CLOCKS_PRIM,*,-,1,5,-,9,13,+,17,+,21,(2),*,+,SU_CLOCKS_PRIM,*,-,max,2,6,-,10,14,+,18,+,22,(2),*,+,SU_CLOCKS_PRIM,*,-,max,3,7,-,11,15,+,19,+,23,(2),*,+,SU_CLOCKS_PRIM,*,-,max,(0),max", "99777f2d-9626-c78a-a97c-c4505eba1e5f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7993);
        internal_counters.push_back(8146);
        internal_counters.push_back(8299);
        internal_counters.push_back(8452);

        c.DefineDerivedCounter("PrimitivesIn", "PrimitiveAssembly", "The number of primitives received by the hardware. This includes primitives generated by tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "a515b80d-75c3-c7d2-0d2f-d7766b4759a6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(7999);
        internal_counters.push_back(8152);
        internal_counters.push_back(8305);
        internal_counters.push_back(8458);
        internal_counters.push_back(8039);
        internal_counters.push_back(8192);
        internal_counters.push_back(8345);
        internal_counters.push_back(8498);
        internal_counters.push_back(8040);
        internal_counters.push_back(8193);
        internal_counters.push_back(8346);
        internal_counters.push_back(8499);
        internal_counters.push_back(8041);
        internal_counters.push_back(8194);
        internal_counters.push_back(8347);
        internal_counters.push_back(8500);
        internal_counters.push_back(8042);
        internal_counters.push_back(8195);
        internal_counters.push_back(8348);
        internal_counters.push_back(8501);

        c.DefineDerivedCounter("CulledPrims", "PrimitiveAssembly", "The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+,2,+,3,+,4,+,5,+,6,+,7,+,8,+,9,+,10,+,11,+,12,+,13,+,14,+,15,+,16,+,17,+,18,+,19,+", "589bdf55-9192-280a-41c3-584bc94f2562");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8006);
        internal_counters.push_back(8159);
        internal_counters.push_back(8312);
        internal_counters.push_back(8465);

        c.DefineDerivedCounter("ClippedPrims", "PrimitiveAssembly", "The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "5ef6f9d5-155e-5baa-163f-8359d9ea9bbf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8094);
        internal_counters.push_back(8247);
        internal_counters.push_back(8400);
        internal_counters.push_back(8553);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("PAStalledOnRasterizer", "PrimitiveAssembly", "Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,/,(100),*", "6f9f416b-53c1-0457-f88c-7b6ba8973974");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8094);
        internal_counters.push_back(8247);
        internal_counters.push_back(8400);
        internal_counters.push_back(8553);

        c.DefineDerivedCounter("PAStalledOnRasterizerCycles", "PrimitiveAssembly", "Number of GPU cycles the primitive assembly waits for rasterization to be ready to accept data. Indicates the number of GPU cycles the pipeline is bottlenecked by pixel operations.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,max,2,max,3,max", "7a8c492a-c566-9328-6805-760dbff5c0f2");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10189);
        internal_counters.push_back(10221);
        internal_counters.push_back(10253);
        internal_counters.push_back(10285);
        internal_counters.push_back(10194);
        internal_counters.push_back(10226);
        internal_counters.push_back(10258);
        internal_counters.push_back(10290);
        internal_counters.push_back(10199);
        internal_counters.push_back(10231);
        internal_counters.push_back(10263);
        internal_counters.push_back(10295);
        internal_counters.push_back(10204);
        internal_counters.push_back(10236);
        internal_counters.push_back(10268);
        internal_counters.push_back(10300);

        c.DefineDerivedCounter("PSPixelsOut", "PixelShader", "Pixels exported from shader to color buffers. Does not include killed or alpha tested pixels; if there are multiple render targets, each render target receives one export, so this will be 2 for 1 pixel written to two RTs.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,12,13,14,15,sum4,sum4", "24cba16c-baa6-6ecd-95ad-92ecb1338da1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10191);
        internal_counters.push_back(10223);
        internal_counters.push_back(10255);
        internal_counters.push_back(10287);
        internal_counters.push_back(10196);
        internal_counters.push_back(10228);
        internal_counters.push_back(10260);
        internal_counters.push_back(10292);
        internal_counters.push_back(10201);
        internal_counters.push_back(10233);
        internal_counters.push_back(10265);
        internal_counters.push_back(10297);
        internal_counters.push_back(10206);
        internal_counters.push_back(10238);
        internal_counters.push_back(10270);
        internal_counters.push_back(10302);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("PSExportStalls", "PixelShader", "Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max,16,/,(100),*", "9b4f466c-ff97-22bb-557d-84d3c4c51895");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10191);
        internal_counters.push_back(10223);
        internal_counters.push_back(10255);
        internal_counters.push_back(10287);
        internal_counters.push_back(10196);
        internal_counters.push_back(10228);
        internal_counters.push_back(10260);
        internal_counters.push_back(10292);
        internal_counters.push_back(10201);
        internal_counters.push_back(10233);
        internal_counters.push_back(10265);
        internal_counters.push_back(10297);
        internal_counters.push_back(10206);
        internal_counters.push_back(10238);
        internal_counters.push_back(10270);
        internal_counters.push_back(10302);

        c.DefineDerivedCounter("PSExportStallsCycles", "PixelShader", "Number of GPU cycles the pixel shader output stalls. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max", "47c72aad-64e6-0864-d533-d8e0bc27c156");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15107);
        internal_counters.push_back(15359);
        internal_counters.push_back(15611);
        internal_counters.push_back(15863);
        internal_counters.push_back(15085);
        internal_counters.push_back(15337);
        internal_counters.push_back(15589);
        internal_counters.push_back(15841);

        c.DefineDerivedCounter("PSVALUInstCount", "PixelShader", "Average number of vector ALU instructions executed in the PS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "eb74389e-435c-4137-ecf1-39eb5bc1cbfe");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15111);
        internal_counters.push_back(15363);
        internal_counters.push_back(15615);
        internal_counters.push_back(15867);
        internal_counters.push_back(15085);
        internal_counters.push_back(15337);
        internal_counters.push_back(15589);
        internal_counters.push_back(15841);

        c.DefineDerivedCounter("PSSALUInstCount", "PixelShader", "Average number of scalar ALU instructions executed in the PS. Affected by flow control.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,/", "e6a06580-8a82-96d6-976c-acc121fc5516");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15162);
        internal_counters.push_back(15414);
        internal_counters.push_back(15666);
        internal_counters.push_back(15918);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("PSVALUBusy", "PixelShader", "The percentage of GPUTime vector ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*", "6ce6fef7-8e33-10b4-f351-af755e177e85");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15162);
        internal_counters.push_back(15414);
        internal_counters.push_back(15666);
        internal_counters.push_back(15918);

        c.DefineDerivedCounter("PSVALUBusyCycles", "PixelShader", "Number of GPU cycles where vector ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "1e276f86-cd2a-72e7-fc9d-004f666f2981");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15167);
        internal_counters.push_back(15419);
        internal_counters.push_back(15671);
        internal_counters.push_back(15923);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("PSSALUBusy", "PixelShader", "The percentage of GPUTime scalar ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,4,/,(100),*", "2ff9f34f-e94b-af4d-18c2-5fbbf6d1727a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(15167);
        internal_counters.push_back(15419);
        internal_counters.push_back(15671);
        internal_counters.push_back(15923);

        c.DefineDerivedCounter("PSSALUBusyCycles", "PixelShader", "Number of GPU cycles where scalar ALU instructions are being processed by the PS.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "29808906-f128-b078-fc79-820a4b3b3b8d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSThreadGroups", "ComputeShader", "Total number of thread groups.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "8ce3fc80-56b2-97f9-8e70-2e8c747cea68");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10367);
        internal_counters.push_back(10553);
        internal_counters.push_back(10739);
        internal_counters.push_back(10925);

        c.DefineDerivedCounter("CSWavefronts", "ComputeShader", "The total number of wavefronts used for the CS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "42379c6e-369b-c237-8b25-cdb9cdc65c4d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);
        internal_counters.push_back(11063);
        internal_counters.push_back(11315);
        internal_counters.push_back(11567);
        internal_counters.push_back(11819);

        c.DefineDerivedCounter("CSThreads", "ComputeShader", "The number of CS threads processed by the hardware.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),4,5,6,7,sum4,0,1,2,3,sum4,ifnotzero", "7a648013-6eac-2665-ac36-13c6f4ac9c26");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18131);
        internal_counters.push_back(18383);
        internal_counters.push_back(18635);
        internal_counters.push_back(18887);
        internal_counters.push_back(18109);
        internal_counters.push_back(18361);
        internal_counters.push_back(18613);
        internal_counters.push_back(18865);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSVALUInsts", "ComputeShader", "The average number of vector ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "376cb1cc-5a40-9d1d-404c-f1736c0c5084");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18194);
        internal_counters.push_back(18446);
        internal_counters.push_back(18698);
        internal_counters.push_back(18950);
        internal_counters.push_back(18186);
        internal_counters.push_back(18438);
        internal_counters.push_back(18690);
        internal_counters.push_back(18942);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSVALUUtilization", "ComputeShader", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,(64),*,/,(100),*,8,9,10,11,sum4,ifnotzero,(100),min", "4476879e-cdc0-d602-b24e-9b4a8d38438f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18135);
        internal_counters.push_back(18387);
        internal_counters.push_back(18639);
        internal_counters.push_back(18891);
        internal_counters.push_back(18109);
        internal_counters.push_back(18361);
        internal_counters.push_back(18613);
        internal_counters.push_back(18865);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSSALUInsts", "ComputeShader", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "eb211144-8136-ff86-e8bf-4d0493a904cb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18133);
        internal_counters.push_back(18385);
        internal_counters.push_back(18637);
        internal_counters.push_back(18889);
        internal_counters.push_back(18109);
        internal_counters.push_back(18361);
        internal_counters.push_back(18613);
        internal_counters.push_back(18865);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSVFetchInsts", "ComputeShader", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "3e2829c0-6215-783b-c271-6d57ff2c520e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18136);
        internal_counters.push_back(18388);
        internal_counters.push_back(18640);
        internal_counters.push_back(18892);
        internal_counters.push_back(18109);
        internal_counters.push_back(18361);
        internal_counters.push_back(18613);
        internal_counters.push_back(18865);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSSFetchInsts", "ComputeShader", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "da09171c-6a0a-584f-fddc-dc5062d63a3e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18132);
        internal_counters.push_back(18384);
        internal_counters.push_back(18636);
        internal_counters.push_back(18888);
        internal_counters.push_back(18109);
        internal_counters.push_back(18361);
        internal_counters.push_back(18613);
        internal_counters.push_back(18865);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSVWriteInsts", "ComputeShader", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "43438c22-e910-b377-b767-b32902e0df0d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18137);
        internal_counters.push_back(18389);
        internal_counters.push_back(18641);
        internal_counters.push_back(18893);
        internal_counters.push_back(18138);
        internal_counters.push_back(18390);
        internal_counters.push_back(18642);
        internal_counters.push_back(18894);
        internal_counters.push_back(18109);
        internal_counters.push_back(18361);
        internal_counters.push_back(18613);
        internal_counters.push_back(18865);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSFlatVMemInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,-,8,9,10,11,sum4,/,12,13,14,15,sum4,ifnotzero", "2570b477-13e3-f5b6-e6ff-7159373bc74d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18186);
        internal_counters.push_back(18438);
        internal_counters.push_back(18690);
        internal_counters.push_back(18942);
        internal_counters.push_back(7886);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSVALUBusy", "ComputeShader", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,/,4,/,(100),*,5,6,7,8,sum4,ifnotzero", "f1e64815-f6a8-c277-d4f9-d054b443e205");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18186);
        internal_counters.push_back(18438);
        internal_counters.push_back(18690);
        internal_counters.push_back(18942);

        c.DefineDerivedCounter("CSVALUBusyCycles", "ComputeShader", "Number of GPU cycles where vector ALU instructions are processed.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,/", "2d0d5852-2658-eb73-68d2-f23f7118c9c3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18191);
        internal_counters.push_back(18443);
        internal_counters.push_back(18695);
        internal_counters.push_back(18947);
        internal_counters.push_back(7886);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSSALUBusy", "ComputeShader", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,4,/,(100),*,5,6,7,8,sum4,ifnotzero", "3fc35f4e-9882-94e3-6f5f-4e81cd97082a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18191);
        internal_counters.push_back(18443);
        internal_counters.push_back(18695);
        internal_counters.push_back(18947);

        c.DefineDerivedCounter("CSSALUBusyCycles", "ComputeShader", "Number of GPU cycles where scalar ALU instructions are processed.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/", "de58f8fc-8ed4-a799-648d-62ded7b1c4c4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(19113);
        internal_counters.push_back(19224);
        internal_counters.push_back(19335);
        internal_counters.push_back(19446);
        internal_counters.push_back(19557);
        internal_counters.push_back(19668);
        internal_counters.push_back(19779);
        internal_counters.push_back(19890);
        internal_counters.push_back(20001);
        internal_counters.push_back(20112);
        internal_counters.push_back(20223);
        internal_counters.push_back(20334);
        internal_counters.push_back(20445);
        internal_counters.push_back(20556);
        internal_counters.push_back(20667);
        internal_counters.push_back(20778);
        internal_counters.push_back(20889);
        internal_counters.push_back(21000);
        internal_counters.push_back(21111);
        internal_counters.push_back(21222);
        internal_counters.push_back(21333);
        internal_counters.push_back(21444);
        internal_counters.push_back(21555);
        internal_counters.push_back(21666);
        internal_counters.push_back(21777);
        internal_counters.push_back(21888);
        internal_counters.push_back(21999);
        internal_counters.push_back(22110);
        internal_counters.push_back(22221);
        internal_counters.push_back(22332);
        internal_counters.push_back(22443);
        internal_counters.push_back(22554);
        internal_counters.push_back(22665);
        internal_counters.push_back(22776);
        internal_counters.push_back(22887);
        internal_counters.push_back(22998);
        internal_counters.push_back(23109);
        internal_counters.push_back(23220);
        internal_counters.push_back(23331);
        internal_counters.push_back(23442);
        internal_counters.push_back(23553);
        internal_counters.push_back(23664);
        internal_counters.push_back(23775);
        internal_counters.push_back(23886);
        internal_counters.push_back(7886);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSMemUnitBusy", "ComputeShader", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44,44,/,(100),*,45,46,47,48,sum4,ifnotzero", "42ab96e1-0a24-96c8-c4ff-098fa267d78e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(19113);
        internal_counters.push_back(19224);
        internal_counters.push_back(19335);
        internal_counters.push_back(19446);
        internal_counters.push_back(19557);
        internal_counters.push_back(19668);
        internal_counters.push_back(19779);
        internal_counters.push_back(19890);
        internal_counters.push_back(20001);
        internal_counters.push_back(20112);
        internal_counters.push_back(20223);
        internal_counters.push_back(20334);
        internal_counters.push_back(20445);
        internal_counters.push_back(20556);
        internal_counters.push_back(20667);
        internal_counters.push_back(20778);
        internal_counters.push_back(20889);
        internal_counters.push_back(21000);
        internal_counters.push_back(21111);
        internal_counters.push_back(21222);
        internal_counters.push_back(21333);
        internal_counters.push_back(21444);
        internal_counters.push_back(21555);
        internal_counters.push_back(21666);
        internal_counters.push_back(21777);
        internal_counters.push_back(21888);
        internal_counters.push_back(21999);
        internal_counters.push_back(22110);
        internal_counters.push_back(22221);
        internal_counters.push_back(22332);
        internal_counters.push_back(22443);
        internal_counters.push_back(22554);
        internal_counters.push_back(22665);
        internal_counters.push_back(22776);
        internal_counters.push_back(22887);
        internal_counters.push_back(22998);
        internal_counters.push_back(23109);
        internal_counters.push_back(23220);
        internal_counters.push_back(23331);
        internal_counters.push_back(23442);
        internal_counters.push_back(23553);
        internal_counters.push_back(23664);
        internal_counters.push_back(23775);
        internal_counters.push_back(23886);

        c.DefineDerivedCounter("CSMemUnitBusyCycles", "ComputeShader", "Number of GPU cycles the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44", "39d5687f-c727-7c0c-af82-bb711d3897ed");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(26156);
        internal_counters.push_back(26310);
        internal_counters.push_back(26464);
        internal_counters.push_back(26618);
        internal_counters.push_back(26772);
        internal_counters.push_back(26926);
        internal_counters.push_back(27080);
        internal_counters.push_back(27234);
        internal_counters.push_back(27388);
        internal_counters.push_back(27542);
        internal_counters.push_back(27696);
        internal_counters.push_back(27850);
        internal_counters.push_back(28004);
        internal_counters.push_back(28158);
        internal_counters.push_back(28312);
        internal_counters.push_back(28466);
        internal_counters.push_back(28620);
        internal_counters.push_back(28774);
        internal_counters.push_back(28928);
        internal_counters.push_back(29082);
        internal_counters.push_back(29236);
        internal_counters.push_back(29390);
        internal_counters.push_back(29544);
        internal_counters.push_back(29698);
        internal_counters.push_back(29852);
        internal_counters.push_back(30006);
        internal_counters.push_back(30160);
        internal_counters.push_back(30314);
        internal_counters.push_back(30468);
        internal_counters.push_back(30622);
        internal_counters.push_back(30776);
        internal_counters.push_back(30930);
        internal_counters.push_back(31084);
        internal_counters.push_back(31238);
        internal_counters.push_back(31392);
        internal_counters.push_back(31546);
        internal_counters.push_back(31700);
        internal_counters.push_back(31854);
        internal_counters.push_back(32008);
        internal_counters.push_back(32162);
        internal_counters.push_back(32316);
        internal_counters.push_back(32470);
        internal_counters.push_back(32624);
        internal_counters.push_back(32778);
        internal_counters.push_back(7886);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSMemUnitStalled", "ComputeShader", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44,44,/,(100),*,45,46,47,48,sum4,ifnotzero", "f18e8679-1511-d533-d9ee-4365197f7d0c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(26156);
        internal_counters.push_back(26310);
        internal_counters.push_back(26464);
        internal_counters.push_back(26618);
        internal_counters.push_back(26772);
        internal_counters.push_back(26926);
        internal_counters.push_back(27080);
        internal_counters.push_back(27234);
        internal_counters.push_back(27388);
        internal_counters.push_back(27542);
        internal_counters.push_back(27696);
        internal_counters.push_back(27850);
        internal_counters.push_back(28004);
        internal_counters.push_back(28158);
        internal_counters.push_back(28312);
        internal_counters.push_back(28466);
        internal_counters.push_back(28620);
        internal_counters.push_back(28774);
        internal_counters.push_back(28928);
        internal_counters.push_back(29082);
        internal_counters.push_back(29236);
        internal_counters.push_back(29390);
        internal_counters.push_back(29544);
        internal_counters.push_back(29698);
        internal_counters.push_back(29852);
        internal_counters.push_back(30006);
        internal_counters.push_back(30160);
        internal_counters.push_back(30314);
        internal_counters.push_back(30468);
        internal_counters.push_back(30622);
        internal_counters.push_back(30776);
        internal_counters.push_back(30930);
        internal_counters.push_back(31084);
        internal_counters.push_back(31238);
        internal_counters.push_back(31392);
        internal_counters.push_back(31546);
        internal_counters.push_back(31700);
        internal_counters.push_back(31854);
        internal_counters.push_back(32008);
        internal_counters.push_back(32162);
        internal_counters.push_back(32316);
        internal_counters.push_back(32470);
        internal_counters.push_back(32624);
        internal_counters.push_back(32778);

        c.DefineDerivedCounter("CSMemUnitStalledCycles", "ComputeShader", "Number of GPU cycles the memory unit is stalled. Try reducing the number or size of fetches and writes if possible.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44", "51991c84-ed2b-bf31-c4ab-8f8e9eb8f29f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(32953);
        internal_counters.push_back(33113);
        internal_counters.push_back(33273);
        internal_counters.push_back(33433);
        internal_counters.push_back(33593);
        internal_counters.push_back(33753);
        internal_counters.push_back(33913);
        internal_counters.push_back(34073);
        internal_counters.push_back(34233);
        internal_counters.push_back(34393);
        internal_counters.push_back(34553);
        internal_counters.push_back(34713);
        internal_counters.push_back(34873);
        internal_counters.push_back(35033);
        internal_counters.push_back(35193);
        internal_counters.push_back(35353);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSFetchSize", "ComputeShader", "The total kilobytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,(1024),/,16,17,18,19,sum4,ifnotzero", "03cdb7e9-2bc3-15c1-811f-2106f3449295");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(32947);
        internal_counters.push_back(33107);
        internal_counters.push_back(33267);
        internal_counters.push_back(33427);
        internal_counters.push_back(33587);
        internal_counters.push_back(33747);
        internal_counters.push_back(33907);
        internal_counters.push_back(34067);
        internal_counters.push_back(34227);
        internal_counters.push_back(34387);
        internal_counters.push_back(34547);
        internal_counters.push_back(34707);
        internal_counters.push_back(34867);
        internal_counters.push_back(35027);
        internal_counters.push_back(35187);
        internal_counters.push_back(35347);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSWriteSize", "ComputeShader", "The total kilobytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,(1024),/,16,17,18,19,sum4,ifnotzero", "3ec1ce55-d621-b7a5-5b8d-2909cf2dbe7d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(32939);
        internal_counters.push_back(33099);
        internal_counters.push_back(33259);
        internal_counters.push_back(33419);
        internal_counters.push_back(33579);
        internal_counters.push_back(33739);
        internal_counters.push_back(33899);
        internal_counters.push_back(34059);
        internal_counters.push_back(34219);
        internal_counters.push_back(34379);
        internal_counters.push_back(34539);
        internal_counters.push_back(34699);
        internal_counters.push_back(34859);
        internal_counters.push_back(35019);
        internal_counters.push_back(35179);
        internal_counters.push_back(35339);
        internal_counters.push_back(32940);
        internal_counters.push_back(33100);
        internal_counters.push_back(33260);
        internal_counters.push_back(33420);
        internal_counters.push_back(33580);
        internal_counters.push_back(33740);
        internal_counters.push_back(33900);
        internal_counters.push_back(34060);
        internal_counters.push_back(34220);
        internal_counters.push_back(34380);
        internal_counters.push_back(34540);
        internal_counters.push_back(34700);
        internal_counters.push_back(34860);
        internal_counters.push_back(35020);
        internal_counters.push_back(35180);
        internal_counters.push_back(35340);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSCacheHit", "ComputeShader", "The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*,32,33,34,35,sum4,ifnotzero", "50fdbc38-d099-5957-5f75-dfe5341b2187");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(32939);
        internal_counters.push_back(33099);
        internal_counters.push_back(33259);
        internal_counters.push_back(33419);
        internal_counters.push_back(33579);
        internal_counters.push_back(33739);
        internal_counters.push_back(33899);
        internal_counters.push_back(34059);
        internal_counters.push_back(34219);
        internal_counters.push_back(34379);
        internal_counters.push_back(34539);
        internal_counters.push_back(34699);
        internal_counters.push_back(34859);
        internal_counters.push_back(35019);
        internal_counters.push_back(35179);
        internal_counters.push_back(35339);

        c.DefineDerivedCounter("CSCacheHitCount", "ComputeShader", "Count of fetch, write, atomic, and other instructions that hit the data cache.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "bee6ef8f-13fc-1b98-7bb9-c28a357dc3be");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(32940);
        internal_counters.push_back(33100);
        internal_counters.push_back(33260);
        internal_counters.push_back(33420);
        internal_counters.push_back(33580);
        internal_counters.push_back(33740);
        internal_counters.push_back(33900);
        internal_counters.push_back(34060);
        internal_counters.push_back(34220);
        internal_counters.push_back(34380);
        internal_counters.push_back(34540);
        internal_counters.push_back(34700);
        internal_counters.push_back(34860);
        internal_counters.push_back(35020);
        internal_counters.push_back(35180);
        internal_counters.push_back(35340);

        c.DefineDerivedCounter("CSCacheMissCount", "ComputeShader", "Count of fetch, write, atomic, and other instructions that miss the data cache.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "c38cd67e-6557-c53b-9fd3-934bf3d7a196");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(32948);
        internal_counters.push_back(33108);
        internal_counters.push_back(33268);
        internal_counters.push_back(33428);
        internal_counters.push_back(33588);
        internal_counters.push_back(33748);
        internal_counters.push_back(33908);
        internal_counters.push_back(34068);
        internal_counters.push_back(34228);
        internal_counters.push_back(34388);
        internal_counters.push_back(34548);
        internal_counters.push_back(34708);
        internal_counters.push_back(34868);
        internal_counters.push_back(35028);
        internal_counters.push_back(35188);
        internal_counters.push_back(35348);
        internal_counters.push_back(7886);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSWriteUnitStalled", "ComputeShader", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*,17,18,19,20,sum4,ifnotzero", "3e0e1bdc-f66c-eddd-af3d-f8e9e8f45fd8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(32948);
        internal_counters.push_back(33108);
        internal_counters.push_back(33268);
        internal_counters.push_back(33428);
        internal_counters.push_back(33588);
        internal_counters.push_back(33748);
        internal_counters.push_back(33908);
        internal_counters.push_back(34068);
        internal_counters.push_back(34228);
        internal_counters.push_back(34388);
        internal_counters.push_back(34548);
        internal_counters.push_back(34708);
        internal_counters.push_back(34868);
        internal_counters.push_back(35028);
        internal_counters.push_back(35188);
        internal_counters.push_back(35348);

        c.DefineDerivedCounter("CSWriteUnitStalledCycles", "ComputeShader", "Number of GPU cycles the write unit is stalled.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "be164c60-5e48-acac-9622-29616d09aa9a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18140);
        internal_counters.push_back(18392);
        internal_counters.push_back(18644);
        internal_counters.push_back(18896);
        internal_counters.push_back(18109);
        internal_counters.push_back(18361);
        internal_counters.push_back(18613);
        internal_counters.push_back(18865);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSGDSInsts", "ComputeShader", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "2a867f3e-4a37-ad16-55d1-f03d74707819");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18139);
        internal_counters.push_back(18391);
        internal_counters.push_back(18643);
        internal_counters.push_back(18895);
        internal_counters.push_back(18137);
        internal_counters.push_back(18389);
        internal_counters.push_back(18641);
        internal_counters.push_back(18893);
        internal_counters.push_back(18109);
        internal_counters.push_back(18361);
        internal_counters.push_back(18613);
        internal_counters.push_back(18865);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSLDSInsts", "ComputeShader", "The average number of LDS read/write instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,-,8,9,10,11,sum4,/,12,13,14,15,sum4,ifnotzero", "61b0b351-7e06-ef8e-a8e0-7a9e3200a836");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18138);
        internal_counters.push_back(18390);
        internal_counters.push_back(18642);
        internal_counters.push_back(18894);
        internal_counters.push_back(18109);
        internal_counters.push_back(18361);
        internal_counters.push_back(18613);
        internal_counters.push_back(18865);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSFlatLDSInsts", "ComputeShader", "The average number of FLAT instructions that read from or write to LDS executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,9,10,11,sum4,ifnotzero", "99672cda-de2b-014c-482e-cf73b90068d5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18166);
        internal_counters.push_back(18418);
        internal_counters.push_back(18670);
        internal_counters.push_back(18922);
        internal_counters.push_back(18109);
        internal_counters.push_back(18361);
        internal_counters.push_back(18613);
        internal_counters.push_back(18865);
        internal_counters.push_back(7886);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSALUStalledByLDS", "ComputeShader", "The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,4,5,6,7,sum4,/,8,/,NUM_SHADER_ENGINES,/,(100),*,9,10,11,12,sum4,ifnotzero", "6dc4f1c2-bad0-c9ff-156e-883b319a752a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18166);
        internal_counters.push_back(18418);
        internal_counters.push_back(18670);
        internal_counters.push_back(18922);

        c.DefineDerivedCounter("CSALUStalledByLDSCycles", "ComputeShader", "Number of GPU cycles the ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,NUM_SHADER_ENGINES,/", "8f3d5f25-2159-0374-fafe-e26a7799b6c8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18202);
        internal_counters.push_back(18454);
        internal_counters.push_back(18706);
        internal_counters.push_back(18958);
        internal_counters.push_back(7886);
        internal_counters.push_back(10364);
        internal_counters.push_back(10550);
        internal_counters.push_back(10736);
        internal_counters.push_back(10922);

        c.DefineDerivedCounter("CSLDSBankConflict", "ComputeShader", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,sum4,4,/,NUM_SIMDS,/,(100),*,5,6,7,8,sum4,ifnotzero", "1065ee10-2e41-ea41-1eb3-b61b491752f4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(18202);
        internal_counters.push_back(18454);
        internal_counters.push_back(18706);
        internal_counters.push_back(18958);

        c.DefineDerivedCounter("CSLDSBankConflictCycles", "ComputeShader", "Number of GPU cycles the LDS is stalled by bank conflicts. Value range: 0 (optimal) to GPUBusyCycles (bad).", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,sum4,NUM_SIMDS,/", "1fd1adf3-c51e-94fd-083e-c482a0a0809e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(19113);
        internal_counters.push_back(19224);
        internal_counters.push_back(19335);
        internal_counters.push_back(19446);
        internal_counters.push_back(19557);
        internal_counters.push_back(19668);
        internal_counters.push_back(19779);
        internal_counters.push_back(19890);
        internal_counters.push_back(20001);
        internal_counters.push_back(20112);
        internal_counters.push_back(20223);
        internal_counters.push_back(20334);
        internal_counters.push_back(20445);
        internal_counters.push_back(20556);
        internal_counters.push_back(20667);
        internal_counters.push_back(20778);
        internal_counters.push_back(20889);
        internal_counters.push_back(21000);
        internal_counters.push_back(21111);
        internal_counters.push_back(21222);
        internal_counters.push_back(21333);
        internal_counters.push_back(21444);
        internal_counters.push_back(21555);
        internal_counters.push_back(21666);
        internal_counters.push_back(21777);
        internal_counters.push_back(21888);
        internal_counters.push_back(21999);
        internal_counters.push_back(22110);
        internal_counters.push_back(22221);
        internal_counters.push_back(22332);
        internal_counters.push_back(22443);
        internal_counters.push_back(22554);
        internal_counters.push_back(22665);
        internal_counters.push_back(22776);
        internal_counters.push_back(22887);
        internal_counters.push_back(22998);
        internal_counters.push_back(23109);
        internal_counters.push_back(23220);
        internal_counters.push_back(23331);
        internal_counters.push_back(23442);
        internal_counters.push_back(23553);
        internal_counters.push_back(23664);
        internal_counters.push_back(23775);
        internal_counters.push_back(23886);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("TexUnitBusy", "Timing", "The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44,44,/,(100),*", "36afb8d9-42fc-aafe-66c5-449542153b2c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(19113);
        internal_counters.push_back(19224);
        internal_counters.push_back(19335);
        internal_counters.push_back(19446);
        internal_counters.push_back(19557);
        internal_counters.push_back(19668);
        internal_counters.push_back(19779);
        internal_counters.push_back(19890);
        internal_counters.push_back(20001);
        internal_counters.push_back(20112);
        internal_counters.push_back(20223);
        internal_counters.push_back(20334);
        internal_counters.push_back(20445);
        internal_counters.push_back(20556);
        internal_counters.push_back(20667);
        internal_counters.push_back(20778);
        internal_counters.push_back(20889);
        internal_counters.push_back(21000);
        internal_counters.push_back(21111);
        internal_counters.push_back(21222);
        internal_counters.push_back(21333);
        internal_counters.push_back(21444);
        internal_counters.push_back(21555);
        internal_counters.push_back(21666);
        internal_counters.push_back(21777);
        internal_counters.push_back(21888);
        internal_counters.push_back(21999);
        internal_counters.push_back(22110);
        internal_counters.push_back(22221);
        internal_counters.push_back(22332);
        internal_counters.push_back(22443);
        internal_counters.push_back(22554);
        internal_counters.push_back(22665);
        internal_counters.push_back(22776);
        internal_counters.push_back(22887);
        internal_counters.push_back(22998);
        internal_counters.push_back(23109);
        internal_counters.push_back(23220);
        internal_counters.push_back(23331);
        internal_counters.push_back(23442);
        internal_counters.push_back(23553);
        internal_counters.push_back(23664);
        internal_counters.push_back(23775);
        internal_counters.push_back(23886);

        c.DefineDerivedCounter("TexUnitBusyCycles", "Timing", "Number of GPU cycles the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,max44", "c68761f2-248c-4f39-6528-c308b1c0807c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(19182);
        internal_counters.push_back(19293);
        internal_counters.push_back(19404);
        internal_counters.push_back(19515);
        internal_counters.push_back(19626);
        internal_counters.push_back(19737);
        internal_counters.push_back(19848);
        internal_counters.push_back(19959);
        internal_counters.push_back(20070);
        internal_counters.push_back(20181);
        internal_counters.push_back(20292);
        internal_counters.push_back(20403);
        internal_counters.push_back(20514);
        internal_counters.push_back(20625);
        internal_counters.push_back(20736);
        internal_counters.push_back(20847);
        internal_counters.push_back(20958);
        internal_counters.push_back(21069);
        internal_counters.push_back(21180);
        internal_counters.push_back(21291);
        internal_counters.push_back(21402);
        internal_counters.push_back(21513);
        internal_counters.push_back(21624);
        internal_counters.push_back(21735);
        internal_counters.push_back(21846);
        internal_counters.push_back(21957);
        internal_counters.push_back(22068);
        internal_counters.push_back(22179);
        internal_counters.push_back(22290);
        internal_counters.push_back(22401);
        internal_counters.push_back(22512);
        internal_counters.push_back(22623);
        internal_counters.push_back(22734);
        internal_counters.push_back(22845);
        internal_counters.push_back(22956);
        internal_counters.push_back(23067);
        internal_counters.push_back(23178);
        internal_counters.push_back(23289);
        internal_counters.push_back(23400);
        internal_counters.push_back(23511);
        internal_counters.push_back(23622);
        internal_counters.push_back(23733);
        internal_counters.push_back(23844);
        internal_counters.push_back(23955);
        internal_counters.push_back(19181);
        internal_counters.push_back(19292);
        internal_counters.push_back(19403);
        internal_counters.push_back(19514);
        internal_counters.push_back(19625);
        internal_counters.push_back(19736);
        internal_counters.push_back(19847);
        internal_counters.push_back(19958);
        internal_counters.push_back(20069);
        internal_counters.push_back(20180);
        internal_counters.push_back(20291);
        internal_counters.push_back(20402);
        internal_counters.push_back(20513);
        internal_counters.push_back(20624);
        internal_counters.push_back(20735);
        internal_counters.push_back(20846);
        internal_counters.push_back(20957);
        internal_counters.push_back(21068);
        internal_counters.push_back(21179);
        internal_counters.push_back(21290);
        internal_counters.push_back(21401);
        internal_counters.push_back(21512);
        internal_counters.push_back(21623);
        internal_counters.push_back(21734);
        internal_counters.push_back(21845);
        internal_counters.push_back(21956);
        internal_counters.push_back(22067);
        internal_counters.push_back(22178);
        internal_counters.push_back(22289);
        internal_counters.push_back(22400);
        internal_counters.push_back(22511);
        internal_counters.push_back(22622);
        internal_counters.push_back(22733);
        internal_counters.push_back(22844);
        internal_counters.push_back(22955);
        internal_counters.push_back(23066);
        internal_counters.push_back(23177);
        internal_counters.push_back(23288);
        internal_counters.push_back(23399);
        internal_counters.push_back(23510);
        internal_counters.push_back(23621);
        internal_counters.push_back(23732);
        internal_counters.push_back(23843);
        internal_counters.push_back(23954);

        c.DefineDerivedCounter("TexTriFilteringPct", "TextureUnit", "Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,sum44,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,+,/,(100),*", "1affc3c8-b917-5c81-622b-7004527208ae");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(19182);
        internal_counters.push_back(19293);
        internal_counters.push_back(19404);
        internal_counters.push_back(19515);
        internal_counters.push_back(19626);
        internal_counters.push_back(19737);
        internal_counters.push_back(19848);
        internal_counters.push_back(19959);
        internal_counters.push_back(20070);
        internal_counters.push_back(20181);
        internal_counters.push_back(20292);
        internal_counters.push_back(20403);
        internal_counters.push_back(20514);
        internal_counters.push_back(20625);
        internal_counters.push_back(20736);
        internal_counters.push_back(20847);
        internal_counters.push_back(20958);
        internal_counters.push_back(21069);
        internal_counters.push_back(21180);
        internal_counters.push_back(21291);
        internal_counters.push_back(21402);
        internal_counters.push_back(21513);
        internal_counters.push_back(21624);
        internal_counters.push_back(21735);
        internal_counters.push_back(21846);
        internal_counters.push_back(21957);
        internal_counters.push_back(22068);
        internal_counters.push_back(22179);
        internal_counters.push_back(22290);
        internal_counters.push_back(22401);
        internal_counters.push_back(22512);
        internal_counters.push_back(22623);
        internal_counters.push_back(22734);
        internal_counters.push_back(22845);
        internal_counters.push_back(22956);
        internal_counters.push_back(23067);
        internal_counters.push_back(23178);
        internal_counters.push_back(23289);
        internal_counters.push_back(23400);
        internal_counters.push_back(23511);
        internal_counters.push_back(23622);
        internal_counters.push_back(23733);
        internal_counters.push_back(23844);
        internal_counters.push_back(23955);

        c.DefineDerivedCounter("TexTriFilteringCount", "TextureUnit", "Count of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44", "5785b3a1-a513-18db-4b1c-bdeef75bb2b6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(19181);
        internal_counters.push_back(19292);
        internal_counters.push_back(19403);
        internal_counters.push_back(19514);
        internal_counters.push_back(19625);
        internal_counters.push_back(19736);
        internal_counters.push_back(19847);
        internal_counters.push_back(19958);
        internal_counters.push_back(20069);
        internal_counters.push_back(20180);
        internal_counters.push_back(20291);
        internal_counters.push_back(20402);
        internal_counters.push_back(20513);
        internal_counters.push_back(20624);
        internal_counters.push_back(20735);
        internal_counters.push_back(20846);
        internal_counters.push_back(20957);
        internal_counters.push_back(21068);
        internal_counters.push_back(21179);
        internal_counters.push_back(21290);
        internal_counters.push_back(21401);
        internal_counters.push_back(21512);
        internal_counters.push_back(21623);
        internal_counters.push_back(21734);
        internal_counters.push_back(21845);
        internal_counters.push_back(21956);
        internal_counters.push_back(22067);
        internal_counters.push_back(22178);
        internal_counters.push_back(22289);
        internal_counters.push_back(22400);
        internal_counters.push_back(22511);
        internal_counters.push_back(22622);
        internal_counters.push_back(22733);
        internal_counters.push_back(22844);
        internal_counters.push_back(22955);
        internal_counters.push_back(23066);
        internal_counters.push_back(23177);
        internal_counters.push_back(23288);
        internal_counters.push_back(23399);
        internal_counters.push_back(23510);
        internal_counters.push_back(23621);
        internal_counters.push_back(23732);
        internal_counters.push_back(23843);
        internal_counters.push_back(23954);

        c.DefineDerivedCounter("NoTexTriFilteringCount", "TextureUnit", "Count of pixels that did not receive trilinear filtering.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44", "179da29a-81af-c06e-ce8c-a0a731ea030d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(19184);
        internal_counters.push_back(19295);
        internal_counters.push_back(19406);
        internal_counters.push_back(19517);
        internal_counters.push_back(19628);
        internal_counters.push_back(19739);
        internal_counters.push_back(19850);
        internal_counters.push_back(19961);
        internal_counters.push_back(20072);
        internal_counters.push_back(20183);
        internal_counters.push_back(20294);
        internal_counters.push_back(20405);
        internal_counters.push_back(20516);
        internal_counters.push_back(20627);
        internal_counters.push_back(20738);
        internal_counters.push_back(20849);
        internal_counters.push_back(20960);
        internal_counters.push_back(21071);
        internal_counters.push_back(21182);
        internal_counters.push_back(21293);
        internal_counters.push_back(21404);
        internal_counters.push_back(21515);
        internal_counters.push_back(21626);
        internal_counters.push_back(21737);
        internal_counters.push_back(21848);
        internal_counters.push_back(21959);
        internal_counters.push_back(22070);
        internal_counters.push_back(22181);
        internal_counters.push_back(22292);
        internal_counters.push_back(22403);
        internal_counters.push_back(22514);
        internal_counters.push_back(22625);
        internal_counters.push_back(22736);
        internal_counters.push_back(22847);
        internal_counters.push_back(22958);
        internal_counters.push_back(23069);
        internal_counters.push_back(23180);
        internal_counters.push_back(23291);
        internal_counters.push_back(23402);
        internal_counters.push_back(23513);
        internal_counters.push_back(23624);
        internal_counters.push_back(23735);
        internal_counters.push_back(23846);
        internal_counters.push_back(23957);
        internal_counters.push_back(19183);
        internal_counters.push_back(19294);
        internal_counters.push_back(19405);
        internal_counters.push_back(19516);
        internal_counters.push_back(19627);
        internal_counters.push_back(19738);
        internal_counters.push_back(19849);
        internal_counters.push_back(19960);
        internal_counters.push_back(20071);
        internal_counters.push_back(20182);
        internal_counters.push_back(20293);
        internal_counters.push_back(20404);
        internal_counters.push_back(20515);
        internal_counters.push_back(20626);
        internal_counters.push_back(20737);
        internal_counters.push_back(20848);
        internal_counters.push_back(20959);
        internal_counters.push_back(21070);
        internal_counters.push_back(21181);
        internal_counters.push_back(21292);
        internal_counters.push_back(21403);
        internal_counters.push_back(21514);
        internal_counters.push_back(21625);
        internal_counters.push_back(21736);
        internal_counters.push_back(21847);
        internal_counters.push_back(21958);
        internal_counters.push_back(22069);
        internal_counters.push_back(22180);
        internal_counters.push_back(22291);
        internal_counters.push_back(22402);
        internal_counters.push_back(22513);
        internal_counters.push_back(22624);
        internal_counters.push_back(22735);
        internal_counters.push_back(22846);
        internal_counters.push_back(22957);
        internal_counters.push_back(23068);
        internal_counters.push_back(23179);
        internal_counters.push_back(23290);
        internal_counters.push_back(23401);
        internal_counters.push_back(23512);
        internal_counters.push_back(23623);
        internal_counters.push_back(23734);
        internal_counters.push_back(23845);
        internal_counters.push_back(23956);

        c.DefineDerivedCounter("TexVolFilteringPct", "TextureUnit", "Percentage of pixels that received volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,sum44,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,+,/,(100),*", "b5ff6bed-3178-aee4-42dd-c74391c02a2d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(19184);
        internal_counters.push_back(19295);
        internal_counters.push_back(19406);
        internal_counters.push_back(19517);
        internal_counters.push_back(19628);
        internal_counters.push_back(19739);
        internal_counters.push_back(19850);
        internal_counters.push_back(19961);
        internal_counters.push_back(20072);
        internal_counters.push_back(20183);
        internal_counters.push_back(20294);
        internal_counters.push_back(20405);
        internal_counters.push_back(20516);
        internal_counters.push_back(20627);
        internal_counters.push_back(20738);
        internal_counters.push_back(20849);
        internal_counters.push_back(20960);
        internal_counters.push_back(21071);
        internal_counters.push_back(21182);
        internal_counters.push_back(21293);
        internal_counters.push_back(21404);
        internal_counters.push_back(21515);
        internal_counters.push_back(21626);
        internal_counters.push_back(21737);
        internal_counters.push_back(21848);
        internal_counters.push_back(21959);
        internal_counters.push_back(22070);
        internal_counters.push_back(22181);
        internal_counters.push_back(22292);
        internal_counters.push_back(22403);
        internal_counters.push_back(22514);
        internal_counters.push_back(22625);
        internal_counters.push_back(22736);
        internal_counters.push_back(22847);
        internal_counters.push_back(22958);
        internal_counters.push_back(23069);
        internal_counters.push_back(23180);
        internal_counters.push_back(23291);
        internal_counters.push_back(23402);
        internal_counters.push_back(23513);
        internal_counters.push_back(23624);
        internal_counters.push_back(23735);
        internal_counters.push_back(23846);
        internal_counters.push_back(23957);

        c.DefineDerivedCounter("TexVolFilteringCount", "TextureUnit", "Count of pixels that received volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44", "4bddc587-d589-8128-e18c-762eab2c871f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(19183);
        internal_counters.push_back(19294);
        internal_counters.push_back(19405);
        internal_counters.push_back(19516);
        internal_counters.push_back(19627);
        internal_counters.push_back(19738);
        internal_counters.push_back(19849);
        internal_counters.push_back(19960);
        internal_counters.push_back(20071);
        internal_counters.push_back(20182);
        internal_counters.push_back(20293);
        internal_counters.push_back(20404);
        internal_counters.push_back(20515);
        internal_counters.push_back(20626);
        internal_counters.push_back(20737);
        internal_counters.push_back(20848);
        internal_counters.push_back(20959);
        internal_counters.push_back(21070);
        internal_counters.push_back(21181);
        internal_counters.push_back(21292);
        internal_counters.push_back(21403);
        internal_counters.push_back(21514);
        internal_counters.push_back(21625);
        internal_counters.push_back(21736);
        internal_counters.push_back(21847);
        internal_counters.push_back(21958);
        internal_counters.push_back(22069);
        internal_counters.push_back(22180);
        internal_counters.push_back(22291);
        internal_counters.push_back(22402);
        internal_counters.push_back(22513);
        internal_counters.push_back(22624);
        internal_counters.push_back(22735);
        internal_counters.push_back(22846);
        internal_counters.push_back(22957);
        internal_counters.push_back(23068);
        internal_counters.push_back(23179);
        internal_counters.push_back(23290);
        internal_counters.push_back(23401);
        internal_counters.push_back(23512);
        internal_counters.push_back(23623);
        internal_counters.push_back(23734);
        internal_counters.push_back(23845);
        internal_counters.push_back(23956);

        c.DefineDerivedCounter("NoTexVolFilteringCount", "TextureUnit", "Count of pixels that did not receive volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44", "9fe1a854-17c6-9d26-b2b9-80610cd5827d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(19202);
        internal_counters.push_back(19313);
        internal_counters.push_back(19424);
        internal_counters.push_back(19535);
        internal_counters.push_back(19646);
        internal_counters.push_back(19757);
        internal_counters.push_back(19868);
        internal_counters.push_back(19979);
        internal_counters.push_back(20090);
        internal_counters.push_back(20201);
        internal_counters.push_back(20312);
        internal_counters.push_back(20423);
        internal_counters.push_back(20534);
        internal_counters.push_back(20645);
        internal_counters.push_back(20756);
        internal_counters.push_back(20867);
        internal_counters.push_back(20978);
        internal_counters.push_back(21089);
        internal_counters.push_back(21200);
        internal_counters.push_back(21311);
        internal_counters.push_back(21422);
        internal_counters.push_back(21533);
        internal_counters.push_back(21644);
        internal_counters.push_back(21755);
        internal_counters.push_back(21866);
        internal_counters.push_back(21977);
        internal_counters.push_back(22088);
        internal_counters.push_back(22199);
        internal_counters.push_back(22310);
        internal_counters.push_back(22421);
        internal_counters.push_back(22532);
        internal_counters.push_back(22643);
        internal_counters.push_back(22754);
        internal_counters.push_back(22865);
        internal_counters.push_back(22976);
        internal_counters.push_back(23087);
        internal_counters.push_back(23198);
        internal_counters.push_back(23309);
        internal_counters.push_back(23420);
        internal_counters.push_back(23531);
        internal_counters.push_back(23642);
        internal_counters.push_back(23753);
        internal_counters.push_back(23864);
        internal_counters.push_back(23975);
        internal_counters.push_back(19203);
        internal_counters.push_back(19314);
        internal_counters.push_back(19425);
        internal_counters.push_back(19536);
        internal_counters.push_back(19647);
        internal_counters.push_back(19758);
        internal_counters.push_back(19869);
        internal_counters.push_back(19980);
        internal_counters.push_back(20091);
        internal_counters.push_back(20202);
        internal_counters.push_back(20313);
        internal_counters.push_back(20424);
        internal_counters.push_back(20535);
        internal_counters.push_back(20646);
        internal_counters.push_back(20757);
        internal_counters.push_back(20868);
        internal_counters.push_back(20979);
        internal_counters.push_back(21090);
        internal_counters.push_back(21201);
        internal_counters.push_back(21312);
        internal_counters.push_back(21423);
        internal_counters.push_back(21534);
        internal_counters.push_back(21645);
        internal_counters.push_back(21756);
        internal_counters.push_back(21867);
        internal_counters.push_back(21978);
        internal_counters.push_back(22089);
        internal_counters.push_back(22200);
        internal_counters.push_back(22311);
        internal_counters.push_back(22422);
        internal_counters.push_back(22533);
        internal_counters.push_back(22644);
        internal_counters.push_back(22755);
        internal_counters.push_back(22866);
        internal_counters.push_back(22977);
        internal_counters.push_back(23088);
        internal_counters.push_back(23199);
        internal_counters.push_back(23310);
        internal_counters.push_back(23421);
        internal_counters.push_back(23532);
        internal_counters.push_back(23643);
        internal_counters.push_back(23754);
        internal_counters.push_back(23865);
        internal_counters.push_back(23976);
        internal_counters.push_back(19204);
        internal_counters.push_back(19315);
        internal_counters.push_back(19426);
        internal_counters.push_back(19537);
        internal_counters.push_back(19648);
        internal_counters.push_back(19759);
        internal_counters.push_back(19870);
        internal_counters.push_back(19981);
        internal_counters.push_back(20092);
        internal_counters.push_back(20203);
        internal_counters.push_back(20314);
        internal_counters.push_back(20425);
        internal_counters.push_back(20536);
        internal_counters.push_back(20647);
        internal_counters.push_back(20758);
        internal_counters.push_back(20869);
        internal_counters.push_back(20980);
        internal_counters.push_back(21091);
        internal_counters.push_back(21202);
        internal_counters.push_back(21313);
        internal_counters.push_back(21424);
        internal_counters.push_back(21535);
        internal_counters.push_back(21646);
        internal_counters.push_back(21757);
        internal_counters.push_back(21868);
        internal_counters.push_back(21979);
        internal_counters.push_back(22090);
        internal_counters.push_back(22201);
        internal_counters.push_back(22312);
        internal_counters.push_back(22423);
        internal_counters.push_back(22534);
        internal_counters.push_back(22645);
        internal_counters.push_back(22756);
        internal_counters.push_back(22867);
        internal_counters.push_back(22978);
        internal_counters.push_back(23089);
        internal_counters.push_back(23200);
        internal_counters.push_back(23311);
        internal_counters.push_back(23422);
        internal_counters.push_back(23533);
        internal_counters.push_back(23644);
        internal_counters.push_back(23755);
        internal_counters.push_back(23866);
        internal_counters.push_back(23977);
        internal_counters.push_back(19205);
        internal_counters.push_back(19316);
        internal_counters.push_back(19427);
        internal_counters.push_back(19538);
        internal_counters.push_back(19649);
        internal_counters.push_back(19760);
        internal_counters.push_back(19871);
        internal_counters.push_back(19982);
        internal_counters.push_back(20093);
        internal_counters.push_back(20204);
        internal_counters.push_back(20315);
        internal_counters.push_back(20426);
        internal_counters.push_back(20537);
        internal_counters.push_back(20648);
        internal_counters.push_back(20759);
        internal_counters.push_back(20870);
        internal_counters.push_back(20981);
        internal_counters.push_back(21092);
        internal_counters.push_back(21203);
        internal_counters.push_back(21314);
        internal_counters.push_back(21425);
        internal_counters.push_back(21536);
        internal_counters.push_back(21647);
        internal_counters.push_back(21758);
        internal_counters.push_back(21869);
        internal_counters.push_back(21980);
        internal_counters.push_back(22091);
        internal_counters.push_back(22202);
        internal_counters.push_back(22313);
        internal_counters.push_back(22424);
        internal_counters.push_back(22535);
        internal_counters.push_back(22646);
        internal_counters.push_back(22757);
        internal_counters.push_back(22868);
        internal_counters.push_back(22979);
        internal_counters.push_back(23090);
        internal_counters.push_back(23201);
        internal_counters.push_back(23312);
        internal_counters.push_back(23423);
        internal_counters.push_back(23534);
        internal_counters.push_back(23645);
        internal_counters.push_back(23756);
        internal_counters.push_back(23867);
        internal_counters.push_back(23978);
        internal_counters.push_back(19206);
        internal_counters.push_back(19317);
        internal_counters.push_back(19428);
        internal_counters.push_back(19539);
        internal_counters.push_back(19650);
        internal_counters.push_back(19761);
        internal_counters.push_back(19872);
        internal_counters.push_back(19983);
        internal_counters.push_back(20094);
        internal_counters.push_back(20205);
        internal_counters.push_back(20316);
        internal_counters.push_back(20427);
        internal_counters.push_back(20538);
        internal_counters.push_back(20649);
        internal_counters.push_back(20760);
        internal_counters.push_back(20871);
        internal_counters.push_back(20982);
        internal_counters.push_back(21093);
        internal_counters.push_back(21204);
        internal_counters.push_back(21315);
        internal_counters.push_back(21426);
        internal_counters.push_back(21537);
        internal_counters.push_back(21648);
        internal_counters.push_back(21759);
        internal_counters.push_back(21870);
        internal_counters.push_back(21981);
        internal_counters.push_back(22092);
        internal_counters.push_back(22203);
        internal_counters.push_back(22314);
        internal_counters.push_back(22425);
        internal_counters.push_back(22536);
        internal_counters.push_back(22647);
        internal_counters.push_back(22758);
        internal_counters.push_back(22869);
        internal_counters.push_back(22980);
        internal_counters.push_back(23091);
        internal_counters.push_back(23202);
        internal_counters.push_back(23313);
        internal_counters.push_back(23424);
        internal_counters.push_back(23535);
        internal_counters.push_back(23646);
        internal_counters.push_back(23757);
        internal_counters.push_back(23868);
        internal_counters.push_back(23979);
        internal_counters.push_back(19207);
        internal_counters.push_back(19318);
        internal_counters.push_back(19429);
        internal_counters.push_back(19540);
        internal_counters.push_back(19651);
        internal_counters.push_back(19762);
        internal_counters.push_back(19873);
        internal_counters.push_back(19984);
        internal_counters.push_back(20095);
        internal_counters.push_back(20206);
        internal_counters.push_back(20317);
        internal_counters.push_back(20428);
        internal_counters.push_back(20539);
        internal_counters.push_back(20650);
        internal_counters.push_back(20761);
        internal_counters.push_back(20872);
        internal_counters.push_back(20983);
        internal_counters.push_back(21094);
        internal_counters.push_back(21205);
        internal_counters.push_back(21316);
        internal_counters.push_back(21427);
        internal_counters.push_back(21538);
        internal_counters.push_back(21649);
        internal_counters.push_back(21760);
        internal_counters.push_back(21871);
        internal_counters.push_back(21982);
        internal_counters.push_back(22093);
        internal_counters.push_back(22204);
        internal_counters.push_back(22315);
        internal_counters.push_back(22426);
        internal_counters.push_back(22537);
        internal_counters.push_back(22648);
        internal_counters.push_back(22759);
        internal_counters.push_back(22870);
        internal_counters.push_back(22981);
        internal_counters.push_back(23092);
        internal_counters.push_back(23203);
        internal_counters.push_back(23314);
        internal_counters.push_back(23425);
        internal_counters.push_back(23536);
        internal_counters.push_back(23647);
        internal_counters.push_back(23758);
        internal_counters.push_back(23869);
        internal_counters.push_back(23980);
        internal_counters.push_back(19208);
        internal_counters.push_back(19319);
        internal_counters.push_back(19430);
        internal_counters.push_back(19541);
        internal_counters.push_back(19652);
        internal_counters.push_back(19763);
        internal_counters.push_back(19874);
        internal_counters.push_back(19985);
        internal_counters.push_back(20096);
        internal_counters.push_back(20207);
        internal_counters.push_back(20318);
        internal_counters.push_back(20429);
        internal_counters.push_back(20540);
        internal_counters.push_back(20651);
        internal_counters.push_back(20762);
        internal_counters.push_back(20873);
        internal_counters.push_back(20984);
        internal_counters.push_back(21095);
        internal_counters.push_back(21206);
        internal_counters.push_back(21317);
        internal_counters.push_back(21428);
        internal_counters.push_back(21539);
        internal_counters.push_back(21650);
        internal_counters.push_back(21761);
        internal_counters.push_back(21872);
        internal_counters.push_back(21983);
        internal_counters.push_back(22094);
        internal_counters.push_back(22205);
        internal_counters.push_back(22316);
        internal_counters.push_back(22427);
        internal_counters.push_back(22538);
        internal_counters.push_back(22649);
        internal_counters.push_back(22760);
        internal_counters.push_back(22871);
        internal_counters.push_back(22982);
        internal_counters.push_back(23093);
        internal_counters.push_back(23204);
        internal_counters.push_back(23315);
        internal_counters.push_back(23426);
        internal_counters.push_back(23537);
        internal_counters.push_back(23648);
        internal_counters.push_back(23759);
        internal_counters.push_back(23870);
        internal_counters.push_back(23981);
        internal_counters.push_back(19209);
        internal_counters.push_back(19320);
        internal_counters.push_back(19431);
        internal_counters.push_back(19542);
        internal_counters.push_back(19653);
        internal_counters.push_back(19764);
        internal_counters.push_back(19875);
        internal_counters.push_back(19986);
        internal_counters.push_back(20097);
        internal_counters.push_back(20208);
        internal_counters.push_back(20319);
        internal_counters.push_back(20430);
        internal_counters.push_back(20541);
        internal_counters.push_back(20652);
        internal_counters.push_back(20763);
        internal_counters.push_back(20874);
        internal_counters.push_back(20985);
        internal_counters.push_back(21096);
        internal_counters.push_back(21207);
        internal_counters.push_back(21318);
        internal_counters.push_back(21429);
        internal_counters.push_back(21540);
        internal_counters.push_back(21651);
        internal_counters.push_back(21762);
        internal_counters.push_back(21873);
        internal_counters.push_back(21984);
        internal_counters.push_back(22095);
        internal_counters.push_back(22206);
        internal_counters.push_back(22317);
        internal_counters.push_back(22428);
        internal_counters.push_back(22539);
        internal_counters.push_back(22650);
        internal_counters.push_back(22761);
        internal_counters.push_back(22872);
        internal_counters.push_back(22983);
        internal_counters.push_back(23094);
        internal_counters.push_back(23205);
        internal_counters.push_back(23316);
        internal_counters.push_back(23427);
        internal_counters.push_back(23538);
        internal_counters.push_back(23649);
        internal_counters.push_back(23760);
        internal_counters.push_back(23871);
        internal_counters.push_back(23982);
        internal_counters.push_back(19210);
        internal_counters.push_back(19321);
        internal_counters.push_back(19432);
        internal_counters.push_back(19543);
        internal_counters.push_back(19654);
        internal_counters.push_back(19765);
        internal_counters.push_back(19876);
        internal_counters.push_back(19987);
        internal_counters.push_back(20098);
        internal_counters.push_back(20209);
        internal_counters.push_back(20320);
        internal_counters.push_back(20431);
        internal_counters.push_back(20542);
        internal_counters.push_back(20653);
        internal_counters.push_back(20764);
        internal_counters.push_back(20875);
        internal_counters.push_back(20986);
        internal_counters.push_back(21097);
        internal_counters.push_back(21208);
        internal_counters.push_back(21319);
        internal_counters.push_back(21430);
        internal_counters.push_back(21541);
        internal_counters.push_back(21652);
        internal_counters.push_back(21763);
        internal_counters.push_back(21874);
        internal_counters.push_back(21985);
        internal_counters.push_back(22096);
        internal_counters.push_back(22207);
        internal_counters.push_back(22318);
        internal_counters.push_back(22429);
        internal_counters.push_back(22540);
        internal_counters.push_back(22651);
        internal_counters.push_back(22762);
        internal_counters.push_back(22873);
        internal_counters.push_back(22984);
        internal_counters.push_back(23095);
        internal_counters.push_back(23206);
        internal_counters.push_back(23317);
        internal_counters.push_back(23428);
        internal_counters.push_back(23539);
        internal_counters.push_back(23650);
        internal_counters.push_back(23761);
        internal_counters.push_back(23872);
        internal_counters.push_back(23983);

        c.DefineDerivedCounter("TexAveAnisotropy", "TextureUnit", "The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,(2),44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,sum44,*,+,(4),88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,sum44,*,+,(6),132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,sum44,*,+,(8),176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,sum44,*,+,(10),220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,sum44,*,+,(12),264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,sum44,*,+,(14),308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,sum44,*,+,(16),352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,384,385,386,387,388,389,390,391,392,393,394,395,sum44,*,+,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,sum44,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,sum44,+,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,sum44,+,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,sum44,+,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,sum44,+,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,256,257,258,259,260,261,262,263,sum44,+,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,304,305,306,307,sum44,+,308,309,310,311,312,313,314,315,316,317,318,319,320,321,322,323,324,325,326,327,328,329,330,331,332,333,334,335,336,337,338,339,340,341,342,343,344,345,346,347,348,349,350,351,sum44,+,352,353,354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,370,371,372,373,374,375,376,377,378,379,380,381,382,383,384,385,386,387,388,389,390,391,392,393,394,395,sum44,+,/", "7ca2a2b9-a4eb-ce23-d163-59147e672396");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3916);
        internal_counters.push_back(4173);
        internal_counters.push_back(4430);
        internal_counters.push_back(4687);
        internal_counters.push_back(4944);
        internal_counters.push_back(5201);
        internal_counters.push_back(5458);
        internal_counters.push_back(5715);
        internal_counters.push_back(5972);
        internal_counters.push_back(6229);
        internal_counters.push_back(6486);
        internal_counters.push_back(6743);
        internal_counters.push_back(7000);
        internal_counters.push_back(7257);
        internal_counters.push_back(7514);
        internal_counters.push_back(7771);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("DepthStencilTestBusy", "Timing", "Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "6834fb52-42e8-bb50-fd48-ec2f2904e7e0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3916);
        internal_counters.push_back(4173);
        internal_counters.push_back(4430);
        internal_counters.push_back(4687);
        internal_counters.push_back(4944);
        internal_counters.push_back(5201);
        internal_counters.push_back(5458);
        internal_counters.push_back(5715);
        internal_counters.push_back(5972);
        internal_counters.push_back(6229);
        internal_counters.push_back(6486);
        internal_counters.push_back(6743);
        internal_counters.push_back(7000);
        internal_counters.push_back(7257);
        internal_counters.push_back(7514);
        internal_counters.push_back(7771);

        c.DefineDerivedCounter("DepthStencilTestBusyCount", "Timing", "Number of GPU cycles spent performing depth and stencil tests.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "e02860fa-c7bd-90ea-2149-69b4e98a636c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3787);
        internal_counters.push_back(4044);
        internal_counters.push_back(4301);
        internal_counters.push_back(4558);
        internal_counters.push_back(4815);
        internal_counters.push_back(5072);
        internal_counters.push_back(5329);
        internal_counters.push_back(5586);
        internal_counters.push_back(5843);
        internal_counters.push_back(6100);
        internal_counters.push_back(6357);
        internal_counters.push_back(6614);
        internal_counters.push_back(6871);
        internal_counters.push_back(7128);
        internal_counters.push_back(7385);
        internal_counters.push_back(7642);
        internal_counters.push_back(3776);
        internal_counters.push_back(4033);
        internal_counters.push_back(4290);
        internal_counters.push_back(4547);
        internal_counters.push_back(4804);
        internal_counters.push_back(5061);
        internal_counters.push_back(5318);
        internal_counters.push_back(5575);
        internal_counters.push_back(5832);
        internal_counters.push_back(6089);
        internal_counters.push_back(6346);
        internal_counters.push_back(6603);
        internal_counters.push_back(6860);
        internal_counters.push_back(7117);
        internal_counters.push_back(7374);
        internal_counters.push_back(7631);

        c.DefineDerivedCounter("HiZTilesAccepted", "DepthAndStencil", "Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,/,(100),*", "56176f45-d7ff-813d-4f05-3b2f046067e7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3787);
        internal_counters.push_back(4044);
        internal_counters.push_back(4301);
        internal_counters.push_back(4558);
        internal_counters.push_back(4815);
        internal_counters.push_back(5072);
        internal_counters.push_back(5329);
        internal_counters.push_back(5586);
        internal_counters.push_back(5843);
        internal_counters.push_back(6100);
        internal_counters.push_back(6357);
        internal_counters.push_back(6614);
        internal_counters.push_back(6871);
        internal_counters.push_back(7128);
        internal_counters.push_back(7385);
        internal_counters.push_back(7642);

        c.DefineDerivedCounter("HiZTilesAcceptedCount", "DepthAndStencil", "Count of tiles accepted by HiZ and will be rendered to the depth or color buffers.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "95d4e3f6-b2f0-f26e-8423-aacdfaf79ea3");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3776);
        internal_counters.push_back(4033);
        internal_counters.push_back(4290);
        internal_counters.push_back(4547);
        internal_counters.push_back(4804);
        internal_counters.push_back(5061);
        internal_counters.push_back(5318);
        internal_counters.push_back(5575);
        internal_counters.push_back(5832);
        internal_counters.push_back(6089);
        internal_counters.push_back(6346);
        internal_counters.push_back(6603);
        internal_counters.push_back(6860);
        internal_counters.push_back(7117);
        internal_counters.push_back(7374);
        internal_counters.push_back(7631);

        c.DefineDerivedCounter("HiZTilesRejectedCount", "DepthAndStencil", "Count of tiles not accepted by HiZ.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "156ba142-7eeb-aa6e-a00a-f8aea4e41e0b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3776);
        internal_counters.push_back(4033);
        internal_counters.push_back(4290);
        internal_counters.push_back(4547);
        internal_counters.push_back(4804);
        internal_counters.push_back(5061);
        internal_counters.push_back(5318);
        internal_counters.push_back(5575);
        internal_counters.push_back(5832);
        internal_counters.push_back(6089);
        internal_counters.push_back(6346);
        internal_counters.push_back(6603);
        internal_counters.push_back(6860);
        internal_counters.push_back(7117);
        internal_counters.push_back(7374);
        internal_counters.push_back(7631);
        internal_counters.push_back(3800);
        internal_counters.push_back(4057);
        internal_counters.push_back(4314);
        internal_counters.push_back(4571);
        internal_counters.push_back(4828);
        internal_counters.push_back(5085);
        internal_counters.push_back(5342);
        internal_counters.push_back(5599);
        internal_counters.push_back(5856);
        internal_counters.push_back(6113);
        internal_counters.push_back(6370);
        internal_counters.push_back(6627);
        internal_counters.push_back(6884);
        internal_counters.push_back(7141);
        internal_counters.push_back(7398);
        internal_counters.push_back(7655);

        c.DefineDerivedCounter("PreZTilesDetailCulled", "DepthAndStencil", "Percentage of tiles rejected because the associated prim had no contributing area.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "cad7f54d-a044-7574-c472-6f2065cbeeac");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3800);
        internal_counters.push_back(4057);
        internal_counters.push_back(4314);
        internal_counters.push_back(4571);
        internal_counters.push_back(4828);
        internal_counters.push_back(5085);
        internal_counters.push_back(5342);
        internal_counters.push_back(5599);
        internal_counters.push_back(5856);
        internal_counters.push_back(6113);
        internal_counters.push_back(6370);
        internal_counters.push_back(6627);
        internal_counters.push_back(6884);
        internal_counters.push_back(7141);
        internal_counters.push_back(7398);
        internal_counters.push_back(7655);

        c.DefineDerivedCounter("PreZTilesDetailCulledCount", "DepthAndStencil", "Count of tiles rejected because the associated primitive had no contributing area.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "49262c8a-b1e6-90dd-f096-0fc4921715e9");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3776);
        internal_counters.push_back(4033);
        internal_counters.push_back(4290);
        internal_counters.push_back(4547);
        internal_counters.push_back(4804);
        internal_counters.push_back(5061);
        internal_counters.push_back(5318);
        internal_counters.push_back(5575);
        internal_counters.push_back(5832);
        internal_counters.push_back(6089);
        internal_counters.push_back(6346);
        internal_counters.push_back(6603);
        internal_counters.push_back(6860);
        internal_counters.push_back(7117);
        internal_counters.push_back(7374);
        internal_counters.push_back(7631);

        c.DefineDerivedCounter("PreZTilesDetailSurvivingCount", "DepthAndStencil", "Count of tiles surviving because the associated primitive had contributing area.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "f803eaa4-bbed-bd39-775f-a64df92e2c08");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8760);
        internal_counters.push_back(9155);
        internal_counters.push_back(9550);
        internal_counters.push_back(9945);
        internal_counters.push_back(8761);
        internal_counters.push_back(9156);
        internal_counters.push_back(9551);
        internal_counters.push_back(9946);
        internal_counters.push_back(8762);
        internal_counters.push_back(9157);
        internal_counters.push_back(9552);
        internal_counters.push_back(9947);
        internal_counters.push_back(8763);
        internal_counters.push_back(9158);
        internal_counters.push_back(9553);
        internal_counters.push_back(9948);
        internal_counters.push_back(8836);
        internal_counters.push_back(9231);
        internal_counters.push_back(9626);
        internal_counters.push_back(10021);
        internal_counters.push_back(8837);
        internal_counters.push_back(9232);
        internal_counters.push_back(9627);
        internal_counters.push_back(10022);
        internal_counters.push_back(8838);
        internal_counters.push_back(9233);
        internal_counters.push_back(9628);
        internal_counters.push_back(10023);
        internal_counters.push_back(8839);
        internal_counters.push_back(9234);
        internal_counters.push_back(9629);
        internal_counters.push_back(10024);

        c.DefineDerivedCounter("HiZQuadsCulled", "DepthAndStencil", "Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "fa0e319b-5573-6d34-5bab-904769925036");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8760);
        internal_counters.push_back(9155);
        internal_counters.push_back(9550);
        internal_counters.push_back(9945);
        internal_counters.push_back(8761);
        internal_counters.push_back(9156);
        internal_counters.push_back(9551);
        internal_counters.push_back(9946);
        internal_counters.push_back(8762);
        internal_counters.push_back(9157);
        internal_counters.push_back(9552);
        internal_counters.push_back(9947);
        internal_counters.push_back(8763);
        internal_counters.push_back(9158);
        internal_counters.push_back(9553);
        internal_counters.push_back(9948);
        internal_counters.push_back(8836);
        internal_counters.push_back(9231);
        internal_counters.push_back(9626);
        internal_counters.push_back(10021);
        internal_counters.push_back(8837);
        internal_counters.push_back(9232);
        internal_counters.push_back(9627);
        internal_counters.push_back(10022);
        internal_counters.push_back(8838);
        internal_counters.push_back(9233);
        internal_counters.push_back(9628);
        internal_counters.push_back(10023);
        internal_counters.push_back(8839);
        internal_counters.push_back(9234);
        internal_counters.push_back(9629);
        internal_counters.push_back(10024);

        c.DefineDerivedCounter("HiZQuadsCulledCount", "DepthAndStencil", "Count of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,-", "73b0b39d-6df2-3e24-0b5c-7cb0ac8b6f39");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8836);
        internal_counters.push_back(9231);
        internal_counters.push_back(9626);
        internal_counters.push_back(10021);
        internal_counters.push_back(8837);
        internal_counters.push_back(9232);
        internal_counters.push_back(9627);
        internal_counters.push_back(10022);
        internal_counters.push_back(8838);
        internal_counters.push_back(9233);
        internal_counters.push_back(9628);
        internal_counters.push_back(10023);
        internal_counters.push_back(8839);
        internal_counters.push_back(9234);
        internal_counters.push_back(9629);
        internal_counters.push_back(10024);

        c.DefineDerivedCounter("HiZQuadsAcceptedCount", "DepthAndStencil", "Count of quads that did continue on in the pipeline after HiZ.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "59049ad9-42b5-c7cb-3616-6a8f6a8e4894");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8760);
        internal_counters.push_back(9155);
        internal_counters.push_back(9550);
        internal_counters.push_back(9945);
        internal_counters.push_back(8761);
        internal_counters.push_back(9156);
        internal_counters.push_back(9551);
        internal_counters.push_back(9946);
        internal_counters.push_back(8762);
        internal_counters.push_back(9157);
        internal_counters.push_back(9552);
        internal_counters.push_back(9947);
        internal_counters.push_back(8763);
        internal_counters.push_back(9158);
        internal_counters.push_back(9553);
        internal_counters.push_back(9948);
        internal_counters.push_back(8860);
        internal_counters.push_back(9255);
        internal_counters.push_back(9650);
        internal_counters.push_back(10045);
        internal_counters.push_back(8836);
        internal_counters.push_back(9231);
        internal_counters.push_back(9626);
        internal_counters.push_back(10021);
        internal_counters.push_back(8837);
        internal_counters.push_back(9232);
        internal_counters.push_back(9627);
        internal_counters.push_back(10022);
        internal_counters.push_back(8838);
        internal_counters.push_back(9233);
        internal_counters.push_back(9628);
        internal_counters.push_back(10023);
        internal_counters.push_back(8839);
        internal_counters.push_back(9234);
        internal_counters.push_back(9629);
        internal_counters.push_back(10024);

        c.DefineDerivedCounter("PreZQuadsCulled", "DepthAndStencil", "Percentage of quads rejected based on the detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,sum16,16,17,18,19,sum4,-,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,/,(100),*", "4e77547b-ec55-5663-f034-af59be66d77d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8760);
        internal_counters.push_back(9155);
        internal_counters.push_back(9550);
        internal_counters.push_back(9945);
        internal_counters.push_back(8761);
        internal_counters.push_back(9156);
        internal_counters.push_back(9551);
        internal_counters.push_back(9946);
        internal_counters.push_back(8762);
        internal_counters.push_back(9157);
        internal_counters.push_back(9552);
        internal_counters.push_back(9947);
        internal_counters.push_back(8763);
        internal_counters.push_back(9158);
        internal_counters.push_back(9553);
        internal_counters.push_back(9948);
        internal_counters.push_back(8860);
        internal_counters.push_back(9255);
        internal_counters.push_back(9650);
        internal_counters.push_back(10045);
        internal_counters.push_back(8836);
        internal_counters.push_back(9231);
        internal_counters.push_back(9626);
        internal_counters.push_back(10021);
        internal_counters.push_back(8837);
        internal_counters.push_back(9232);
        internal_counters.push_back(9627);
        internal_counters.push_back(10022);
        internal_counters.push_back(8838);
        internal_counters.push_back(9233);
        internal_counters.push_back(9628);
        internal_counters.push_back(10023);
        internal_counters.push_back(8839);
        internal_counters.push_back(9234);
        internal_counters.push_back(9629);
        internal_counters.push_back(10024);

        c.DefineDerivedCounter("PreZQuadsCulledCount", "DepthAndStencil", "Count of quads rejected based on the detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,sum4,-,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,sum16,-", "1bf169e6-9304-834e-df5f-0c44d7890a08");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8860);
        internal_counters.push_back(9255);
        internal_counters.push_back(9650);
        internal_counters.push_back(10045);
        internal_counters.push_back(8836);
        internal_counters.push_back(9231);
        internal_counters.push_back(9626);
        internal_counters.push_back(10021);
        internal_counters.push_back(8837);
        internal_counters.push_back(9232);
        internal_counters.push_back(9627);
        internal_counters.push_back(10022);
        internal_counters.push_back(8838);
        internal_counters.push_back(9233);
        internal_counters.push_back(9628);
        internal_counters.push_back(10023);
        internal_counters.push_back(8839);
        internal_counters.push_back(9234);
        internal_counters.push_back(9629);
        internal_counters.push_back(10024);

        c.DefineDerivedCounter("PreZQuadsSurvivingCount", "DepthAndStencil", "Count of quads surviving detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,sum16,0,1,2,3,sum4,-", "50e25e51-3713-89cb-7f92-559cde5e5532");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8860);
        internal_counters.push_back(9255);
        internal_counters.push_back(9650);
        internal_counters.push_back(10045);
        internal_counters.push_back(8760);
        internal_counters.push_back(9155);
        internal_counters.push_back(9550);
        internal_counters.push_back(9945);
        internal_counters.push_back(8761);
        internal_counters.push_back(9156);
        internal_counters.push_back(9551);
        internal_counters.push_back(9946);
        internal_counters.push_back(8762);
        internal_counters.push_back(9157);
        internal_counters.push_back(9552);
        internal_counters.push_back(9947);
        internal_counters.push_back(8763);
        internal_counters.push_back(9158);
        internal_counters.push_back(9553);
        internal_counters.push_back(9948);

        c.DefineDerivedCounter("PostZQuads", "DepthAndStencil", "Percentage of quads for which the pixel shader will run and may be postZ tested.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,sum4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,sum16,/,(100),*", "58f0d34b-eeb8-e8db-abce-cb72584144be");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8860);
        internal_counters.push_back(9255);
        internal_counters.push_back(9650);
        internal_counters.push_back(10045);

        c.DefineDerivedCounter("PostZQuadCount", "DepthAndStencil", "Count of quads for which the pixel shader will run and may be postZ tested.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "08404526-ce35-939b-34c8-a7a35a0ff4d6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3949);
        internal_counters.push_back(4206);
        internal_counters.push_back(4463);
        internal_counters.push_back(4720);
        internal_counters.push_back(4977);
        internal_counters.push_back(5234);
        internal_counters.push_back(5491);
        internal_counters.push_back(5748);
        internal_counters.push_back(6005);
        internal_counters.push_back(6262);
        internal_counters.push_back(6519);
        internal_counters.push_back(6776);
        internal_counters.push_back(7033);
        internal_counters.push_back(7290);
        internal_counters.push_back(7547);
        internal_counters.push_back(7804);

        c.DefineDerivedCounter("PreZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z before shading and passed.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "3bfe6c4d-7422-ca03-7ea5-e67ff1a00136");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3951);
        internal_counters.push_back(4208);
        internal_counters.push_back(4465);
        internal_counters.push_back(4722);
        internal_counters.push_back(4979);
        internal_counters.push_back(5236);
        internal_counters.push_back(5493);
        internal_counters.push_back(5750);
        internal_counters.push_back(6007);
        internal_counters.push_back(6264);
        internal_counters.push_back(6521);
        internal_counters.push_back(6778);
        internal_counters.push_back(7035);
        internal_counters.push_back(7292);
        internal_counters.push_back(7549);
        internal_counters.push_back(7806);

        c.DefineDerivedCounter("PreZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z before shading and failed stencil test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "df7f705e-5162-d3b5-da8b-63466cf9c4e5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3950);
        internal_counters.push_back(4207);
        internal_counters.push_back(4464);
        internal_counters.push_back(4721);
        internal_counters.push_back(4978);
        internal_counters.push_back(5235);
        internal_counters.push_back(5492);
        internal_counters.push_back(5749);
        internal_counters.push_back(6006);
        internal_counters.push_back(6263);
        internal_counters.push_back(6520);
        internal_counters.push_back(6777);
        internal_counters.push_back(7034);
        internal_counters.push_back(7291);
        internal_counters.push_back(7548);
        internal_counters.push_back(7805);

        c.DefineDerivedCounter("PreZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z before shading and failed Z test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "4484e950-f7a4-3800-bc74-78dd297f017e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3946);
        internal_counters.push_back(4203);
        internal_counters.push_back(4460);
        internal_counters.push_back(4717);
        internal_counters.push_back(4974);
        internal_counters.push_back(5231);
        internal_counters.push_back(5488);
        internal_counters.push_back(5745);
        internal_counters.push_back(6002);
        internal_counters.push_back(6259);
        internal_counters.push_back(6516);
        internal_counters.push_back(6773);
        internal_counters.push_back(7030);
        internal_counters.push_back(7287);
        internal_counters.push_back(7544);
        internal_counters.push_back(7801);

        c.DefineDerivedCounter("PostZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z after shading and passed.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "4995d5d6-2330-b986-508b-fae24856f44c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3948);
        internal_counters.push_back(4205);
        internal_counters.push_back(4462);
        internal_counters.push_back(4719);
        internal_counters.push_back(4976);
        internal_counters.push_back(5233);
        internal_counters.push_back(5490);
        internal_counters.push_back(5747);
        internal_counters.push_back(6004);
        internal_counters.push_back(6261);
        internal_counters.push_back(6518);
        internal_counters.push_back(6775);
        internal_counters.push_back(7032);
        internal_counters.push_back(7289);
        internal_counters.push_back(7546);
        internal_counters.push_back(7803);

        c.DefineDerivedCounter("PostZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z after shading and failed stencil test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "ae558af4-f4be-3dd4-7316-b2c4dcf0def8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3947);
        internal_counters.push_back(4204);
        internal_counters.push_back(4461);
        internal_counters.push_back(4718);
        internal_counters.push_back(4975);
        internal_counters.push_back(5232);
        internal_counters.push_back(5489);
        internal_counters.push_back(5746);
        internal_counters.push_back(6003);
        internal_counters.push_back(6260);
        internal_counters.push_back(6517);
        internal_counters.push_back(6774);
        internal_counters.push_back(7031);
        internal_counters.push_back(7288);
        internal_counters.push_back(7545);
        internal_counters.push_back(7802);

        c.DefineDerivedCounter("PostZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z after shading and failed Z test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "b3684c94-814a-c695-c85d-a5b6ab798b35");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3818);
        internal_counters.push_back(4075);
        internal_counters.push_back(4332);
        internal_counters.push_back(4589);
        internal_counters.push_back(4846);
        internal_counters.push_back(5103);
        internal_counters.push_back(5360);
        internal_counters.push_back(5617);
        internal_counters.push_back(5874);
        internal_counters.push_back(6131);
        internal_counters.push_back(6388);
        internal_counters.push_back(6645);
        internal_counters.push_back(6902);
        internal_counters.push_back(7159);
        internal_counters.push_back(7416);
        internal_counters.push_back(7673);
        internal_counters.push_back(7886);

        c.DefineDerivedCounter("ZUnitStalled", "DepthAndStencil", "The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,(100),*", "5e86c3ad-1726-3157-1d01-7ed188bf854d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3818);
        internal_counters.push_back(4075);
        internal_counters.push_back(4332);
        internal_counters.push_back(4589);
        internal_counters.push_back(4846);
        internal_counters.push_back(5103);
        internal_counters.push_back(5360);
        internal_counters.push_back(5617);
        internal_counters.push_back(5874);
        internal_counters.push_back(6131);
        internal_counters.push_back(6388);
        internal_counters.push_back(6645);
        internal_counters.push_back(6902);
        internal_counters.push_back(7159);
        internal_counters.push_back(7416);
        internal_counters.push_back(7673);

        c.DefineDerivedCounter("ZUnitStalledCycles", "DepthAndStencil", "Number of GPU cycles the depth buffer spends waiting for the color buffer to be ready to accept data. Larger numbers indicate a bottleneck in color buffer operations.", kGpaDataTypeFloat64, kGpaUsageTypeCycles, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16", "4351fa7f-6737-2c3e-3ffb-b3addbdceedd");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3820);
        internal_counters.push_back(4077);
        internal_counters.push_back(4334);
        internal_counters.push_back(4591);
        internal_counters.push_back(4848);
        internal_counters.push_back(5105);
        internal_counters.push_back(5362);
        internal_counters.push_back(5619);
        internal_counters.push_back(5876);
        internal_counters.push_back(6133);
        internal_counters.push_back(6390);
        internal_counters.push_back(6647);
        internal_counters.push_back(6904);
        internal_counters.push_back(7161);
        internal_counters.push_back(7418);
        internal_counters.push_back(7675);
        internal_counters.push_back(3827);
        internal_counters.push_back(4084);
        internal_counters.push_back(4341);
        internal_counters.push_back(4598);
        internal_counters.push_back(4855);
        internal_counters.push_back(5112);
        internal_counters.push_back(5369);
        internal_counters.push_back(5626);
        internal_counters.push_back(5883);
        internal_counters.push_back(6140);
        internal_counters.push_back(6397);
        internal_counters.push_back(6654);
        internal_counters.push_back(6911);
        internal_counters.push_back(7168);
        internal_counters.push_back(7425);
        internal_counters.push_back(7682);

        c.DefineDerivedCounter("DBMemRead", "DepthAndStencil", "Number of bytes read from the depth buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(256),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+", "dcdb4ee7-bd50-00f7-c028-9e5f4ce888c0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3832);
        internal_counters.push_back(4089);
        internal_counters.push_back(4346);
        internal_counters.push_back(4603);
        internal_counters.push_back(4860);
        internal_counters.push_back(5117);
        internal_counters.push_back(5374);
        internal_counters.push_back(5631);
        internal_counters.push_back(5888);
        internal_counters.push_back(6145);
        internal_counters.push_back(6402);
        internal_counters.push_back(6659);
        internal_counters.push_back(6916);
        internal_counters.push_back(7173);
        internal_counters.push_back(7430);
        internal_counters.push_back(7687);
        internal_counters.push_back(3835);
        internal_counters.push_back(4092);
        internal_counters.push_back(4349);
        internal_counters.push_back(4606);
        internal_counters.push_back(4863);
        internal_counters.push_back(5120);
        internal_counters.push_back(5377);
        internal_counters.push_back(5634);
        internal_counters.push_back(5891);
        internal_counters.push_back(6148);
        internal_counters.push_back(6405);
        internal_counters.push_back(6662);
        internal_counters.push_back(6919);
        internal_counters.push_back(7176);
        internal_counters.push_back(7433);
        internal_counters.push_back(7690);

        c.DefineDerivedCounter("DBMemWritten", "DepthAndStencil", "Number of bytes written to the depth buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,(32),*,+", "de5717f8-8a49-ee44-4645-10de51b37dcf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(283);
        internal_counters.push_back(509);
        internal_counters.push_back(735);
        internal_counters.push_back(961);
        internal_counters.push_back(1187);
        internal_counters.push_back(1413);
        internal_counters.push_back(1639);
        internal_counters.push_back(1865);
        internal_counters.push_back(2091);
        internal_counters.push_back(2317);
        internal_counters.push_back(2543);
        internal_counters.push_back(2769);
        internal_counters.push_back(2995);
        internal_counters.push_back(3221);
        internal_counters.push_back(3447);
        internal_counters.push_back(3673);

        c.DefineDerivedCounter("CBMemRead", "ColorBuffer", "Number of bytes read from the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "84b531d8-a1f8-7f49-7c27-7bc97801f1e6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(273);
        internal_counters.push_back(499);
        internal_counters.push_back(725);
        internal_counters.push_back(951);
        internal_counters.push_back(1177);
        internal_counters.push_back(1403);
        internal_counters.push_back(1629);
        internal_counters.push_back(1855);
        internal_counters.push_back(2081);
        internal_counters.push_back(2307);
        internal_counters.push_back(2533);
        internal_counters.push_back(2759);
        internal_counters.push_back(2985);
        internal_counters.push_back(3211);
        internal_counters.push_back(3437);
        internal_counters.push_back(3663);

        c.DefineDerivedCounter("CBMemWritten", "ColorBuffer", "Number of bytes written to the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,(32),*", "550f8ff8-60b6-a6bf-87d0-25ac9e87de70");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(317);
        internal_counters.push_back(543);
        internal_counters.push_back(769);
        internal_counters.push_back(995);
        internal_counters.push_back(1221);
        internal_counters.push_back(1447);
        internal_counters.push_back(1673);
        internal_counters.push_back(1899);
        internal_counters.push_back(2125);
        internal_counters.push_back(2351);
        internal_counters.push_back(2577);
        internal_counters.push_back(2803);
        internal_counters.push_back(3029);
        internal_counters.push_back(3255);
        internal_counters.push_back(3481);
        internal_counters.push_back(3707);
        internal_counters.push_back(163);
        internal_counters.push_back(389);
        internal_counters.push_back(615);
        internal_counters.push_back(841);
        internal_counters.push_back(1067);
        internal_counters.push_back(1293);
        internal_counters.push_back(1519);
        internal_counters.push_back(1745);
        internal_counters.push_back(1971);
        internal_counters.push_back(2197);
        internal_counters.push_back(2423);
        internal_counters.push_back(2649);
        internal_counters.push_back(2875);
        internal_counters.push_back(3101);
        internal_counters.push_back(3327);
        internal_counters.push_back(3553);

        c.DefineDerivedCounter("CBSlowPixelPct", "ColorBuffer", "Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,/,(100),*,(100),min", "5775943f-0313-7e52-9638-b24a449197bc");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(317);
        internal_counters.push_back(543);
        internal_counters.push_back(769);
        internal_counters.push_back(995);
        internal_counters.push_back(1221);
        internal_counters.push_back(1447);
        internal_counters.push_back(1673);
        internal_counters.push_back(1899);
        internal_counters.push_back(2125);
        internal_counters.push_back(2351);
        internal_counters.push_back(2577);
        internal_counters.push_back(2803);
        internal_counters.push_back(3029);
        internal_counters.push_back(3255);
        internal_counters.push_back(3481);
        internal_counters.push_back(3707);

        c.DefineDerivedCounter("CBSlowPixelCount", "ColorBuffer", "Number of pixels written to the color buffer using a half-rate or quarter-rate format.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16", "47eacbb0-28c8-22b4-5c69-c00d5813bb1c");
    }
}

