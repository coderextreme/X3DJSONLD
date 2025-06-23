cmake_minimum_required(VERSION 3.22)
project(X3DJSONLD)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

option(QUARTER_USE_QT6 "Prefer Qt6 over Qt5 if available" ON)

find_package(Qt6 COMPONENTS Widgets)

include_directories(${CMAKE_CURRENT_BINARY_DIR} "/usr/include/x86_64-linux-gnu/qt6/QtWidgets/" "/usr/include/x86_64-linux-gnu/qt6/QtOpenGLWidgets/" "/usr/include/x86_64-linux-gnu/qt6/QtCore" "/usr/include/x86_64-linux-gnu/qt6/" "/usr/include/x86_64-linux-gnu/qt6/QtGui/")

set(SOURCE_DIR "/home/yottzumm/quarter/src/quarter/net/coderextreme/data/")

add_executable(Rubik  "${SOURCE_DIR}/rubik.cpp")
target_compile_options(Rubik PRIVATE -fPIC)
set_target_properties(Rubik PROPERTIES POSITION_INDEPENDENT_CODE ON)
target_link_libraries(Rubik PUBLIC Quarter Coin Qt6Widgets Qt6Core)
