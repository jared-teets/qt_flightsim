/********************************************************************************
** Form generated from reading UI file 'configManualWewYJa.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CONFIGMANUALWEWYJA_H
#define CONFIGMANUALWEWYJA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_configManual
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QSlider *yaw;
    QSlider *pitch;
    QSlider *roll;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QSlider *right;
    QLabel *label_3;
    QSlider *forward;
    QSlider *high;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *configManual)
    {
        if (configManual->objectName().isEmpty())
            configManual->setObjectName("configManual");
        configManual->resize(400, 406);
        gridLayout = new QGridLayout(configManual);
        gridLayout->setObjectName("gridLayout");
        groupBox_2 = new QGroupBox(configManual);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        yaw = new QSlider(groupBox_2);
        yaw->setObjectName("yaw");
        yaw->setValue(50);
        yaw->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_3->addWidget(yaw, 2, 1, 1, 1);

        pitch = new QSlider(groupBox_2);
        pitch->setObjectName("pitch");
        pitch->setValue(50);
        pitch->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_3->addWidget(pitch, 1, 1, 1, 1);

        roll = new QSlider(groupBox_2);
        roll->setObjectName("roll");
        roll->setValue(50);
        roll->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_3->addWidget(roll, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(configManual);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 2, 0, 1, 1);

        right = new QSlider(groupBox);
        right->setObjectName("right");
        right->setValue(50);
        right->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(right, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        forward = new QSlider(groupBox);
        forward->setObjectName("forward");
        forward->setValue(50);
        forward->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(forward, 1, 1, 1, 1);

        high = new QSlider(groupBox);
        high->setObjectName("high");
        high->setValue(50);
        high->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(high, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 2, 2, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 1, 2, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);


        retranslateUi(configManual);

        QMetaObject::connectSlotsByName(configManual);
    } // setupUi

    void retranslateUi(QDialog *configManual)
    {
        configManual->setWindowTitle(QCoreApplication::translate("configManual", "Manual Position", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("configManual", "Rotation", nullptr));
        label_7->setText(QCoreApplication::translate("configManual", "Roll", nullptr));
        label_8->setText(QCoreApplication::translate("configManual", "Pitch", nullptr));
        label_9->setText(QCoreApplication::translate("configManual", "Yaw", nullptr));
        groupBox->setTitle(QCoreApplication::translate("configManual", "Translation", nullptr));
        label->setText(QCoreApplication::translate("configManual", "Low", nullptr));
        label_3->setText(QCoreApplication::translate("configManual", "Backward", nullptr));
        label_2->setText(QCoreApplication::translate("configManual", "Left", nullptr));
        label_4->setText(QCoreApplication::translate("configManual", "Right", nullptr));
        label_5->setText(QCoreApplication::translate("configManual", "High", nullptr));
        label_6->setText(QCoreApplication::translate("configManual", "Forward", nullptr));
    } // retranslateUi

};

namespace Ui {
    class configManual: public Ui_configManual {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CONFIGMANUALWEWYJA_H
