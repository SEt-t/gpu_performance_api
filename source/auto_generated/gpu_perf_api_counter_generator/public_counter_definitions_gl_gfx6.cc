//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Public Counter Definitions for GL GFX6.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/public_counter_definitions_gl_gfx6.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicDerivedCountersGlGfx6(GpaDerivedCounters& c)
{
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8883);

        c.DefineDerivedCounter("GPUTime", "Timing", "Time this API call took to execute on the GPU in nanoseconds. Does not include time that draw calls are processed in parallel.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "0,TS_FREQ,/,(1000000000),*", "cc28af53-f7f8-c96a-9f04-766f6aafe4ce");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(976);
        internal_counters.push_back(974);

        c.DefineDerivedCounter("GPUBusy", "Timing", "The percentage of time GPU was busy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,/,(100),*,(100),min", "bef38bf3-1167-0844-81f0-67d2d28ddbc5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8775);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("TessellatorBusy", "Timing", "The percentage of time the tessellation engine is busy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,NUM_PRIM_PIPES,/,1,/,(100),*", "36af6c72-dcfb-8102-4fd4-ce8ddc573365");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1447);
        internal_counters.push_back(1465);
        internal_counters.push_back(1483);
        internal_counters.push_back(1513);
        internal_counters.push_back(1456);
        internal_counters.push_back(1471);
        internal_counters.push_back(1489);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("VSBusy", "Timing", "The percentage of time the ShaderUnit has vertex shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,4,ifnotzero,1,5,ifnotzero,2,6,ifnotzero,7,/,(100),*,(100),min", "94caad5e-867c-6c09-cf3a-d05b51df8f3b");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8883);
        internal_counters.push_back(1447);
        internal_counters.push_back(1465);
        internal_counters.push_back(1483);
        internal_counters.push_back(1513);
        internal_counters.push_back(1456);
        internal_counters.push_back(1471);
        internal_counters.push_back(1489);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("VSTime", "Timing", "Time vertex shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,5,ifnotzero,2,6,ifnotzero,3,7,ifnotzero,8,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "d6ce819e-69af-a241-d07a-5dd8d146e436");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1474);
        internal_counters.push_back(1480);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("HSBusy", "Timing", "The percentage of time the ShaderUnit has hull shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,ifnotzero,2,/,(100),*,(100),min", "16f30a0b-4cbf-eccd-b13f-ab68dd254d32");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8883);
        internal_counters.push_back(1474);
        internal_counters.push_back(1480);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("HSTime", "Timing", "Time hull shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "8386a863-dd34-1526-f703-0f0c7b241bc4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1447);
        internal_counters.push_back(1465);
        internal_counters.push_back(1513);
        internal_counters.push_back(1471);
        internal_counters.push_back(1489);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("DSBusy", "Timing", "The percentage of time the ShaderUnit has domain shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,3,ifnotzero,4,ifnotzero,5,/,(100),*,(100),min", "0c626e8a-9b82-b6d4-d9a3-578509316301");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8883);
        internal_counters.push_back(1447);
        internal_counters.push_back(1465);
        internal_counters.push_back(1513);
        internal_counters.push_back(1471);
        internal_counters.push_back(1489);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("DSTime", "Timing", "Time domain shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,2,4,ifnotzero,5,ifnotzero,6,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "bfe28947-c727-8a9f-aa59-c218e58bfba5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1459);
        internal_counters.push_back(1462);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("GSBusy", "Timing", "The percentage of time the ShaderUnit has geometry shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,ifnotzero,2,/,(100),*,(100),min", "876f36d8-d046-833f-7832-673cbffd0a45");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8883);
        internal_counters.push_back(1459);
        internal_counters.push_back(1462);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("GSTime", "Timing", "Time geometry shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "c73e715f-59af-76e8-9e22-097b94c066c4");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1513);
        internal_counters.push_back(1520);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("PSBusy", "Timing", "The percentage of time the ShaderUnit has pixel shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,ifnotzero,2,/,(100),*,(100),min", "7e772beb-d82c-bd9a-aed0-fe504d416ce5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8883);
        internal_counters.push_back(1513);
        internal_counters.push_back(1520);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("PSTime", "Timing", "Time pixel shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "edca7694-7416-e8a6-0c5a-63a5ad5f3d74");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1492);
        internal_counters.push_back(1497);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("CSBusy", "Timing", "The percentage of time the ShaderUnit has compute shader work to do.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,ifnotzero,2,/,(100),*,(100),min", "493fdd90-8d2b-a055-5e4e-2d29c3396b8c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8883);
        internal_counters.push_back(1492);
        internal_counters.push_back(1497);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("CSTime", "Timing", "Time compute shaders are busy in nanoseconds.", kGpaDataTypeFloat64, kGpaUsageTypeNanoseconds, internal_counters, "(0),1,2,ifnotzero,3,/,(1),min,0,TS_FREQ,/,(1000000000),*,*", "dbc24916-ecb2-7eef-8d63-7afadaaab6bc");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8670);
        internal_counters.push_back(8651);
        internal_counters.push_back(8746);

        c.DefineDerivedCounter("VSVerticesIn", "VertexShader", "The number of vertices processed by the VS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,1,ifnotzero,2,2,ifnotzero", "810a04c8-2ff4-081d-766d-bfa2bd4ad916");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8755);

        c.DefineDerivedCounter("HSPatches", "HullShader", "The number of patches processed by the HS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0", "d1bbd27d-d591-4509-df52-d329fb73a98f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8670);
        internal_counters.push_back(8651);
        internal_counters.push_back(8746);

        c.DefineDerivedCounter("DSVerticesIn", "DomainShader", "The number of vertices processed by the DS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,1,ifnotzero,2,ifnotzero", "b88d9d05-2418-e639-4e3d-3a5815855f8d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8659);

        c.DefineDerivedCounter("GSPrimsIn", "GeometryShader", "The number of primitives passed into the GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0", "20c29866-509a-aaab-2697-6b2c38f79953");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(8670);
        internal_counters.push_back(8651);

        c.DefineDerivedCounter("GSVerticesOut", "GeometryShader", "The number of vertices output by the GS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,ifnotzero", "775b9736-319a-bd8a-48c9-68db9c91d978");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1123);
        internal_counters.push_back(1127);
        internal_counters.push_back(1079);
        internal_counters.push_back(1091);
        internal_counters.push_back(1080);
        internal_counters.push_back(1092);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("PrimitiveAssemblyBusy", "Timing", "The percentage of GPUTime that primitive assembly (clipping and culling) is busy. High values may be caused by having many small primitives; mid to low values may indicate pixel shader or output buffer bottleneck.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,-,2,3,+,4,+,5,(2),*,+,SU_CLOCKS_PRIM,*,-,NUM_PRIM_PIPES,/,(0),max,6,/,(100),*,(100),min", "54ac5640-c4d7-95e2-20e0-6a9fdfc07333");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1026);

        c.DefineDerivedCounter("PrimitivesIn", "PrimitiveAssembly", "The number of primitives received by the hardware. This includes primitives generated by tessellation.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0", "a515b80d-75c3-c7d2-0d2f-d7766b4759a6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1032);
        internal_counters.push_back(1072);
        internal_counters.push_back(1073);
        internal_counters.push_back(1074);
        internal_counters.push_back(1075);

        c.DefineDerivedCounter("CulledPrims", "PrimitiveAssembly", "The number of culled primitives. Typical reasons include scissor, the primitive having zero area, and back or front face culling.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+,2,+,3,+,4,+", "589bdf55-9192-280a-41c3-584bc94f2562");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1039);

        c.DefineDerivedCounter("ClippedPrims", "PrimitiveAssembly", "The number of primitives that required one or more clipping operations due to intersecting the view volume or user clip planes.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0", "5ef6f9d5-155e-5baa-163f-8359d9ea9bbf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1127);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("PAStalledOnRasterizer", "PrimitiveAssembly", "Percentage of GPUTime that primitive assembly waits for rasterization to be ready to accept data. This roughly indicates for what percentage of time the pipeline is bottlenecked by pixel operations.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,NUM_PRIM_PIPES,/,1,/,(100),*", "6f9f416b-53c1-0457-f88c-7b6ba8973974");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4839);
        internal_counters.push_back(4844);
        internal_counters.push_back(4849);
        internal_counters.push_back(4854);

        c.DefineDerivedCounter("PSPixelsOut", "PixelShader", "Pixels exported from shader to color buffers. Does not include killed or alpha tested pixels; if there are multiple render targets, each render target receives one export, so this will be 2 for 1 pixel written to two RTs.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,sum4", "24cba16c-baa6-6ecd-95ad-92ecb1338da1");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4841);
        internal_counters.push_back(4846);
        internal_counters.push_back(4851);
        internal_counters.push_back(4856);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("PSExportStalls", "PixelShader", "Pixel shader output stalls. Percentage of GPUBusy. Should be zero for PS or further upstream limited cases; if not zero, indicates a bottleneck in late Z testing or in the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,/,NUM_SHADER_ENGINES,/,(100),*", "9b4f466c-ff97-22bb-557d-84d3c4c51895");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSThreadGroups", "ComputeShader", "Total number of thread groups.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0", "8ce3fc80-56b2-97f9-8e70-2e8c747cea68");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1497);

        c.DefineDerivedCounter("CSWavefronts", "ComputeShader", "The total number of wavefronts used for the CS.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0", "42379c6e-369b-c237-8b25-cdb9cdc65c4d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1494);
        internal_counters.push_back(1644);

        c.DefineDerivedCounter("CSThreads", "ComputeShader", "The number of CS threads processed by the hardware.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),1,0,ifnotzero", "7a648013-6eac-2665-ac36-13c6f4ac9c26");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1649);
        internal_counters.push_back(1639);
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSVALUInsts", "ComputeShader", "The average number of vector ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,/,2,ifnotzero", "376cb1cc-5a40-9d1d-404c-f1736c0c5084");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1693);
        internal_counters.push_back(1685);
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSVALUUtilization", "ComputeShader", "The percentage of active vector ALU threads in a wave. A lower number can mean either more thread divergence in a wave or that the work-group size is not a multiple of 64. Value range: 0% (bad), 100% (ideal - no thread divergence).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,(64),*,/,(100),*,2,ifnotzero,(100),min", "4476879e-cdc0-d602-b24e-9b4a8d38438f");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1653);
        internal_counters.push_back(1639);
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSSALUInsts", "ComputeShader", "The average number of scalar ALU instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,/,2,ifnotzero", "eb211144-8136-ff86-e8bf-4d0493a904cb");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1651);
        internal_counters.push_back(1639);
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSVFetchInsts", "ComputeShader", "The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,/,2,ifnotzero", "3e2829c0-6215-783b-c271-6d57ff2c520e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1654);
        internal_counters.push_back(1639);
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSSFetchInsts", "ComputeShader", "The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,/,2,ifnotzero", "da09171c-6a0a-584f-fddc-dc5062d63a3e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1650);
        internal_counters.push_back(1639);
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSVWriteInsts", "ComputeShader", "The average number of vector write instructions to the video memory executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,/,2,ifnotzero", "43438c22-e910-b377-b767-b32902e0df0d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1685);
        internal_counters.push_back(976);
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSVALUBusy", "ComputeShader", "The percentage of GPUTime vector ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,(4),*,NUM_SIMDS,/,1,/,(100),*,2,ifnotzero", "f1e64815-f6a8-c277-d4f9-d054b443e205");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1690);
        internal_counters.push_back(976);
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSSALUBusy", "ComputeShader", "The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*,2,ifnotzero", "3fc35f4e-9882-94e3-6f5f-4e81cd97082a");
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
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSMemUnitBusy", "ComputeShader", "The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,/,NUM_SHADER_ENGINES,/,(100),*,9,ifnotzero", "42ab96e1-0a24-96c8-c4ff-098fa267d78e");
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
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSMemUnitStalled", "ComputeShader", "The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,/,NUM_SHADER_ENGINES,/,(100),*,9,ifnotzero", "f18e8679-1511-d533-d9ee-4365197f7d0c");
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
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSFetchSize", "ComputeShader", "The total kilobytes fetched from the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,sum12,(32),*,(1024),/,12,ifnotzero", "03cdb7e9-2bc3-15c1-811f-2106f3449295");
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
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSWriteSize", "ComputeShader", "The total kilobytes written to the video memory. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypeKilobytes, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,sum12,(32),*,(1024),/,12,ifnotzero", "3ec1ce55-d621-b7a5-5b8d-2909cf2dbe7d");
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
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSCacheHit", "ComputeShader", "The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,2,3,4,5,6,7,8,9,10,11,sum12,0,1,2,3,4,5,6,7,8,9,10,11,sum12,12,13,14,15,16,17,18,19,20,21,22,23,sum12,+,/,(100),*,24,ifnotzero", "50fdbc38-d099-5957-5f75-dfe5341b2187");
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
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSWriteUnitStalled", "ComputeShader", "The percentage of GPUTime the Write unit is stalled. Value range: 0% to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,max,9,max,10,max,11,max,12,/,(100),*,13,ifnotzero", "3e0e1bdc-f66c-eddd-af3d-f8e9e8f45fd8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1656);
        internal_counters.push_back(1639);
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSGDSInsts", "ComputeShader", "The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,/,2,ifnotzero", "2a867f3e-4a37-ad16-55d1-f03d74707819");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1655);
        internal_counters.push_back(1639);
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSLDSInsts", "ComputeShader", "The average number of LDS read/write instructions executed per work-item (affected by flow control).", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "(0),0,1,/,2,ifnotzero", "61b0b351-7e06-ef8e-a8e0-7a9e3200a836");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1674);
        internal_counters.push_back(1639);
        internal_counters.push_back(976);
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSALUStalledByLDS", "ComputeShader", "The percentage of GPUTime ALU units are stalled by the LDS input queue being full or the output queue being not ready. If there are LDS bank conflicts, reduce them. Otherwise, try reducing the number of LDS accesses if possible. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,/,2,/,NUM_SHADER_ENGINES,/,(100),*,3,ifnotzero", "6dc4f1c2-bad0-c9ff-156e-883b319a752a");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1697);
        internal_counters.push_back(976);
        internal_counters.push_back(1494);

        c.DefineDerivedCounter("CSLDSBankConflict", "ComputeShader", "The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "(0),0,1,/,NUM_SIMDS,/,(100),*,2,ifnotzero", "1065ee10-2e41-ea41-1eb3-b61b491752f4");
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

        c.DefineDerivedCounter("TexUnitBusy", "Timing", "The percentage of GPUTime the texture unit is active. This is measured with all extra fetches and any cache or memory effects taken into account.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,max,3,max,4,max,5,max,6,max,7,max,8,/,NUM_SHADER_ENGINES,/,(100),*", "36afb8d9-42fc-aafe-66c5-449542153b2c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4928);
        internal_counters.push_back(5034);
        internal_counters.push_back(5140);
        internal_counters.push_back(5246);
        internal_counters.push_back(5352);
        internal_counters.push_back(5458);
        internal_counters.push_back(5564);
        internal_counters.push_back(5670);
        internal_counters.push_back(4927);
        internal_counters.push_back(5033);
        internal_counters.push_back(5139);
        internal_counters.push_back(5245);
        internal_counters.push_back(5351);
        internal_counters.push_back(5457);
        internal_counters.push_back(5563);
        internal_counters.push_back(5669);

        c.DefineDerivedCounter("TexTriFilteringPct", "TextureUnit", "Percentage of pixels that received trilinear filtering. Note that not all pixels for which trilinear filtering is enabled will receive it (e.g. if the texture is magnified).", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,sum8,8,9,10,11,12,13,14,15,sum8,0,1,2,3,4,5,6,7,sum8,+,/,(100),*", "1affc3c8-b917-5c81-622b-7004527208ae");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4930);
        internal_counters.push_back(5036);
        internal_counters.push_back(5142);
        internal_counters.push_back(5248);
        internal_counters.push_back(5354);
        internal_counters.push_back(5460);
        internal_counters.push_back(5566);
        internal_counters.push_back(5672);
        internal_counters.push_back(4929);
        internal_counters.push_back(5035);
        internal_counters.push_back(5141);
        internal_counters.push_back(5247);
        internal_counters.push_back(5353);
        internal_counters.push_back(5459);
        internal_counters.push_back(5565);
        internal_counters.push_back(5671);

        c.DefineDerivedCounter("TexVolFilteringPct", "TextureUnit", "Percentage of pixels that received volume filtering.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,3,4,5,6,7,sum8,8,9,10,11,12,13,14,15,sum8,0,1,2,3,4,5,6,7,sum8,+,/,(100),*", "b5ff6bed-3178-aee4-42dd-c74391c02a2d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(4948);
        internal_counters.push_back(5054);
        internal_counters.push_back(5160);
        internal_counters.push_back(5266);
        internal_counters.push_back(5372);
        internal_counters.push_back(5478);
        internal_counters.push_back(5584);
        internal_counters.push_back(5690);
        internal_counters.push_back(4949);
        internal_counters.push_back(5055);
        internal_counters.push_back(5161);
        internal_counters.push_back(5267);
        internal_counters.push_back(5373);
        internal_counters.push_back(5479);
        internal_counters.push_back(5585);
        internal_counters.push_back(5691);
        internal_counters.push_back(4950);
        internal_counters.push_back(5056);
        internal_counters.push_back(5162);
        internal_counters.push_back(5268);
        internal_counters.push_back(5374);
        internal_counters.push_back(5480);
        internal_counters.push_back(5586);
        internal_counters.push_back(5692);
        internal_counters.push_back(4951);
        internal_counters.push_back(5057);
        internal_counters.push_back(5163);
        internal_counters.push_back(5269);
        internal_counters.push_back(5375);
        internal_counters.push_back(5481);
        internal_counters.push_back(5587);
        internal_counters.push_back(5693);
        internal_counters.push_back(4952);
        internal_counters.push_back(5058);
        internal_counters.push_back(5164);
        internal_counters.push_back(5270);
        internal_counters.push_back(5376);
        internal_counters.push_back(5482);
        internal_counters.push_back(5588);
        internal_counters.push_back(5694);
        internal_counters.push_back(4953);
        internal_counters.push_back(5059);
        internal_counters.push_back(5165);
        internal_counters.push_back(5271);
        internal_counters.push_back(5377);
        internal_counters.push_back(5483);
        internal_counters.push_back(5589);
        internal_counters.push_back(5695);
        internal_counters.push_back(4954);
        internal_counters.push_back(5060);
        internal_counters.push_back(5166);
        internal_counters.push_back(5272);
        internal_counters.push_back(5378);
        internal_counters.push_back(5484);
        internal_counters.push_back(5590);
        internal_counters.push_back(5696);
        internal_counters.push_back(4955);
        internal_counters.push_back(5061);
        internal_counters.push_back(5167);
        internal_counters.push_back(5273);
        internal_counters.push_back(5379);
        internal_counters.push_back(5485);
        internal_counters.push_back(5591);
        internal_counters.push_back(5697);
        internal_counters.push_back(4956);
        internal_counters.push_back(5062);
        internal_counters.push_back(5168);
        internal_counters.push_back(5274);
        internal_counters.push_back(5380);
        internal_counters.push_back(5486);
        internal_counters.push_back(5592);
        internal_counters.push_back(5698);

        c.DefineDerivedCounter("TexAveAnisotropy", "TextureUnit", "The average degree of anisotropy applied. A number between 1 and 16. The anisotropic filtering algorithm only applies samples where they are required (e.g. there will be no extra anisotropic samples if the view vector is perpendicular to the surface) so this can be much lower than the requested anisotropy.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,2,3,4,5,6,7,sum8,(2),8,9,10,11,12,13,14,15,sum8,*,+,(4),16,17,18,19,20,21,22,23,sum8,*,+,(6),24,25,26,27,28,29,30,31,sum8,*,+,(8),32,33,34,35,36,37,38,39,sum8,*,+,(10),40,41,42,43,44,45,46,47,sum8,*,+,(12),48,49,50,51,52,53,54,55,sum8,*,+,(14),56,57,58,59,60,61,62,63,sum8,*,+,(16),64,65,66,67,68,69,70,71,sum8,*,+,0,1,2,3,4,5,6,7,sum8,8,9,10,11,12,13,14,15,sum8,+,16,17,18,19,20,21,22,23,sum8,+,24,25,26,27,28,29,30,31,sum8,+,32,33,34,35,36,37,38,39,sum8,+,40,41,42,43,44,45,46,47,sum8,+,48,49,50,51,52,53,54,55,sum8,+,56,57,58,59,60,61,62,63,sum8,+,64,65,66,67,68,69,70,71,sum8,+,/", "7ca2a2b9-a4eb-ce23-d163-59147e672396");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(621);
        internal_counters.push_back(870);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("DepthStencilTestBusy", "Timing", "Percentage of time GPU spent performing depth and stencil tests relative to GPUBusy.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,/,NUM_SHADER_ENGINES,/,(100),*", "6834fb52-42e8-bb50-fd48-ec2f2904e7e0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(491);
        internal_counters.push_back(740);
        internal_counters.push_back(480);
        internal_counters.push_back(729);

        c.DefineDerivedCounter("HiZTilesAccepted", "DepthAndStencil", "Percentage of tiles accepted by HiZ and will be rendered to the depth or color buffers.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,+,2,3,+,/,(100),*", "56176f45-d7ff-813d-4f05-3b2f046067e7");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(480);
        internal_counters.push_back(729);
        internal_counters.push_back(504);
        internal_counters.push_back(753);

        c.DefineDerivedCounter("PreZTilesDetailCulled", "DepthAndStencil", "Percentage of tiles rejected because the associated prim had no contributing area.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "2,3,+,0,1,+,/,(100),*", "cad7f54d-a044-7574-c472-6f2065cbeeac");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1317);
        internal_counters.push_back(1318);
        internal_counters.push_back(1319);
        internal_counters.push_back(1320);
        internal_counters.push_back(1393);
        internal_counters.push_back(1394);
        internal_counters.push_back(1395);
        internal_counters.push_back(1396);

        c.DefineDerivedCounter("HiZQuadsCulled", "DepthAndStencil", "Percentage of quads that did not have to continue on in the pipeline after HiZ. They may be written directly to the depth buffer, or culled completely. Consistently low values here may suggest that the Z-range is not being fully utilized.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,+,2,+,3,+,4,5,+,6,+,7,+,-,0,1,+,2,+,3,+,/,(100),*", "fa0e319b-5573-6d34-5bab-904769925036");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1317);
        internal_counters.push_back(1318);
        internal_counters.push_back(1319);
        internal_counters.push_back(1320);
        internal_counters.push_back(1417);
        internal_counters.push_back(1393);
        internal_counters.push_back(1394);
        internal_counters.push_back(1395);
        internal_counters.push_back(1396);

        c.DefineDerivedCounter("PreZQuadsCulled", "DepthAndStencil", "Percentage of quads rejected based on the detailZ and earlyZ tests.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "5,6,+,7,+,8,+,4,-,0,1,+,2,+,3,+,/,(100),*", "4e77547b-ec55-5663-f034-af59be66d77d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(1417);
        internal_counters.push_back(1317);
        internal_counters.push_back(1318);
        internal_counters.push_back(1319);
        internal_counters.push_back(1320);

        c.DefineDerivedCounter("PostZQuads", "DepthAndStencil", "Percentage of quads for which the pixel shader will run and may be postZ tested.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,2,+,3,+,4,+,/,(100),*", "58f0d34b-eeb8-e8db-abce-cb72584144be");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(656);
        internal_counters.push_back(905);

        c.DefineDerivedCounter("PreZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z before shading and passed.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+", "3bfe6c4d-7422-ca03-7ea5-e67ff1a00136");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(658);
        internal_counters.push_back(907);

        c.DefineDerivedCounter("PreZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z before shading and failed stencil test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+", "df7f705e-5162-d3b5-da8b-63466cf9c4e5");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(657);
        internal_counters.push_back(906);

        c.DefineDerivedCounter("PreZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z before shading and failed Z test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+", "4484e950-f7a4-3800-bc74-78dd297f017e");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(653);
        internal_counters.push_back(902);

        c.DefineDerivedCounter("PostZSamplesPassing", "DepthAndStencil", "Number of samples tested for Z after shading and passed.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+", "4995d5d6-2330-b986-508b-fae24856f44c");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(655);
        internal_counters.push_back(904);

        c.DefineDerivedCounter("PostZSamplesFailingS", "DepthAndStencil", "Number of samples tested for Z after shading and failed stencil test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+", "ae558af4-f4be-3dd4-7316-b2c4dcf0def8");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(654);
        internal_counters.push_back(903);

        c.DefineDerivedCounter("PostZSamplesFailingZ", "DepthAndStencil", "Number of samples tested for Z after shading and failed Z test.", kGpaDataTypeFloat64, kGpaUsageTypeItems, internal_counters, "0,1,+", "b3684c94-814a-c695-c85d-a5b6ab798b35");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(523);
        internal_counters.push_back(772);
        internal_counters.push_back(976);

        c.DefineDerivedCounter("ZUnitStalled", "DepthAndStencil", "The percentage of GPUTime the depth buffer spends waiting for the color buffer to be ready to accept data. High figures here indicate a bottleneck in color buffer operations.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,max,2,/,NUM_SHADER_ENGINES,/,(100),*", "5e86c3ad-1726-3157-1d01-7ed188bf854d");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(525);
        internal_counters.push_back(774);
        internal_counters.push_back(532);
        internal_counters.push_back(781);

        c.DefineDerivedCounter("DBMemRead", "DepthAndStencil", "Number of bytes read from the depth buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,+,(256),*,2,3,+,(32),*,+", "dcdb4ee7-bd50-00f7-c028-9e5f4ce888c0");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(537);
        internal_counters.push_back(786);
        internal_counters.push_back(540);
        internal_counters.push_back(789);

        c.DefineDerivedCounter("DBMemWritten", "DepthAndStencil", "Number of bytes written to the depth buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,+,(32),*,2,3,+,(32),*,+", "de5717f8-8a49-ee44-4645-10de51b37dcf");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(127);
        internal_counters.push_back(342);

        c.DefineDerivedCounter("CBMemRead", "ColorBuffer", "Number of bytes read from the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,+,(32),*", "84b531d8-a1f8-7f49-7c27-7bc97801f1e6");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(117);
        internal_counters.push_back(332);

        c.DefineDerivedCounter("CBMemWritten", "ColorBuffer", "Number of bytes written to the color buffer.", kGpaDataTypeFloat64, kGpaUsageTypeBytes, internal_counters, "0,1,+,(32),*", "550f8ff8-60b6-a6bf-87d0-25ac9e87de70");
    }
    {
        vector<GpaUInt32> internal_counters;
        internal_counters.push_back(161);
        internal_counters.push_back(376);
        internal_counters.push_back(7);
        internal_counters.push_back(222);

        c.DefineDerivedCounter("CBSlowPixelPct", "ColorBuffer", "Percentage of pixels written to the color buffer using a half-rate or quarter-rate format.", kGpaDataTypeFloat64, kGpaUsageTypePercentage, internal_counters, "0,1,+,2,3,+,/,(100),*,(100),min", "5775943f-0313-7e52-9638-b24a449197bc");
    }
}

