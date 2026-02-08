#pragma once

#include <QDate>

class HabitCheckIn
{
public:
    explicit HabitCheckIn(const QDate &date);

    QDate GetDate() const { return date_; }
    bool IsCompleted() const { return completed_; }

private:
    QDate date_;
    bool completed_;
};