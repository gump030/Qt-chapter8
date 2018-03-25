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

	QDirModel model;		//����һ��QDirModel����Ϊ���ݷ�����׼����QDirModel���������ù���

	QTreeView tree;			//�������ֲ�ͬ��View
	QListView list;
	QTableView table;

	tree.setModel(&model);	//����View�����ModelΪQDirModel�����model
	list.setModel(&model);
	table.setModel(&model);

	tree.setSelectionMode(QAbstractItemView::MultiSelection);	//����QTreeView�����ѡ��ʽΪ��ѡ
	list.setSelectionModel(tree.selectionModel());				//QListView������QTreeView����ʹ����ͬ��ѡ��ģ��
	table.setSelectionModel(tree.selectionModel());			//QTableView������QTreeView����ʹ����ͬ��ģ��

	//˫��tree��ĳ��Ŀ¼ʱ��QListView��QTableView��������ʾ��ѡ��Ŀ¼�µ������ļ���Ŀ¼
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

