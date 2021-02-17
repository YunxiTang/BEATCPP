cmake_minimum_required(VERSION 3.4.0)

project(test_math)

include_directories(include)

aux_source_directory(src VAR)

add_executable(${PROJECT_NAME} ${VAR})

