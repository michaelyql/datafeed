cmake_minimum_required(VERSION 3.27)

project(datafeed)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(app)
add_subdirectory(engine)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE app engine)
