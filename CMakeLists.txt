cmake_minimum_required(VERSION 3.16)

project(CuteFaceSwap)

find_package(Qt5 COMPONENTS Quick Multimedia REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(target cutefaceswap)
set(headers faceswapfilter.h faceswapfilterrunnable.h facedetector.h facecropper.h imagemerger.h)
set(sources main.cpp faceswapfilter.cpp faceswapfilterrunnable.cpp facedetector.cpp facecropper.cpp imagemerger.cpp)
set(resources resources.qrc)
add_executable(${target} ${sources} ${headers} ${resources})
target_link_libraries(${target} PRIVATE Qt5::Quick Qt5::Multimedia)
