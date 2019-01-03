cmake_minimum_required(VERSION 3.12)
project(study_c)

set(CMAKE_CXX_STANDARD 14)
set(INC_DIR /usr/local/include)
set(LINK_DIR /usr/local/lib)


include_directories(${INC_DIR})
link_directories(${LINK_DIR})
include_directories(c_primer_plus/function)


add_executable(letheadl c_primer_plus/function/letheadl.c)
add_executable(use_hotel c_primer_plus/function/use_hotel.c)

target_sources(use_hotel PRIVATE
        "c_primer_plus/function/hotel.h"
        "c_primer_plus/function/hotel.c")