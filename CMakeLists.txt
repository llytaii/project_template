cmake_minimum_required(VERSION 3.18)

set(PROJECT_NAME "template_project")
set(CMAKE_CXX_STANDARD 20)


add_executable(${PROJECT_NAME} src/main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC include)
