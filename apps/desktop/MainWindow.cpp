#include "MainWindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Productivity Tracker");
    setFixedSize(1000, 500);
    setupUI();
}

MainWindow::~MainWindow() = default;

void MainWindow::setupUI()
{
    auto *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    auto *mainLayout = new QHBoxLayout(centralWidget);
    mainLayout->setContentsMargins(0, 0, 0, 0);
    mainLayout->setSpacing(0);

    auto *sidebar = new QWidget();
    sidebar->setFixedWidth(200);
    sidebar->setStyleSheet("QWidget { background-color: #2c3e50; }");

    auto *sidebarLayout = new QVBoxLayout(sidebar);
    sidebarLayout->setContentsMargins(10, 20, 10, 10);
    sidebarLayout->setSpacing(10);

    auto *dashboardBtn = new QPushButton("Dashboard");
    dashboardBtn->setFixedHeight(40);
    dashboardBtn->setStyleSheet(
        "QPushButton { "
        "  background-color: #34495e; "
        "  color: white; "
        "  border: none; "
        "  border-radius: 5px; "
        "  font-size: 14px; "
        "  text-align: left; "
        "  padding-left: 15px; "
        "} "
        "QPushButton:hover { "
        "  background-color: #3d566e; "
        "}"
    );
    connect(dashboardBtn, &QPushButton::clicked, this, &MainWindow::showDashboard);

    auto *habitsBtn = new QPushButton("Habits ▼");
    habitsBtn->setFixedHeight(40);
    habitsBtn->setStyleSheet(
        "QPushButton { "
        "  background-color: #34495e; "
        "  color: white; "
        "  border: none; "
        "  border-radius: 5px; "
        "  font-size: 14px; "
        "  text-align: left; "
        "  padding-left: 15px; "
        "} "
        "QPushButton:hover { "
        "  background-color: #3d566e; "
        "}"
    );
    connect(habitsBtn, &QPushButton::clicked, this, &MainWindow::toggleHabits);

    habit1Btn = new QPushButton("  Habit 1");
    habit1Btn->setFixedHeight(35);
    habit1Btn->setStyleSheet(
        "QPushButton { "
        "  background-color: #1a252f; "
        "  color: #bdc3c7; "
        "  border: none; "
        "  border-radius: 3px; "
        "  font-size: 13px; "
        "  text-align: left; "
        "  padding-left: 25px; "
        "} "
        "QPushButton:hover { "
        "  background-color: #34495e; "
        "  color: white; "
        "}"
    );
    habit1Btn->hide();
    connect(habit1Btn, &QPushButton::clicked, this, &MainWindow::showHabit1);

    habit2Btn = new QPushButton("  Habit 2");
    habit2Btn->setFixedHeight(35);
    habit2Btn->setStyleSheet(
        "QPushButton { "
        "  background-color: #1a252f; "
        "  color: #bdc3c7; "
        "  border: none; "
        "  border-radius: 3px; "
        "  font-size: 13px; "
        "  text-align: left; "
        "  padding-left: 25px; "
        "} "
        "QPushButton:hover { "
        "  background-color: #34495e; "
        "  color: white; "
        "}"
    );
    habit2Btn->hide();
    connect(habit2Btn, &QPushButton::clicked, this, &MainWindow::showHabit2);

    auto *goalsBtn = new QPushButton("Goals ▼");
    goalsBtn->setFixedHeight(40);
    goalsBtn->setStyleSheet(
        "QPushButton { "
        "  background-color: #34495e; "
        "  color: white; "
        "  border: none; "
        "  border-radius: 5px; "
        "  font-size: 14px; "
        "  text-align: left; "
        "  padding-left: 15px; "
        "} "
        "QPushButton:hover { "
        "  background-color: #3d566e; "
        "}"
    );
    connect(goalsBtn, &QPushButton::clicked, this, &MainWindow::toggleGoals);

    goal1Btn = new QPushButton("  Goal 1");
    goal1Btn->setFixedHeight(35);
    goal1Btn->setStyleSheet(
        "QPushButton { "
        "  background-color: #1a252f; "
        "  color: #bdc3c7; "
        "  border: none; "
        "  border-radius: 3px; "
        "  font-size: 13px; "
        "  text-align: left; "
        "  padding-left: 25px; "
        "} "
        "QPushButton:hover { "
        "  background-color: #34495e; "
        "  color: white; "
        "}"
    );
    goal1Btn->hide();
    connect(goal1Btn, &QPushButton::clicked, this, &MainWindow::showGoal1);

    goal2Btn = new QPushButton("  Goal 2");
    goal2Btn->setFixedHeight(35);
    goal2Btn->setStyleSheet(
        "QPushButton { "
        "  background-color: #1a252f; "
        "  color: #bdc3c7; "
        "  border: none; "
        "  border-radius: 3px; "
        "  font-size: 13px; "
        "  text-align: left; "
        "  padding-left: 25px; "
        "} "
        "QPushButton:hover { "
        "  background-color: #34495e; "
        "  color: white; "
        "}"
    );
    goal2Btn->hide();
    connect(goal2Btn, &QPushButton::clicked, this, &MainWindow::showGoal2);

    auto *profileBtn = new QPushButton("Profile");
    profileBtn->setFixedHeight(40);
    profileBtn->setStyleSheet(
        "QPushButton { "
        "  background-color: #34495e; "
        "  color: white; "
        "  border: none; "
        "  border-radius: 5px; "
        "  font-size: 14px; "
        "  text-align: left; "
        "  padding-left: 15px; "
        "} "
        "QPushButton:hover { "
        "  background-color: #3d566e; "
        "}"
    );
    connect(profileBtn, &QPushButton::clicked, this, &MainWindow::showProfile);

    sidebarLayout->addWidget(dashboardBtn);
    sidebarLayout->addWidget(habitsBtn);
    sidebarLayout->addWidget(habit1Btn);
    sidebarLayout->addWidget(habit2Btn);
    sidebarLayout->addWidget(goalsBtn);
    sidebarLayout->addWidget(goal1Btn);
    sidebarLayout->addWidget(goal2Btn);
    sidebarLayout->addWidget(profileBtn);
    sidebarLayout->addStretch();

    auto *contentArea = new QWidget();
    contentArea->setStyleSheet("QWidget { background-color: #ecf0f1; }");

    auto *contentLayout = new QVBoxLayout(contentArea);
    contentLayout->setContentsMargins(40, 40, 40, 40);

    contentLabel = new QLabel("Welcome to Dashboard");
    contentLabel->setStyleSheet(
        "QLabel { "
        "  font-size: 24px; "
        "  color: #2c3e50; "
        "  background-color: white; "
        "  padding: 30px; "
        "  border-radius: 10px; "
        "}"
    );
    contentLabel->setAlignment(Qt::AlignCenter);

    contentLayout->addWidget(contentLabel);

    mainLayout->addWidget(sidebar);
    mainLayout->addWidget(contentArea, 1);

    showDashboard();
}

void MainWindow::showDashboard()
{
    contentLabel->setText("Dashboard Content\n\nView your productivity statistics and recent activity here.");
}

void MainWindow::toggleHabits()
{
    habitsExpanded = !habitsExpanded;
    habit1Btn->setVisible(habitsExpanded);
    habit2Btn->setVisible(habitsExpanded);
    
}

void MainWindow::toggleGoals()
{
    goalsExpanded = !goalsExpanded;
    goal1Btn->setVisible(goalsExpanded);
    goal2Btn->setVisible(goalsExpanded);
}

void MainWindow::showProfile()
{
    contentLabel->setText("Profile\n\nManage your profile information and preferences.");
}

void MainWindow::showHabit1()
{
    contentLabel->setText("Habit 1\n\nView and manage your first habit.");
}

void MainWindow::showHabit2()
{
    contentLabel->setText("Habit 2\n\nView and manage your second habit.");
}

void MainWindow::showGoal1()
{
    contentLabel->setText("Goal 1\n\nView and manage your first goal.");
}

void MainWindow::showGoal2()
{
    contentLabel->setText("Goal 2\n\nView and manage your second goal.");
}