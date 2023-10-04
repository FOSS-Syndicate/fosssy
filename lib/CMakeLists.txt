cmake_minimum_required(VERSION 3.22)

file(GLOB_RECURSE libfosssyc.sources "*.c")
add_library(libfosssyc ${libfosssyc.sources})
target_include_directories(libfosssyc PUBLIC "${PROJECT_SOURCE_DIR}/include")