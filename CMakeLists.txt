cmake_minimum_required(VERSION 2.8)
file(GLOB_RECURSE SOURCES "src/*.cpp")
include_directories("src")

add_executable(lambdaray ${SOURCES})

