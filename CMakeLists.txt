cmake_minimum_required(VERSION 3.20)
project(angle_test_quat)

set(CMAKE_CXX_STANDARD 14)

find_package (Eigen3 3.3 REQUIRED NO_MODULE)

include_directories(${EIGEN3_INCLUDE_DIR})

add_executable(angle_test_quat main.cpp)
target_link_libraries (angle_test_quat Eigen3::Eigen)
