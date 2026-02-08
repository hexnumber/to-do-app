find_package(Qt6 REQUIRED COMPONENTS Core)

add_library(core_domain
    Goal.h
    Habit.h
    Habit.cpp
    HabitCheckIn.h
    HabitCheckIn.cpp
)

target_include_directories(core_domain
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(core_domain
    PUBLIC Qt6::Core
)