#include "MainWindow.h"
#include <QtWidgets/QApplication>
#include "Model.h"
#include <QTableView>
#include <QTextCodec>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
	ModelEx modelEx;
	QTableView view;
	view.setModel(&modelEx);
	view.setWindowTitle(QObject::tr("modelEx"));
	view.resize(400, 400);
	view.show();

	return a.exec();
}
