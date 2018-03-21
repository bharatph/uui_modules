cmake_minimum_required(VERSION 3.0)

project(CharacterUI LANGUAGES C CXX VERSION 0.5 DESCRIPTION "Console module for UniversalUI")

file(GLOB_RECURSE CharacterUI_HDRS "include/*.hpp")
file(GLOB_RECURSE CharacterUI_SRCS "src/*.cpp")

configure_file( ${PROJECT_SOURCE_DIR}/config.h.in ${PROJECT_SOURCE_DIR}/include/config.h)
add_library(CharacterUI STATIC ${CharacterUI_HDRS} ${CharacterUI_SRCS})
target_link_libraries(CharacterUI UniversalUI)
set_target_properties(CharacterUI PROPERTIES SOVERSION 1)
target_include_directories(CharacterUI PUBLIC include)
