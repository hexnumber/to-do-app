#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Productivity Tracker");

    auto *label = new QLabel("Welcome to the Productivity Tracker!", this);
    label->setAlignment(Qt::AlignCenter);
    setCentralWidget(label);
}

MainWindow::~MainWindow() = default;