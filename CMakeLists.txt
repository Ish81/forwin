cmake_minimum_required(VERSION 3.15)
project(wynbridge)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(wynbridge src/config/hello_app.cpp)
target_link_libraries(wynbridge ${CONAN_LIBS})
