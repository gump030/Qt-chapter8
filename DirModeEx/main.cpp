#include "DirModeEx.h"
#include <QApplication>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QItemSelectionModel>

#include <QDirModel>
#include <QTreeView>
#include <QListView>
#include <QTableView>
#include <QSplitter>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QDirModel model;		//建立一个QDirModel对象，为数据访问做准备，QDirModel还可以设置过滤

	QTreeView tree;			//创建三种不同的View
	QListView list;
	QTableView table;

	tree.setModel(&model);	//设置View对象的Model为QDirModel对象的model
	list.setModel(&model);
	table.setModel(&model);

	tree.setSelectionMode(QAbstractItemView::MultiSelection);	//设置QTreeView对象的选择方式为多选
	list.setSelectionModel(tree.selectionModel());				//QListView对象与QTreeView对象使用相同的选择模型
	table.setSelectionModel(tree.selectionModel());			//QTableView对象与QTreeView对象使用相同的模型

	//双击tree下某个目录时，QListView和QTableView对象中显示此选定目录下的所有文件和目录
	QObject::connect(&tree, SIGNAL(doubleClicked(QModelIndex)), &list, SLOT(setRootIndex(QModelIndex)));
	QObject::connect(&tree, SIGNAL(doubleClicked(QModelIndex)), &table, SLOT(setRootIndex(QModelIndex)));
	
	QSplitter *splitter = new QSplitter;
	splitter->addWidget(&tree);
	splitter->addWidget(&list);
	splitter->addWidget(&table);
	splitter->setWindowTitle(QObject::tr("Model/View"));
	splitter->show();

	return a.exec();
}

