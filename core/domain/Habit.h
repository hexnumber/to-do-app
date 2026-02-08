#pragma once

#include <QString>
#include <QVector>
#include "HabitCheckIn.h"
class Habit
{
    public:
        explicit Habit(const QString &name);

        QString GetName() const;
        QVector<HabitCheckIn> GetCheckIns();
        void AddCheckIn(const HabitCheckIn &checkIn);
    
    private:
        QString name_;
        QVector<HabitCheckIn> checkIns_;
};