cmake_minimum_required(VERSION 3.0)

project(FLTKUI LANGUAGES C CXX VERSION 0.5 DESCRIPTION "Console module for UniversalUI")

set(CMAKE_CXX_STANDARD 14)

find_package(FLTK REQUIRED)
include_directories(${FLTK_INCLUDE_DIRS})

file(GLOB_RECURSE FLTKUI_HDRS "include/*.hpp")
file(GLOB_RECURSE FLTKUI_SRCS "src/*.cpp")

configure_file( ${PROJECT_SOURCE_DIR}/config.h.in ${PROJECT_SOURCE_DIR}/include/config.h)
add_library(FLTKUI SHARED ${FLTKUI_HDRS} ${FLTKUI_SRCS})
set_target_properties(FLTKUI PROPERTIES SOVERSION 1)
target_include_directories(FLTKUI PUBLIC include)
target_link_libraries(FLTKUI clog)
target_link_libraries(FLTKUI UniversalUI)
target_link_libraries(FLTKUI ${FLTK_LIBRARIES})
