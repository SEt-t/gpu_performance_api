## Copyright (c) 2018-2020 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(DEPTH "../../")

set(GPA_PROJECT_NAME GPUPerfAPICounterGenerator-CL)
set(ProjectName ${GPA_PROJECT_NAME})

set(CMAKE_INCLUDE_CURRENT_DIR ON)
include(${GPA_CMAKE_MODULES_DIR}/common.cmake)

set(COUNTER_GENERATOR_HEADERS_CL
    gpa_counter_generator_cl.h)

set(COUNTER_GENERATOR_SRC_CL
    gpa_counter_generator_cl.cc)

set(COUNTER_SCHEDULER_HEADERS_CL
    gpa_counter_scheduler_cl.h)

set(COUNTER_SCHEDULER_SRC_CL
    gpa_counter_scheduler_cl.cc)

if(EXISTS ${GPA_AUTOGEN_SRC_COUNTER_GENERATOR})
    include(${GPA_AUTOGEN_SRC_COUNTER_GENERATOR}/gpa_hw_counter_cl.cmake)
    include(${GPA_AUTOGEN_SRC_COUNTER_GENERATOR}/public_counter_definitions_cl.cmake)

    set(API_HEADER_FILES ${HW_COUNTER_HEADERS_CL} ${PUBLIC_COUNTER_DEF_HEADERS_CL} ${ADDITIONAL_COUNTER_DEF_HEADERS_CL})
    set(API_SOURCE_FILES ${HW_COUNTER_SRC_CL} ${PUBLIC_COUNTER_DEF_SRC_CL} ${ADDITIONAL_COUNTER_DEF_SRC_CL})

    if(WIN32)
        source_group("Source Files\\${HARDWARE_COUNTER_VS_FILTER}\\AutoGenerated" FILES ${HW_COUNTER_HEADERS_CL} ${HW_COUNTER_SRC_CL})
        source_group("Source Files\\${DERIVED_COUNTER_VS_FILTER}\\AutoGenerated" FILES ${PUBLIC_COUNTER_DEF_HEADERS_CL}
                                                                                           ${ADDITIONAL_COUNTER_DEF_HEADERS_CL}
                                                                                           ${PUBLIC_COUNTER_DEF_SRC_CL}
                                                                                           ${ADDITIONAL_COUNTER_DEF_SRC_CL})
    endif()
endif()

set(SOURCES ${COUNTER_GENERATOR_HEADERS_CL}
            ${COUNTER_GENERATOR_SRC_CL}
            ${COUNTER_SCHEDULER_HEADERS_CL}
            ${COUNTER_SCHEDULER_SRC_CL}
            ${API_HEADER_FILES}
            ${API_SOURCE_FILES}
            ${ADDITIONAL_COUNTERS_CL})

if(WIN32)
    add_compile_options(/bigobj)
 else()
     add_compile_options(-Wno-write-strings)
 endif()

ADD_STATIC_LIBRARY(${GPA_PROJECT_NAME})
ADD_LINKER_FLAGS()
target_link_libraries(${GPA_PROJECT_NAME} GPUPerfAPICounterGenerator-Common)

if(WIN32)
        source_group("Source Files\\${COUNTER_GENERATOR_VS_FILTER}" FILES ${COUNTER_GENERATOR_HEADERS_CL} ${COUNTER_GENERATOR_SRC_CL})
        source_group("Source Files\\${COUNTER_SCHEDULER_VS_FILTER}" FILES ${COUNTER_SCHEDULER_HEADERS_CL} ${COUNTER_SCHEDULER_SRC_CL})
endif()