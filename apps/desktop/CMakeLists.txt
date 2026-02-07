find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(productivity_desktop
    main.cpp
    MainWindow.h
    MainWindow.cpp
)

target_link_libraries(productivity_desktop
    Qt6::Widgets
)