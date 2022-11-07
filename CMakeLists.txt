cmake_minimum_required(VERSION 3.18)

set(PROJECT_NAME "template_project")
project(${PROJECT_NAME} C CXX)
set(CMAKE_CXX_STANDARD 20)

add_executable(${PROJECT_NAME} src/main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC tools)

# fmt
find_package(fmt)
target_link_libraries(${PROJECT_NAME} fmt::fmt)

# catch2
find_package(Catch2 2 REQUIRED)

add_executable(tests tests/tests.cpp)
target_include_directories(tests PUBLIC include)
# target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

# enable make test
include(CTest)
include(Catch)
catch_discover_tests(tests)
