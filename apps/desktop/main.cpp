#include <QApplication>

#include "MainWindow.h"
#include "core/domain/Habit.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	MainWindow window;
	window.show();

	//test objects
	Habit gym("gym");
	gym.AddCheckIn(HabitCheckIn(QDate::currentDate()));

	return app.exec();
}