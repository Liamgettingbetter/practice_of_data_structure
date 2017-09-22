cmake_minimum_required(VERSION 3.8)
project(practice_of_data_structure)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp liam.cpp operator_overloading.cpp sparse_vector.cpp homework3.cpp)
add_executable(practice_of_data_structure ${SOURCE_FILES} liam.cpp)