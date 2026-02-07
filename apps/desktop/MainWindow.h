#pragma once

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private slots:
        void showDashboard();
        void toggleGoals();
        void showProfile();
        void showGoal1();
        void showGoal2();

    private:
        QLabel *contentLabel;
        QPushButton *goal1Btn;
        QPushButton *goal2Btn;
        bool goalsExpanded = false;
        void setupUI();
};