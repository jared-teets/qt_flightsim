/********************************************************************************
** Form generated from reading UI file 'configActuator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGACTUATOR_H
#define UI_CONFIGACTUATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_configActuator
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *serialport;

    void setupUi(QDialog *configActuator)
    {
        if (configActuator->objectName().isEmpty())
            configActuator->setObjectName("configActuator");
        configActuator->resize(278, 170);
        gridLayout = new QGridLayout(configActuator);
        gridLayout->setObjectName("gridLayout");
        buttonBox = new QDialogButtonBox(configActuator);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(configActuator);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        serialport = new QComboBox(configActuator);
        serialport->setObjectName("serialport");

        gridLayout_2->addWidget(serialport, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(configActuator);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, configActuator, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, configActuator, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(configActuator);
    } // setupUi

    void retranslateUi(QDialog *configActuator)
    {
        configActuator->setWindowTitle(QCoreApplication::translate("configActuator", "Actuator Config", nullptr));
        label->setText(QCoreApplication::translate("configActuator", "Serial port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class configActuator: public Ui_configActuator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGACTUATOR_H
