cmake_minimum_required(VERSION 3.21)

project(to-do-app LANGUAGES CXX)

set(Qt6_DIR "C:\\Qt\\6.10.2\\msvc2022_64\\lib\\cmake\\Qt6")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_subdirectory(core/domain)

add_executable(to-do-app
    apps/desktop/main.cpp
    apps/desktop/MainWindow.cpp
    apps/desktop/MainWindow.h
    apps/desktop/MainWindow.ui
)

target_include_directories(to-do-app
    PRIVATE ${CMAKE_SOURCE_DIR}
)

target_link_libraries(to-do-app
    PRIVATE Qt6::Widgets
    PRIVATE core_domain
)