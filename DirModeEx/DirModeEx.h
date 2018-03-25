#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DirModeEx.h"

class DirModeEx : public QMainWindow
{
	Q_OBJECT

public:
	DirModeEx(QWidget *parent = Q_NULLPTR);

private:
	Ui::DirModeExClass ui;
};
