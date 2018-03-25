/********************************************************************************
** Form generated from reading UI file 'DirModeEx.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIRMODEEX_H
#define UI_DIRMODEEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DirModeExClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DirModeExClass)
    {
        if (DirModeExClass->objectName().isEmpty())
            DirModeExClass->setObjectName(QStringLiteral("DirModeExClass"));
        DirModeExClass->resize(600, 400);
        menuBar = new QMenuBar(DirModeExClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        DirModeExClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DirModeExClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DirModeExClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DirModeExClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        DirModeExClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DirModeExClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DirModeExClass->setStatusBar(statusBar);

        retranslateUi(DirModeExClass);

        QMetaObject::connectSlotsByName(DirModeExClass);
    } // setupUi

    void retranslateUi(QMainWindow *DirModeExClass)
    {
        DirModeExClass->setWindowTitle(QApplication::translate("DirModeExClass", "DirModeEx", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DirModeExClass: public Ui_DirModeExClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIRMODEEX_H
