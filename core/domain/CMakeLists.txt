find_package(Qt6 REQUIRED COMPONENTS Core)

add_library(core_domain
    Goal.h
    Habit.h
    HabitCheckIn.h
    HabitCheckIn.cpp
)

target_link_libraries(core_domain
    PUBLIC Qt6::Core
)