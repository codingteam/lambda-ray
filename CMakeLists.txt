cmake_minimum_required(VERSION 2.8)
PROJECT(lambda-ray C CXX)

file(GLOB_RECURSE SOURCES "./src" "*.cpp")
file(GLOB_RECURSE HEADERS "./src" "*.hpp")

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  # 
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra")
 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Intel")
  # 
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "MSVC")
  # 
endif()

find_package(OpenCL REQUIRED)
include_directories(${OpenCL_INCLUDE_DIRS})

add_executable(lambdaray ${SOURCES} ${HEADERS})
target_link_libraries(lambdaray ${OPENCL_LIBRARIES})