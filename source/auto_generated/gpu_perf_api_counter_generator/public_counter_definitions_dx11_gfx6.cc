//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Public Counter Definitions for DX11 GFX6.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/public_counter_definitions_dx11_gfx6.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicDerivedCountersDx11Gfx6(GpaDerivedCounters& c)
{
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16886);

        c.DefineDerivedCounter("GPUTime", "Timing", "Time this API call took to execute on the GPU in nanoseconds. Does not include time that draw calls are processed in parallel.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "0,TS_FREQ,/,(1000000000),*", "cc28af53-f7f8-c96a-9f04-766f6aafe4ce");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(3892);
        internal_counters.push_back(3890);

        c.DefineDerivedCounter("GPUBusy", "Timing", "The percentage of time GPU was busy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,/,(100),*,(100),min", "bef38bf3-1167-0844-81f0-67d2d28ddbc5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16466);
        internal_counters.push_back(16606);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("TessellatorBusy", "Timing", "The percentage of time the tessellation engine is busy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,/,(100),*", "36af6c72-dcfb-8102-4fd4-ce8ddc573365");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4993);
        internal_counters.push_back(5182);
        internal_counters.push_back(5011);
        internal_counters.push_back(5200);
        internal_counters.push_back(5029);
        internal_counters.push_back(5218);
        internal_counters.push_back(5059);
        internal_counters.push_back(5248);
        internal_counters.push_back(5002);
        internal_counters.push_back(5191);
        internal_counters.push_back(5017);
        internal_counters.push_back(5206);
        internal_counters.push_back(5035);
        internal_counters.push_back(5224);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("VSBusy", "Timing", "The percentage of time the ShaderUnit has vertex shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,8,ifnotzero,2,10,ifnotzero,4,12,ifnotzero,(0),1,9,ifnotzero,3,11,ifnotzero,5,13,ifnotzero,max,14,/,(100),*,(100),min", "94caad5e-867c-6c09-cf3a-d05b51df8f3b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16886);
        internal_counters.push_back(4993);
        internal_counters.push_back(5182);
        internal_counters.push_back(5011);
        internal_counters.push_back(5200);
        internal_counters.push_back(5029);
        internal_counters.push_back(5218);
        internal_counters.push_back(5059);
        internal_counters.push_back(5248);
        internal_counters.push_back(5002);
        internal_counters.push_back(5191);
        internal_counters.push_back(5017);
        internal_counters.push_back(5206);
        internal_counters.push_back(5035);
        internal_counters.push_back(5224);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("VSTime", "Timing", "Time vertex shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,9,ifnotzero,3,11,ifnotzero,5,13,ifnotzero,(0),2,10,ifnotzero,4,12,ifnotzero,6,14,ifnotzero,max,15,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "d6ce819e-69af-a241-d07a-5dd8d146e436");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5020);
        internal_counters.push_back(5209);
        internal_counters.push_back(5026);
        internal_counters.push_back(5215);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("HSBusy", "Timing", "The percentage of time the ShaderUnit has hull shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,2,ifnotzero,(0),1,3,ifnotzero,max,4,/,(100),*,(100),min", "16f30a0b-4cbf-eccd-b13f-ab68dd254d32");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16886);
        internal_counters.push_back(5020);
        internal_counters.push_back(5209);
        internal_counters.push_back(5026);
        internal_counters.push_back(5215);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("HSTime", "Timing", "Time hull shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,3,ifnotzero,(0),2,4,ifnotzero,max,5,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "8386a863-dd34-1526-f703-0f0c7b241bc4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4993);
        internal_counters.push_back(5182);
        internal_counters.push_back(5011);
        internal_counters.push_back(5200);
        internal_counters.push_back(5059);
        internal_counters.push_back(5248);
        internal_counters.push_back(5017);
        internal_counters.push_back(5206);
        internal_counters.push_back(5035);
        internal_counters.push_back(5224);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("DSBusy", "Timing", "The percentage of time the ShaderUnit has domain shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,2,6,ifnotzero,8,ifnotzero,(0),1,3,7,ifnotzero,9,ifnotzero,max,10,/,(100),*,(100),min", "0c626e8a-9b82-b6d4-d9a3-578509316301");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16886);
        internal_counters.push_back(4993);
        internal_counters.push_back(5182);
        internal_counters.push_back(5011);
        internal_counters.push_back(5200);
        internal_counters.push_back(5059);
        internal_counters.push_back(5248);
        internal_counters.push_back(5017);
        internal_counters.push_back(5206);
        internal_counters.push_back(5035);
        internal_counters.push_back(5224);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("DSTime", "Timing", "Time domain shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,3,7,ifnotzero,9,ifnotzero,(0),2,4,8,ifnotzero,10,ifnotzero,max,11,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "bfe28947-c727-8a9f-aa59-c218e58bfba5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5005);
        internal_counters.push_back(5194);
        internal_counters.push_back(5008);
        internal_counters.push_back(5197);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("GSBusy", "Timing", "The percentage of time the ShaderUnit has geometry shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,2,ifnotzero,(0),1,3,ifnotzero,max,4,/,(100),*,(100),min", "876f36d8-d046-833f-7832-673cbffd0a45");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16886);
        internal_counters.push_back(5005);
        internal_counters.push_back(5194);
        internal_counters.push_back(5008);
        internal_counters.push_back(5197);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("GSTime", "Timing", "Time geometry shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,3,ifnotzero,(0),2,4,ifnotzero,max,5,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "c73e715f-59af-76e8-9e22-097b94c066c4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5059);
        internal_counters.push_back(5248);
        internal_counters.push_back(5066);
        internal_counters.push_back(5255);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("PSBusy", "Timing", "The percentage of time the ShaderUnit has pixel shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,2,ifnotzero,(0),1,3,ifnotzero,max,4,/,(100),*", "7e772beb-d82c-bd9a-aed0-fe504d416ce5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16886);
        internal_counters.push_back(5059);
        internal_counters.push_back(5248);
        internal_counters.push_back(5066);
        internal_counters.push_back(5255);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("PSTime", "Timing", "Time pixel shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,3,ifnotzero,(0),2,4,ifnotzero,max,5,/,0,TS_FREQ,/,(1000000000),*,*", "edca7694-7416-e8a6-0c5a-63a5ad5f3d74");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5038);
        internal_counters.push_back(5227);
        internal_counters.push_back(5043);
        internal_counters.push_back(5232);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("CSBusy", "Timing", "The percentage of time the ShaderUnit has compute shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,2,ifnotzero,(0),1,3,ifnotzero,max,4,/,(100),*,(100),min", "493fdd90-8d2b-a055-5e4e-2d29c3396b8c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16886);
        internal_counters.push_back(5038);
        internal_counters.push_back(5227);
        internal_counters.push_back(5043);
        internal_counters.push_back(5232);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("CSTime", "Timing", "Time compute shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,3,ifnotzero,(0),2,4,ifnotzero,max,5,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "dbc24916-ecb2-7eef-8d63-7afadaaab6bc");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16361);
        internal_counters.push_back(16501);
        internal_counters.push_back(16342);
        internal_counters.push_back(16482);
        internal_counters.push_back(16437);
        internal_counters.push_back(16577);

        c.DefineDerivedCounter("VSVerticesIn", "VertexShader", "The number of vertices processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+,2,3,+,2,3,+,ifnotzero,4,5,+,4,5,+,ifnotzero", "810a04c8-2ff4-081d-766d-bfa2bd4ad916");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16446);
        internal_counters.push_back(16586);

        c.DefineDerivedCounter("HSPatches", "HullShader", "The number of patches processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+", "d1bbd27d-d591-4509-df52-d329fb73a98f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16361);
        internal_counters.push_back(16501);
        internal_counters.push_back(16342);
        internal_counters.push_back(16482);
        internal_counters.push_back(16437);
        internal_counters.push_back(16577);

        c.DefineDerivedCounter("DSVerticesIn", "DomainShader", "The number of vertices processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,+,2,3,+,2,3,+,ifnotzero,4,5,+,ifnotzero", "b88d9d05-2418-e639-4e3d-3a5815855f8d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16350);
        internal_counters.push_back(16490);

        c.DefineDerivedCounter("GSPrimsIn", "GeometryShader", "The number of primitives passed into the GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+", "20c29866-509a-aaab-2697-6b2c38f79953");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(16361);
        internal_counters.push_back(16501);
        internal_counters.push_back(16342);
        internal_counters.push_back(16482);

        c.DefineDerivedCounter("GSVerticesOut", "GeometryShader", "The number of vertices output by the GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,+,2,3,+,ifnotzero", "775b9736-319a-bd8a-48c9-68db9c91d978");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4113);
        internal_counters.push_back(4249);
        internal_counters.push_back(4117);
        internal_counters.push_back(4253);
        internal_counters.push_back(4069);
        internal_counters.push_back(4205);
        internal_counters.push_back(4081);
        internal_counters.push_back(4217);
        internal_counters.push_back(4070);
        internal_counters.push_back(4206);
        internal_counters.push_back(4082);
        internal_counters.push_back(4218);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("PrimitiveAssemblyBusy", "Timing", "The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,2,-,4,6,+,8,+,10,(2),*,+,SU_CLOCKS_PRIM,*,-,1,3,-,5,7,+,9,+,11,(2),*,+,SU_CLOCKS_PRIM,*,-,max,(0),max,12,/,(100),*,(100),min", "54ac5640-c4d7-95e2-20e0-6a9fdfc07333");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4016);
        internal_counters.push_back(4152);

        c.DefineDerivedCounter("PrimitivesIn", "PrimitiveAssembly", "The number of primitives received by the hardware. This includes primitives generated by tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+", "a515b80d-75c3-c7d2-0d2f-d7766b4759a6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4022);
        internal_counters.push_back(4158);
        internal_counters.push_back(4062);
        internal_counters.push_back(4198);
        internal_counters.push_back(4063);
        internal_counters.push_back(4199);
        internal_counters.push_back(4064);
        internal_counters.push_back(4200);
        internal_counters.push_back(4065);
        internal_counters.push_back(4201);

        c.DefineDerivedCounter("CulledPrims", "PrimitiveAssembly", "The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+,2,+,3,+,4,+,5,+,6,+,7,+,8,+,9,+", "589bdf55-9192-280a-41c3-584bc94f2562");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4029);
        internal_counters.push_back(4165);

        c.DefineDerivedCounter("ClippedPrims", "PrimitiveAssembly", "The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+", "5ef6f9d5-155e-5baa-163f-8359d9ea9bbf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4117);
        internal_counters.push_back(4253);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("PAStalledOnRasterizer", "PrimitiveAssembly", "Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,/,(100),*", "6f9f416b-53c1-0457-f88c-7b6ba8973974");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4876);
        internal_counters.push_back(4908);
        internal_counters.push_back(4940);
        internal_counters.push_back(4972);
        internal_counters.push_back(4881);
        internal_counters.push_back(4913);
        internal_counters.push_back(4945);
        internal_counters.push_back(4977);
        internal_counters.push_back(4886);
        internal_counters.push_back(4918);
        internal_counters.push_back(4950);
        internal_counters.push_back(4982);
        internal_counters.push_back(4891);
        internal_counters.push_back(4923);
        internal_counters.push_back(4955);
        internal_counters.push_back(4987);

        c.DefineDerivedCounter("PSPixelsOut", "PixelShader", "Pixels exported from shader to color buffers. Does not include killed or alpha tested pixels; if there are multiple render targets, each render target receives one export, so this will be 2 for 1 pixel written to two RTs.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4,4,5,6,7,sum4,8,9,10,11,sum4,12,13,14,15,sum4,sum4", "24cba16c-baa6-6ecd-95ad-92ecb1338da1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4878);
        internal_counters.push_back(4910);
        internal_counters.push_back(4942);
        internal_counters.push_back(4974);
        internal_counters.push_back(4883);
        internal_counters.push_back(4915);
        internal_counters.push_back(4947);
        internal_counters.push_back(4979);
        internal_counters.push_back(4888);
        internal_counters.push_back(4920);
        internal_counters.push_back(4952);
        internal_counters.push_back(4984);
        internal_counters.push_back(4893);
        internal_counters.push_back(4925);
        internal_counters.push_back(4957);
        internal_counters.push_back(4989);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("PSExportStalls", "PixelShader", "Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max,16,/,(100),*", "9b4f466c-ff97-22bb-557d-84d3c4c51895");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSThreadGroups", "ComputeShader", "Total number of thread groups.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+", "8ce3fc80-56b2-97f9-8e70-2e8c747cea68");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5043);
        internal_counters.push_back(5232);

        c.DefineDerivedCounter("CSWavefronts", "ComputeShader", "The total number of wavefronts used for the CS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+", "42379c6e-369b-c237-8b25-cdb9cdc65c4d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);
        internal_counters.push_back(5379);
        internal_counters.push_back(5778);

        c.DefineDerivedCounter("CSThreads", "ComputeShader", "The number of CS threads processed by the hardware.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),2,3,+,0,1,+,ifnotzero", "7a648013-6eac-2665-ac36-13c6f4ac9c26");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5384);
        internal_counters.push_back(5783);
        internal_counters.push_back(5374);
        internal_counters.push_back(5773);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSVALUInsts", "ComputeShader", "The average number of vector ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,+,2,3,+,/,4,5,+,ifnotzero", "376cb1cc-5a40-9d1d-404c-f1736c0c5084");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5428);
        internal_counters.push_back(5827);
        internal_counters.push_back(5420);
        internal_counters.push_back(5819);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSVALUUtilization", "ComputeShader", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,+,2,3,+,(64),*,/,(100),*,4,5,+,ifnotzero,(100),min", "4476879e-cdc0-d602-b24e-9b4a8d38438f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5388);
        internal_counters.push_back(5787);
        internal_counters.push_back(5374);
        internal_counters.push_back(5773);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSSALUInsts", "ComputeShader", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,+,2,3,+,/,4,5,+,ifnotzero", "eb211144-8136-ff86-e8bf-4d0493a904cb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5386);
        internal_counters.push_back(5785);
        internal_counters.push_back(5374);
        internal_counters.push_back(5773);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSVFetchInsts", "ComputeShader", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,+,2,3,+,/,4,5,+,ifnotzero", "3e2829c0-6215-783b-c271-6d57ff2c520e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5389);
        internal_counters.push_back(5788);
        internal_counters.push_back(5374);
        internal_counters.push_back(5773);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSSFetchInsts", "ComputeShader", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,+,2,3,+,/,4,5,+,ifnotzero", "da09171c-6a0a-584f-fddc-dc5062d63a3e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5385);
        internal_counters.push_back(5784);
        internal_counters.push_back(5374);
        internal_counters.push_back(5773);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSVWriteInsts", "ComputeShader", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,+,2,3,+,/,4,5,+,ifnotzero", "43438c22-e910-b377-b767-b32902e0df0d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5420);
        internal_counters.push_back(5819);
        internal_counters.push_back(3892);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSVALUBusy", "ComputeShader", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,+,(4),*,NUM_SIMDS,/,2,/,(100),*,3,4,+,ifnotzero", "f1e64815-f6a8-c277-d4f9-d054b443e205");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5425);
        internal_counters.push_back(5824);
        internal_counters.push_back(3892);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSSALUBusy", "ComputeShader", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,+,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,2,/,(100),*,3,4,+,ifnotzero", "3fc35f4e-9882-94e3-6f5f-4e81cd97082a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6168);
        internal_counters.push_back(6274);
        internal_counters.push_back(6380);
        internal_counters.push_back(6486);
        internal_counters.push_back(6592);
        internal_counters.push_back(6698);
        internal_counters.push_back(6804);
        internal_counters.push_back(6910);
        internal_counters.push_back(7016);
        internal_counters.push_back(7122);
        internal_counters.push_back(7228);
        internal_counters.push_back(7334);
        internal_counters.push_back(7440);
        internal_counters.push_back(7546);
        internal_counters.push_back(7652);
        internal_counters.push_back(7758);
        internal_counters.push_back(7864);
        internal_counters.push_back(7970);
        internal_counters.push_back(8076);
        internal_counters.push_back(8182);
        internal_counters.push_back(8288);
        internal_counters.push_back(8394);
        internal_counters.push_back(8500);
        internal_counters.push_back(8606);
        internal_counters.push_back(8712);
        internal_counters.push_back(8818);
        internal_counters.push_back(8924);
        internal_counters.push_back(9030);
        internal_counters.push_back(9136);
        internal_counters.push_back(9242);
        internal_counters.push_back(9348);
        internal_counters.push_back(9454);
        internal_counters.push_back(3892);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSMemUnitBusy", "ComputeShader", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,max32,32,/,(100),*,33,34,+,ifnotzero", "42ab96e1-0a24-96c8-c4ff-098fa267d78e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(11131);
        internal_counters.push_back(11241);
        internal_counters.push_back(11351);
        internal_counters.push_back(11461);
        internal_counters.push_back(11571);
        internal_counters.push_back(11681);
        internal_counters.push_back(11791);
        internal_counters.push_back(11901);
        internal_counters.push_back(12011);
        internal_counters.push_back(12121);
        internal_counters.push_back(12231);
        internal_counters.push_back(12341);
        internal_counters.push_back(12451);
        internal_counters.push_back(12561);
        internal_counters.push_back(12671);
        internal_counters.push_back(12781);
        internal_counters.push_back(12891);
        internal_counters.push_back(13001);
        internal_counters.push_back(13111);
        internal_counters.push_back(13221);
        internal_counters.push_back(13331);
        internal_counters.push_back(13441);
        internal_counters.push_back(13551);
        internal_counters.push_back(13661);
        internal_counters.push_back(13771);
        internal_counters.push_back(13881);
        internal_counters.push_back(13991);
        internal_counters.push_back(14101);
        internal_counters.push_back(14211);
        internal_counters.push_back(14321);
        internal_counters.push_back(14431);
        internal_counters.push_back(14541);
        internal_counters.push_back(3892);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSMemUnitStalled", "ComputeShader", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,max32,32,/,(100),*,33,34,+,ifnotzero", "f18e8679-1511-d533-d9ee-4365197f7d0c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14672);
        internal_counters.push_back(14800);
        internal_counters.push_back(14928);
        internal_counters.push_back(15056);
        internal_counters.push_back(15184);
        internal_counters.push_back(15312);
        internal_counters.push_back(15440);
        internal_counters.push_back(15568);
        internal_counters.push_back(15696);
        internal_counters.push_back(15824);
        internal_counters.push_back(15952);
        internal_counters.push_back(16080);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSFetchSize", "ComputeShader", "The total kilobytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,sum12,(32),*,(1024),/,12,13,+,ifnotzero", "03cdb7e9-2bc3-15c1-811f-2106f3449295");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14666);
        internal_counters.push_back(14794);
        internal_counters.push_back(14922);
        internal_counters.push_back(15050);
        internal_counters.push_back(15178);
        internal_counters.push_back(15306);
        internal_counters.push_back(15434);
        internal_counters.push_back(15562);
        internal_counters.push_back(15690);
        internal_counters.push_back(15818);
        internal_counters.push_back(15946);
        internal_counters.push_back(16074);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSWriteSize", "ComputeShader", "The total kilobytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,sum12,(32),*,(1024),/,12,13,+,ifnotzero", "3ec1ce55-d621-b7a5-5b8d-2909cf2dbe7d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14658);
        internal_counters.push_back(14786);
        internal_counters.push_back(14914);
        internal_counters.push_back(15042);
        internal_counters.push_back(15170);
        internal_counters.push_back(15298);
        internal_counters.push_back(15426);
        internal_counters.push_back(15554);
        internal_counters.push_back(15682);
        internal_counters.push_back(15810);
        internal_counters.push_back(15938);
        internal_counters.push_back(16066);
        internal_counters.push_back(14659);
        internal_counters.push_back(14787);
        internal_counters.push_back(14915);
        internal_counters.push_back(15043);
        internal_counters.push_back(15171);
        internal_counters.push_back(15299);
        internal_counters.push_back(15427);
        internal_counters.push_back(15555);
        internal_counters.push_back(15683);
        internal_counters.push_back(15811);
        internal_counters.push_back(15939);
        internal_counters.push_back(16067);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSCacheHit", "ComputeShader", "The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,sum12,0,1,2,3,4,5,6,7,8,9,10,11,sum12,12,13,14,15,16,17,18,19,20,21,22,23,sum12,+,/,(100),*,24,25,+,ifnotzero", "50fdbc38-d099-5957-5f75-dfe5341b2187");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(14667);
        internal_counters.push_back(14795);
        internal_counters.push_back(14923);
        internal_counters.push_back(15051);
        internal_counters.push_back(15179);
        internal_counters.push_back(15307);
        internal_counters.push_back(15435);
        internal_counters.push_back(15563);
        internal_counters.push_back(15691);
        internal_counters.push_back(15819);
        internal_counters.push_back(15947);
        internal_counters.push_back(16075);
        internal_counters.push_back(3892);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSWriteUnitStalled", "ComputeShader", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,/,(100),*,13,14,+,ifnotzero", "3e0e1bdc-f66c-eddd-af3d-f8e9e8f45fd8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5391);
        internal_counters.push_back(5790);
        internal_counters.push_back(5374);
        internal_counters.push_back(5773);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSGDSInsts", "ComputeShader", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,+,2,3,+,/,4,5,+,ifnotzero", "2a867f3e-4a37-ad16-55d1-f03d74707819");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5390);
        internal_counters.push_back(5789);
        internal_counters.push_back(5374);
        internal_counters.push_back(5773);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSLDSInsts", "ComputeShader", "The average number of LDS read/write instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,+,2,3,+,/,4,5,+,ifnotzero", "61b0b351-7e06-ef8e-a8e0-7a9e3200a836");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5409);
        internal_counters.push_back(5808);
        internal_counters.push_back(5374);
        internal_counters.push_back(5773);
        internal_counters.push_back(3892);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSALUStalledByLDS", "ComputeShader", "The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,+,2,3,+,/,4,/,NUM_SHADER_ENGINES,/,(100),*,5,6,+,ifnotzero", "6dc4f1c2-bad0-c9ff-156e-883b319a752a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(5432);
        internal_counters.push_back(5831);
        internal_counters.push_back(3892);
        internal_counters.push_back(5040);
        internal_counters.push_back(5229);

        c.DefineDerivedCounter("CSLDSBankConflict", "ComputeShader", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,+,2,/,NUM_SIMDS,/,(100),*,3,4,+,ifnotzero", "1065ee10-2e41-ea41-1eb3-b61b491752f4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6168);
        internal_counters.push_back(6274);
        internal_counters.push_back(6380);
        internal_counters.push_back(6486);
        internal_counters.push_back(6592);
        internal_counters.push_back(6698);
        internal_counters.push_back(6804);
        internal_counters.push_back(6910);
        internal_counters.push_back(7016);
        internal_counters.push_back(7122);
        internal_counters.push_back(7228);
        internal_counters.push_back(7334);
        internal_counters.push_back(7440);
        internal_counters.push_back(7546);
        internal_counters.push_back(7652);
        internal_counters.push_back(7758);
        internal_counters.push_back(7864);
        internal_counters.push_back(7970);
        internal_counters.push_back(8076);
        internal_counters.push_back(8182);
        internal_counters.push_back(8288);
        internal_counters.push_back(8394);
        internal_counters.push_back(8500);
        internal_counters.push_back(8606);
        internal_counters.push_back(8712);
        internal_counters.push_back(8818);
        internal_counters.push_back(8924);
        internal_counters.push_back(9030);
        internal_counters.push_back(9136);
        internal_counters.push_back(9242);
        internal_counters.push_back(9348);
        internal_counters.push_back(9454);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("TexUnitBusy", "Timing", "The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,max,13,max,14,max,15,max,16,max,17,max,18,max,19,max,20,max,21,max,22,max,23,max,24,max,25,max,26,max,27,max,28,max,29,max,30,max,31,max,32,/,(100),*", "36afb8d9-42fc-aafe-66c5-449542153b2c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6237);
        internal_counters.push_back(6343);
        internal_counters.push_back(6449);
        internal_counters.push_back(6555);
        internal_counters.push_back(6661);
        internal_counters.push_back(6767);
        internal_counters.push_back(6873);
        internal_counters.push_back(6979);
        internal_counters.push_back(7085);
        internal_counters.push_back(7191);
        internal_counters.push_back(7297);
        internal_counters.push_back(7403);
        internal_counters.push_back(7509);
        internal_counters.push_back(7615);
        internal_counters.push_back(7721);
        internal_counters.push_back(7827);
        internal_counters.push_back(7933);
        internal_counters.push_back(8039);
        internal_counters.push_back(8145);
        internal_counters.push_back(8251);
        internal_counters.push_back(8357);
        internal_counters.push_back(8463);
        internal_counters.push_back(8569);
        internal_counters.push_back(8675);
        internal_counters.push_back(8781);
        internal_counters.push_back(8887);
        internal_counters.push_back(8993);
        internal_counters.push_back(9099);
        internal_counters.push_back(9205);
        internal_counters.push_back(9311);
        internal_counters.push_back(9417);
        internal_counters.push_back(9523);
        internal_counters.push_back(6236);
        internal_counters.push_back(6342);
        internal_counters.push_back(6448);
        internal_counters.push_back(6554);
        internal_counters.push_back(6660);
        internal_counters.push_back(6766);
        internal_counters.push_back(6872);
        internal_counters.push_back(6978);
        internal_counters.push_back(7084);
        internal_counters.push_back(7190);
        internal_counters.push_back(7296);
        internal_counters.push_back(7402);
        internal_counters.push_back(7508);
        internal_counters.push_back(7614);
        internal_counters.push_back(7720);
        internal_counters.push_back(7826);
        internal_counters.push_back(7932);
        internal_counters.push_back(8038);
        internal_counters.push_back(8144);
        internal_counters.push_back(8250);
        internal_counters.push_back(8356);
        internal_counters.push_back(8462);
        internal_counters.push_back(8568);
        internal_counters.push_back(8674);
        internal_counters.push_back(8780);
        internal_counters.push_back(8886);
        internal_counters.push_back(8992);
        internal_counters.push_back(9098);
        internal_counters.push_back(9204);
        internal_counters.push_back(9310);
        internal_counters.push_back(9416);
        internal_counters.push_back(9522);

        c.DefineDerivedCounter("TexTriFilteringPct", "TextureUnit", "Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum32,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum32,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum32,+,/,(100),*", "1affc3c8-b917-5c81-622b-7004527208ae");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6239);
        internal_counters.push_back(6345);
        internal_counters.push_back(6451);
        internal_counters.push_back(6557);
        internal_counters.push_back(6663);
        internal_counters.push_back(6769);
        internal_counters.push_back(6875);
        internal_counters.push_back(6981);
        internal_counters.push_back(7087);
        internal_counters.push_back(7193);
        internal_counters.push_back(7299);
        internal_counters.push_back(7405);
        internal_counters.push_back(7511);
        internal_counters.push_back(7617);
        internal_counters.push_back(7723);
        internal_counters.push_back(7829);
        internal_counters.push_back(7935);
        internal_counters.push_back(8041);
        internal_counters.push_back(8147);
        internal_counters.push_back(8253);
        internal_counters.push_back(8359);
        internal_counters.push_back(8465);
        internal_counters.push_back(8571);
        internal_counters.push_back(8677);
        internal_counters.push_back(8783);
        internal_counters.push_back(8889);
        internal_counters.push_back(8995);
        internal_counters.push_back(9101);
        internal_counters.push_back(9207);
        internal_counters.push_back(9313);
        internal_counters.push_back(9419);
        internal_counters.push_back(9525);
        internal_counters.push_back(6238);
        internal_counters.push_back(6344);
        internal_counters.push_back(6450);
        internal_counters.push_back(6556);
        internal_counters.push_back(6662);
        internal_counters.push_back(6768);
        internal_counters.push_back(6874);
        internal_counters.push_back(6980);
        internal_counters.push_back(7086);
        internal_counters.push_back(7192);
        internal_counters.push_back(7298);
        internal_counters.push_back(7404);
        internal_counters.push_back(7510);
        internal_counters.push_back(7616);
        internal_counters.push_back(7722);
        internal_counters.push_back(7828);
        internal_counters.push_back(7934);
        internal_counters.push_back(8040);
        internal_counters.push_back(8146);
        internal_counters.push_back(8252);
        internal_counters.push_back(8358);
        internal_counters.push_back(8464);
        internal_counters.push_back(8570);
        internal_counters.push_back(8676);
        internal_counters.push_back(8782);
        internal_counters.push_back(8888);
        internal_counters.push_back(8994);
        internal_counters.push_back(9100);
        internal_counters.push_back(9206);
        internal_counters.push_back(9312);
        internal_counters.push_back(9418);
        internal_counters.push_back(9524);

        c.DefineDerivedCounter("TexVolFilteringPct", "TextureUnit", "Percentage of pixels that received volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum32,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum32,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum32,+,/,(100),*", "b5ff6bed-3178-aee4-42dd-c74391c02a2d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(6257);
        internal_counters.push_back(6363);
        internal_counters.push_back(6469);
        internal_counters.push_back(6575);
        internal_counters.push_back(6681);
        internal_counters.push_back(6787);
        internal_counters.push_back(6893);
        internal_counters.push_back(6999);
        internal_counters.push_back(7105);
        internal_counters.push_back(7211);
        internal_counters.push_back(7317);
        internal_counters.push_back(7423);
        internal_counters.push_back(7529);
        internal_counters.push_back(7635);
        internal_counters.push_back(7741);
        internal_counters.push_back(7847);
        internal_counters.push_back(7953);
        internal_counters.push_back(8059);
        internal_counters.push_back(8165);
        internal_counters.push_back(8271);
        internal_counters.push_back(8377);
        internal_counters.push_back(8483);
        internal_counters.push_back(8589);
        internal_counters.push_back(8695);
        internal_counters.push_back(8801);
        internal_counters.push_back(8907);
        internal_counters.push_back(9013);
        internal_counters.push_back(9119);
        internal_counters.push_back(9225);
        internal_counters.push_back(9331);
        internal_counters.push_back(9437);
        internal_counters.push_back(9543);
        internal_counters.push_back(6258);
        internal_counters.push_back(6364);
        internal_counters.push_back(6470);
        internal_counters.push_back(6576);
        internal_counters.push_back(6682);
        internal_counters.push_back(6788);
        internal_counters.push_back(6894);
        internal_counters.push_back(7000);
        internal_counters.push_back(7106);
        internal_counters.push_back(7212);
        internal_counters.push_back(7318);
        internal_counters.push_back(7424);
        internal_counters.push_back(7530);
        internal_counters.push_back(7636);
        internal_counters.push_back(7742);
        internal_counters.push_back(7848);
        internal_counters.push_back(7954);
        internal_counters.push_back(8060);
        internal_counters.push_back(8166);
        internal_counters.push_back(8272);
        internal_counters.push_back(8378);
        internal_counters.push_back(8484);
        internal_counters.push_back(8590);
        internal_counters.push_back(8696);
        internal_counters.push_back(8802);
        internal_counters.push_back(8908);
        internal_counters.push_back(9014);
        internal_counters.push_back(9120);
        internal_counters.push_back(9226);
        internal_counters.push_back(9332);
        internal_counters.push_back(9438);
        internal_counters.push_back(9544);
        internal_counters.push_back(6259);
        internal_counters.push_back(6365);
        internal_counters.push_back(6471);
        internal_counters.push_back(6577);
        internal_counters.push_back(6683);
        internal_counters.push_back(6789);
        internal_counters.push_back(6895);
        internal_counters.push_back(7001);
        internal_counters.push_back(7107);
        internal_counters.push_back(7213);
        internal_counters.push_back(7319);
        internal_counters.push_back(7425);
        internal_counters.push_back(7531);
        internal_counters.push_back(7637);
        internal_counters.push_back(7743);
        internal_counters.push_back(7849);
        internal_counters.push_back(7955);
        internal_counters.push_back(8061);
        internal_counters.push_back(8167);
        internal_counters.push_back(8273);
        internal_counters.push_back(8379);
        internal_counters.push_back(8485);
        internal_counters.push_back(8591);
        internal_counters.push_back(8697);
        internal_counters.push_back(8803);
        internal_counters.push_back(8909);
        internal_counters.push_back(9015);
        internal_counters.push_back(9121);
        internal_counters.push_back(9227);
        internal_counters.push_back(9333);
        internal_counters.push_back(9439);
        internal_counters.push_back(9545);
        internal_counters.push_back(6260);
        internal_counters.push_back(6366);
        internal_counters.push_back(6472);
        internal_counters.push_back(6578);
        internal_counters.push_back(6684);
        internal_counters.push_back(6790);
        internal_counters.push_back(6896);
        internal_counters.push_back(7002);
        internal_counters.push_back(7108);
        internal_counters.push_back(7214);
        internal_counters.push_back(7320);
        internal_counters.push_back(7426);
        internal_counters.push_back(7532);
        internal_counters.push_back(7638);
        internal_counters.push_back(7744);
        internal_counters.push_back(7850);
        internal_counters.push_back(7956);
        internal_counters.push_back(8062);
        internal_counters.push_back(8168);
        internal_counters.push_back(8274);
        internal_counters.push_back(8380);
        internal_counters.push_back(8486);
        internal_counters.push_back(8592);
        internal_counters.push_back(8698);
        internal_counters.push_back(8804);
        internal_counters.push_back(8910);
        internal_counters.push_back(9016);
        internal_counters.push_back(9122);
        internal_counters.push_back(9228);
        internal_counters.push_back(9334);
        internal_counters.push_back(9440);
        internal_counters.push_back(9546);
        internal_counters.push_back(6261);
        internal_counters.push_back(6367);
        internal_counters.push_back(6473);
        internal_counters.push_back(6579);
        internal_counters.push_back(6685);
        internal_counters.push_back(6791);
        internal_counters.push_back(6897);
        internal_counters.push_back(7003);
        internal_counters.push_back(7109);
        internal_counters.push_back(7215);
        internal_counters.push_back(7321);
        internal_counters.push_back(7427);
        internal_counters.push_back(7533);
        internal_counters.push_back(7639);
        internal_counters.push_back(7745);
        internal_counters.push_back(7851);
        internal_counters.push_back(7957);
        internal_counters.push_back(8063);
        internal_counters.push_back(8169);
        internal_counters.push_back(8275);
        internal_counters.push_back(8381);
        internal_counters.push_back(8487);
        internal_counters.push_back(8593);
        internal_counters.push_back(8699);
        internal_counters.push_back(8805);
        internal_counters.push_back(8911);
        internal_counters.push_back(9017);
        internal_counters.push_back(9123);
        internal_counters.push_back(9229);
        internal_counters.push_back(9335);
        internal_counters.push_back(9441);
        internal_counters.push_back(9547);
        internal_counters.push_back(6262);
        internal_counters.push_back(6368);
        internal_counters.push_back(6474);
        internal_counters.push_back(6580);
        internal_counters.push_back(6686);
        internal_counters.push_back(6792);
        internal_counters.push_back(6898);
        internal_counters.push_back(7004);
        internal_counters.push_back(7110);
        internal_counters.push_back(7216);
        internal_counters.push_back(7322);
        internal_counters.push_back(7428);
        internal_counters.push_back(7534);
        internal_counters.push_back(7640);
        internal_counters.push_back(7746);
        internal_counters.push_back(7852);
        internal_counters.push_back(7958);
        internal_counters.push_back(8064);
        internal_counters.push_back(8170);
        internal_counters.push_back(8276);
        internal_counters.push_back(8382);
        internal_counters.push_back(8488);
        internal_counters.push_back(8594);
        internal_counters.push_back(8700);
        internal_counters.push_back(8806);
        internal_counters.push_back(8912);
        internal_counters.push_back(9018);
        internal_counters.push_back(9124);
        internal_counters.push_back(9230);
        internal_counters.push_back(9336);
        internal_counters.push_back(9442);
        internal_counters.push_back(9548);
        internal_counters.push_back(6263);
        internal_counters.push_back(6369);
        internal_counters.push_back(6475);
        internal_counters.push_back(6581);
        internal_counters.push_back(6687);
        internal_counters.push_back(6793);
        internal_counters.push_back(6899);
        internal_counters.push_back(7005);
        internal_counters.push_back(7111);
        internal_counters.push_back(7217);
        internal_counters.push_back(7323);
        internal_counters.push_back(7429);
        internal_counters.push_back(7535);
        internal_counters.push_back(7641);
        internal_counters.push_back(7747);
        internal_counters.push_back(7853);
        internal_counters.push_back(7959);
        internal_counters.push_back(8065);
        internal_counters.push_back(8171);
        internal_counters.push_back(8277);
        internal_counters.push_back(8383);
        internal_counters.push_back(8489);
        internal_counters.push_back(8595);
        internal_counters.push_back(8701);
        internal_counters.push_back(8807);
        internal_counters.push_back(8913);
        internal_counters.push_back(9019);
        internal_counters.push_back(9125);
        internal_counters.push_back(9231);
        internal_counters.push_back(9337);
        internal_counters.push_back(9443);
        internal_counters.push_back(9549);
        internal_counters.push_back(6264);
        internal_counters.push_back(6370);
        internal_counters.push_back(6476);
        internal_counters.push_back(6582);
        internal_counters.push_back(6688);
        internal_counters.push_back(6794);
        internal_counters.push_back(6900);
        internal_counters.push_back(7006);
        internal_counters.push_back(7112);
        internal_counters.push_back(7218);
        internal_counters.push_back(7324);
        internal_counters.push_back(7430);
        internal_counters.push_back(7536);
        internal_counters.push_back(7642);
        internal_counters.push_back(7748);
        internal_counters.push_back(7854);
        internal_counters.push_back(7960);
        internal_counters.push_back(8066);
        internal_counters.push_back(8172);
        internal_counters.push_back(8278);
        internal_counters.push_back(8384);
        internal_counters.push_back(8490);
        internal_counters.push_back(8596);
        internal_counters.push_back(8702);
        internal_counters.push_back(8808);
        internal_counters.push_back(8914);
        internal_counters.push_back(9020);
        internal_counters.push_back(9126);
        internal_counters.push_back(9232);
        internal_counters.push_back(9338);
        internal_counters.push_back(9444);
        internal_counters.push_back(9550);
        internal_counters.push_back(6265);
        internal_counters.push_back(6371);
        internal_counters.push_back(6477);
        internal_counters.push_back(6583);
        internal_counters.push_back(6689);
        internal_counters.push_back(6795);
        internal_counters.push_back(6901);
        internal_counters.push_back(7007);
        internal_counters.push_back(7113);
        internal_counters.push_back(7219);
        internal_counters.push_back(7325);
        internal_counters.push_back(7431);
        internal_counters.push_back(7537);
        internal_counters.push_back(7643);
        internal_counters.push_back(7749);
        internal_counters.push_back(7855);
        internal_counters.push_back(7961);
        internal_counters.push_back(8067);
        internal_counters.push_back(8173);
        internal_counters.push_back(8279);
        internal_counters.push_back(8385);
        internal_counters.push_back(8491);
        internal_counters.push_back(8597);
        internal_counters.push_back(8703);
        internal_counters.push_back(8809);
        internal_counters.push_back(8915);
        internal_counters.push_back(9021);
        internal_counters.push_back(9127);
        internal_counters.push_back(9233);
        internal_counters.push_back(9339);
        internal_counters.push_back(9445);
        internal_counters.push_back(9551);

        c.DefineDerivedCounter("TexAveAnisotropy", "TextureUnit", "The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum32,(2),32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum32,*,+,(4),64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,sum32,*,+,(6),96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum32,*,+,(8),128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,sum32,*,+,(10),160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,sum32,*,+,(12),192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,sum32,*,+,(14),224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,sum32,*,+,(16),256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,sum32,*,+,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum32,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,sum32,+,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,sum32,+,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,sum32,+,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,sum32,+,160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,sum32,+,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,sum32,+,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255,sum32,+,256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,sum32,+,/", "7ca2a2b9-a4eb-ce23-d163-59147e672396");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2043);
        internal_counters.push_back(2292);
        internal_counters.push_back(2541);
        internal_counters.push_back(2790);
        internal_counters.push_back(3039);
        internal_counters.push_back(3288);
        internal_counters.push_back(3537);
        internal_counters.push_back(3786);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("DepthStencilTestBusy", "Timing", "Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,/,(100),*", "6834fb52-42e8-bb50-fd48-ec2f2904e7e0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1913);
        internal_counters.push_back(2162);
        internal_counters.push_back(2411);
        internal_counters.push_back(2660);
        internal_counters.push_back(2909);
        internal_counters.push_back(3158);
        internal_counters.push_back(3407);
        internal_counters.push_back(3656);
        internal_counters.push_back(1902);
        internal_counters.push_back(2151);
        internal_counters.push_back(2400);
        internal_counters.push_back(2649);
        internal_counters.push_back(2898);
        internal_counters.push_back(3147);
        internal_counters.push_back(3396);
        internal_counters.push_back(3645);

        c.DefineDerivedCounter("HiZTilesAccepted", "DepthAndStencil", "Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,sum8,8,9,10,11,12,13,14,15,sum8,/,(100),*", "56176f45-d7ff-813d-4f05-3b2f046067e7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1902);
        internal_counters.push_back(2151);
        internal_counters.push_back(2400);
        internal_counters.push_back(2649);
        internal_counters.push_back(2898);
        internal_counters.push_back(3147);
        internal_counters.push_back(3396);
        internal_counters.push_back(3645);
        internal_counters.push_back(1926);
        internal_counters.push_back(2175);
        internal_counters.push_back(2424);
        internal_counters.push_back(2673);
        internal_counters.push_back(2922);
        internal_counters.push_back(3171);
        internal_counters.push_back(3420);
        internal_counters.push_back(3669);

        c.DefineDerivedCounter("PreZTilesDetailCulled", "DepthAndStencil", "Percentage of tiles rejected because the associated prim had no contributing area.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "8,9,10,11,12,13,14,15,sum8,0,1,2,3,4,5,6,7,sum8,/,(100),*", "cad7f54d-a044-7574-c472-6f2065cbeeac");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4443);
        internal_counters.push_back(4735);
        internal_counters.push_back(4444);
        internal_counters.push_back(4736);
        internal_counters.push_back(4445);
        internal_counters.push_back(4737);
        internal_counters.push_back(4446);
        internal_counters.push_back(4738);
        internal_counters.push_back(4519);
        internal_counters.push_back(4811);
        internal_counters.push_back(4520);
        internal_counters.push_back(4812);
        internal_counters.push_back(4521);
        internal_counters.push_back(4813);
        internal_counters.push_back(4522);
        internal_counters.push_back(4814);

        c.DefineDerivedCounter("HiZQuadsCulled", "DepthAndStencil", "Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,sum8,8,9,10,11,12,13,14,15,sum8,-,0,1,2,3,4,5,6,7,sum8,/,(100),*", "fa0e319b-5573-6d34-5bab-904769925036");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4443);
        internal_counters.push_back(4735);
        internal_counters.push_back(4444);
        internal_counters.push_back(4736);
        internal_counters.push_back(4445);
        internal_counters.push_back(4737);
        internal_counters.push_back(4446);
        internal_counters.push_back(4738);
        internal_counters.push_back(4543);
        internal_counters.push_back(4835);
        internal_counters.push_back(4519);
        internal_counters.push_back(4811);
        internal_counters.push_back(4520);
        internal_counters.push_back(4812);
        internal_counters.push_back(4521);
        internal_counters.push_back(4813);
        internal_counters.push_back(4522);
        internal_counters.push_back(4814);

        c.DefineDerivedCounter("PreZQuadsCulled", "DepthAndStencil", "Percentage of quads rejected based on the detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "10,11,12,13,14,15,16,17,sum8,8,9,+,-,0,1,2,3,4,5,6,7,sum8,/,(100),*", "4e77547b-ec55-5663-f034-af59be66d77d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4543);
        internal_counters.push_back(4835);
        internal_counters.push_back(4443);
        internal_counters.push_back(4735);
        internal_counters.push_back(4444);
        internal_counters.push_back(4736);
        internal_counters.push_back(4445);
        internal_counters.push_back(4737);
        internal_counters.push_back(4446);
        internal_counters.push_back(4738);

        c.DefineDerivedCounter("PostZQuads", "DepthAndStencil", "Percentage of quads for which the pixel shader will run and may be postZ tested.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,+,2,3,4,5,6,7,8,9,sum8,/,(100),*", "58f0d34b-eeb8-e8db-abce-cb72584144be");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2078);
        internal_counters.push_back(2327);
        internal_counters.push_back(2576);
        internal_counters.push_back(2825);
        internal_counters.push_back(3074);
        internal_counters.push_back(3323);
        internal_counters.push_back(3572);
        internal_counters.push_back(3821);

        c.DefineDerivedCounter("PreZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z before shading and passed.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,sum8", "3bfe6c4d-7422-ca03-7ea5-e67ff1a00136");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2080);
        internal_counters.push_back(2329);
        internal_counters.push_back(2578);
        internal_counters.push_back(2827);
        internal_counters.push_back(3076);
        internal_counters.push_back(3325);
        internal_counters.push_back(3574);
        internal_counters.push_back(3823);

        c.DefineDerivedCounter("PreZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z before shading and failed stencil test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,sum8", "df7f705e-5162-d3b5-da8b-63466cf9c4e5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2079);
        internal_counters.push_back(2328);
        internal_counters.push_back(2577);
        internal_counters.push_back(2826);
        internal_counters.push_back(3075);
        internal_counters.push_back(3324);
        internal_counters.push_back(3573);
        internal_counters.push_back(3822);

        c.DefineDerivedCounter("PreZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z before shading and failed Z test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,sum8", "4484e950-f7a4-3800-bc74-78dd297f017e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2075);
        internal_counters.push_back(2324);
        internal_counters.push_back(2573);
        internal_counters.push_back(2822);
        internal_counters.push_back(3071);
        internal_counters.push_back(3320);
        internal_counters.push_back(3569);
        internal_counters.push_back(3818);

        c.DefineDerivedCounter("PostZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z after shading and passed.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,sum8", "4995d5d6-2330-b986-508b-fae24856f44c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2077);
        internal_counters.push_back(2326);
        internal_counters.push_back(2575);
        internal_counters.push_back(2824);
        internal_counters.push_back(3073);
        internal_counters.push_back(3322);
        internal_counters.push_back(3571);
        internal_counters.push_back(3820);

        c.DefineDerivedCounter("PostZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z after shading and failed stencil test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,sum8", "ae558af4-f4be-3dd4-7316-b2c4dcf0def8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(2076);
        internal_counters.push_back(2325);
        internal_counters.push_back(2574);
        internal_counters.push_back(2823);
        internal_counters.push_back(3072);
        internal_counters.push_back(3321);
        internal_counters.push_back(3570);
        internal_counters.push_back(3819);

        c.DefineDerivedCounter("PostZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z after shading and failed Z test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,sum8", "b3684c94-814a-c695-c85d-a5b6ab798b35");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1945);
        internal_counters.push_back(2194);
        internal_counters.push_back(2443);
        internal_counters.push_back(2692);
        internal_counters.push_back(2941);
        internal_counters.push_back(3190);
        internal_counters.push_back(3439);
        internal_counters.push_back(3688);
        internal_counters.push_back(3892);

        c.DefineDerivedCounter("ZUnitStalled", "DepthAndStencil", "The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,/,(100),*", "5e86c3ad-1726-3157-1d01-7ed188bf854d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1947);
        internal_counters.push_back(2196);
        internal_counters.push_back(2445);
        internal_counters.push_back(2694);
        internal_counters.push_back(1954);
        internal_counters.push_back(2203);
        internal_counters.push_back(2452);
        internal_counters.push_back(2701);

        c.DefineDerivedCounter("DBMemRead", "DepthAndStencil", "Number of bytes read from the depth buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,2,3,sum4,(256),*,4,5,6,7,sum4,(32),*,+", "dcdb4ee7-bd50-00f7-c028-9e5f4ce888c0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1959);
        internal_counters.push_back(2208);
        internal_counters.push_back(2457);
        internal_counters.push_back(2706);
        internal_counters.push_back(1962);
        internal_counters.push_back(2211);
        internal_counters.push_back(2460);
        internal_counters.push_back(2709);

        c.DefineDerivedCounter("DBMemWritten", "DepthAndStencil", "Number of bytes written to the depth buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,2,3,sum4,(32),*,4,5,6,7,sum4,+", "de5717f8-8a49-ee44-4645-10de51b37dcf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(305);
        internal_counters.push_back(520);
        internal_counters.push_back(735);
        internal_counters.push_back(950);
        internal_counters.push_back(1165);
        internal_counters.push_back(1380);
        internal_counters.push_back(1595);
        internal_counters.push_back(1810);

        c.DefineDerivedCounter("CBMemRead", "ColorBuffer", "Number of bytes read from the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,2,3,4,5,6,7,sum8,(32),*", "84b531d8-a1f8-7f49-7c27-7bc97801f1e6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(295);
        internal_counters.push_back(510);
        internal_counters.push_back(725);
        internal_counters.push_back(940);
        internal_counters.push_back(1155);
        internal_counters.push_back(1370);
        internal_counters.push_back(1585);
        internal_counters.push_back(1800);

        c.DefineDerivedCounter("CBMemWritten", "ColorBuffer", "Number of bytes written to the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,2,3,4,5,6,7,sum8,(32),*", "550f8ff8-60b6-a6bf-87d0-25ac9e87de70");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(339);
        internal_counters.push_back(554);
        internal_counters.push_back(769);
        internal_counters.push_back(984);
        internal_counters.push_back(1199);
        internal_counters.push_back(1414);
        internal_counters.push_back(1629);
        internal_counters.push_back(1844);
        internal_counters.push_back(185);
        internal_counters.push_back(400);
        internal_counters.push_back(615);
        internal_counters.push_back(830);
        internal_counters.push_back(1045);
        internal_counters.push_back(1260);
        internal_counters.push_back(1475);
        internal_counters.push_back(1690);

        c.DefineDerivedCounter("CBSlowPixelPct", "ColorBuffer", "Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,sum8,8,9,10,11,12,13,14,15,sum8,/,(100),*,(100),min", "5775943f-0313-7e52-9638-b24a449197bc");
    }
}

