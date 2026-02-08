#include "Habit.h"

Habit::Habit(const QString &name)
    : name_(name)
{

}

QString Habit::GetName() const
{
    return name_;
}

QVector<HabitCheckIn> Habit::GetCheckIns()
{
    return checkIns_;
}

void Habit::AddCheckIn(const HabitCheckIn &checkIn)
{
    checkIns_.append(checkIn);
}