#include "mainform.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Mainform w;
	w.show();
	return a.exec();
}
