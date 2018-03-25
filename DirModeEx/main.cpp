#include "DirModeEx.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	DirModeEx w;
	w.show();
	return a.exec();
}
