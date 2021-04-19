cmake_minimum_required(VERSION 3.17)
project(mCalc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(mCalc main.cpp)
target_link_libraries(mCalc Qt5::Widgets)