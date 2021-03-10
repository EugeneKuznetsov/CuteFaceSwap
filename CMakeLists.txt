cmake_minimum_required(VERSION 3.16)

project(CuteFaceSwap)

find_package(Qt5 COMPONENTS Quick REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(target cutefaceswap)
set(headers )
set(sources main.cpp)
set(resources resources.qrc)
add_executable(${target} ${sources} ${headers} ${resources})
target_link_libraries(${target} PRIVATE Qt5::Quick)
