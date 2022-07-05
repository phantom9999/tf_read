cmake_minimum_required(VERSION 3.22)
project(tf_read)

# protoc --cpp_out=. `find . -name '*.proto'`
# protoc --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` tensorflow_serving/apis/prediction_service.proto

set(CMAKE_CXX_STANDARD 17)

add_compile_definitions(
        __linux__
)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)
find_package(absl REQUIRED)
find_package(Protobuf REQUIRED)
find_package(Eigen3 REQUIRED)
include_directories(${absl_INCLUDE_DIR})
include_directories(${protobuf_INCLUDE_DIR})
get_filename_component(Eigen3_INCLUDE_DIR_P ${Eigen3_INCLUDE_DIR} DIRECTORY)
include_directories(${Eigen3_INCLUDE_DIR_P})

#include(1.15.cmake)

include(2.9.cmake)

