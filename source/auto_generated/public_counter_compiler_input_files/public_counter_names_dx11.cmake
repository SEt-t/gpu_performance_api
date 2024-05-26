## Copyright (c) 2023 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.10)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(PUBLIC_COUNTER_NAMES_DX11
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx10.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx103.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx103_gfx1031_gfx1032.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx11.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx11_gfx1103.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx6.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx7.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx8.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx8_baffin.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx8_carrizo.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx8_ellesmere.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx8_fiji.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx8_iceland.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx8_tonga.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx9.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx9_gfx904.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx9_gfx906.txt
${CMAKE_CURRENT_LIST_DIR}/public_counter_names_dx11_gfx9_gfx909.txt)