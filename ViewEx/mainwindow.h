#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include <QStandardItemModel>
#include <QTableView>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QSplitter>
#include "histogramview.h"

class mainwindow : public QMainWindow
{
	Q_OBJECT

public:
	mainwindow(QWidget *parent = 0);
	void createAction();
	void createMenu();
	void setupModel();
	void setupView();
	void openFile(QString);
private:
	QMenu * fileMenu;
	QAction *openAct;

	QStandardItemModel *model;
	QTableView *table;
	QSplitter *splitter;
	HistogramView *histogram;
	public slots:
	void slotOpen();
};
