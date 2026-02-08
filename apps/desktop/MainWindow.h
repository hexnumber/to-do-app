#pragma once

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private slots:
        void showDashboard();
        void toggleGoals();
        void toggleHabits();
        void showProfile();
        void showHabit1();
        void showHabit2();
        void showGoal1();
        void showGoal2();

    private:
        QLabel *contentLabel;
        QPushButton *goal1Btn;
        QPushButton *goal2Btn;
        QPushButton *habit1Btn;
        QPushButton *habit2Btn;
        bool goalsExpanded = false;
        bool habitsExpanded = false;
        void setupUI();
};