cmake_minimum_required(VERSION 2.8)
PROJECT(lambda-ray C CXX)

#file(GLOB_RECURSE SOURCES "./src" "*.cpp")
#file(GLOB_RECURSE HEADERS "./src" "*.hpp")

set( SOURCES
 src/main.cpp
 src/Components/Mesh.cpp
 src/Resources/Resource.cpp
 src/Resources/MeshResource.cpp
 src/Util/BasicSettingsManager.cpp
 )

set( HEADERS
 src/Components/Component.hpp
 src/Components/Mesh.hpp
 src/Resources/Resource.hpp
 src/Resources/MeshResource.hpp
 src/Util/BasicSettingsManager.hpp
 )

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
#set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -DUSE_CPP14")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wextra")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pedantic")

find_package(OpenCL REQUIRED)
include_directories(${OpenCL_INCLUDE_DIRS})

add_executable(lambdaray ${SOURCES} ${HEADERS})
target_link_libraries(lambdaray ${OPENCL_LIBRARIES})