/********************************************************************************
** Form generated from reading UI file 'open6dofsimejUOcm.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef OPEN6DOFSIMEJUOCM_H
#define OPEN6DOFSIMEJUOCM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_open6dofsimClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *open6dofsimClass)
    {
        if (open6dofsimClass->objectName().isEmpty())
            open6dofsimClass->setObjectName("open6dofsimClass");
        open6dofsimClass->resize(600, 400);
        centralWidget = new QWidget(open6dofsimClass);
        centralWidget->setObjectName("centralWidget");
        open6dofsimClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(open6dofsimClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 33));
        open6dofsimClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(open6dofsimClass);
        mainToolBar->setObjectName("mainToolBar");
        open6dofsimClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(open6dofsimClass);
        statusBar->setObjectName("statusBar");
        open6dofsimClass->setStatusBar(statusBar);

        retranslateUi(open6dofsimClass);

        QMetaObject::connectSlotsByName(open6dofsimClass);
    } // setupUi

    void retranslateUi(QMainWindow *open6dofsimClass)
    {
        open6dofsimClass->setWindowTitle(QCoreApplication::translate("open6dofsimClass", "open6dofsim", nullptr));
    } // retranslateUi

};

namespace Ui {
    class open6dofsimClass: public Ui_open6dofsimClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // OPEN6DOFSIMEJUOCM_H
