/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "render.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionPlatform_setup;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QPushButton *inputConfig;
    QLabel *label_3;
    QComboBox *outputSelect;
    QLabel *label;
    QLabel *label_2;
    QPushButton *algConfig;
    QPushButton *outputConfig;
    QComboBox *algSelect;
    QComboBox *inputSelect;
    QLabel *outputStatus;
    QLabel *inputStatus;
    QPushButton *startButton;
    Render *renderwindow;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(671, 533);
        MainWindow->setMaximumSize(QSize(1024, 1024));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionPlatform_setup = new QAction(MainWindow);
        actionPlatform_setup->setObjectName("actionPlatform_setup");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        inputConfig = new QPushButton(centralwidget);
        inputConfig->setObjectName("inputConfig");

        gridLayout_2->addWidget(inputConfig, 3, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        outputSelect = new QComboBox(centralwidget);
        outputSelect->setObjectName("outputSelect");

        gridLayout_2->addWidget(outputSelect, 1, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        algConfig = new QPushButton(centralwidget);
        algConfig->setObjectName("algConfig");

        gridLayout_2->addWidget(algConfig, 3, 1, 1, 1);

        outputConfig = new QPushButton(centralwidget);
        outputConfig->setObjectName("outputConfig");

        gridLayout_2->addWidget(outputConfig, 3, 2, 1, 1);

        algSelect = new QComboBox(centralwidget);
        algSelect->setObjectName("algSelect");

        gridLayout_2->addWidget(algSelect, 1, 1, 1, 1);

        inputSelect = new QComboBox(centralwidget);
        inputSelect->setObjectName("inputSelect");

        gridLayout_2->addWidget(inputSelect, 1, 0, 1, 1);

        outputStatus = new QLabel(centralwidget);
        outputStatus->setObjectName("outputStatus");

        gridLayout_2->addWidget(outputStatus, 2, 2, 1, 1);

        inputStatus = new QLabel(centralwidget);
        inputStatus->setObjectName("inputStatus");
        inputStatus->setAutoFillBackground(false);

        gridLayout_2->addWidget(inputStatus, 2, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");

        gridLayout->addWidget(startButton, 1, 0, 1, 1);

        renderwindow = new Render(centralwidget);
        renderwindow->setObjectName("renderwindow");

        gridLayout->addWidget(renderwindow, 0, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 671, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionPlatform_setup);
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Open6DOFSim", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionPlatform_setup->setText(QCoreApplication::translate("MainWindow", "Platform setup", nullptr));
        inputConfig->setText(QCoreApplication::translate("MainWindow", "Configure", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Algorithm", nullptr));
        algConfig->setText(QCoreApplication::translate("MainWindow", "Configure", nullptr));
        outputConfig->setText(QCoreApplication::translate("MainWindow", "Configure", nullptr));
        outputStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        inputStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
