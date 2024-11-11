/********************************************************************************
** Form generated from reading UI file 'configPlatformriqjcg.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CONFIGPLATFORMRIQJCG_H
#define CONFIGPLATFORMRIQJCG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_configPlatform
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *mid_length;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *min_length;
    QDoubleSpinBox *range;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_4;
    QDoubleSpinBox *radius_platform;
    QLabel *label_3;
    QDoubleSpinBox *radius_base;
    QLabel *label_5;
    QDoubleSpinBox *sep_angle;
    QDoubleSpinBox *sep_angle_platform;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *configPlatform)
    {
        if (configPlatform->objectName().isEmpty())
            configPlatform->setObjectName("configPlatform");
        configPlatform->resize(384, 378);
        gridLayout = new QGridLayout(configPlatform);
        gridLayout->setObjectName("gridLayout");
        groupBox_2 = new QGroupBox(configPlatform);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        mid_length = new QDoubleSpinBox(groupBox_2);
        mid_length->setObjectName("mid_length");
        mid_length->setDecimals(3);
        mid_length->setMaximum(4.000000000000000);
        mid_length->setSingleStep(0.001000000000000);

        gridLayout_3->addWidget(mid_length, 1, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        min_length = new QDoubleSpinBox(groupBox_2);
        min_length->setObjectName("min_length");
        min_length->setDecimals(3);
        min_length->setMaximum(4.000000000000000);
        min_length->setSingleStep(0.001000000000000);

        gridLayout_3->addWidget(min_length, 0, 1, 1, 1);

        range = new QDoubleSpinBox(groupBox_2);
        range->setObjectName("range");
        range->setDecimals(3);
        range->setMaximum(4.000000000000000);
        range->setSingleStep(0.001000000000000);

        gridLayout_3->addWidget(range, 2, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox = new QGroupBox(configPlatform);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        radius_platform = new QDoubleSpinBox(groupBox);
        radius_platform->setObjectName("radius_platform");
        radius_platform->setDecimals(3);
        radius_platform->setMaximum(4.000000000000000);
        radius_platform->setSingleStep(0.001000000000000);

        gridLayout_2->addWidget(radius_platform, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        radius_base = new QDoubleSpinBox(groupBox);
        radius_base->setObjectName("radius_base");
        radius_base->setDecimals(3);
        radius_base->setMaximum(4.000000000000000);
        radius_base->setSingleStep(0.001000000000000);

        gridLayout_2->addWidget(radius_base, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 3, 0, 1, 1);

        sep_angle = new QDoubleSpinBox(groupBox);
        sep_angle->setObjectName("sep_angle");
        sep_angle->setDecimals(3);
        sep_angle->setMaximum(1.000000000000000);
        sep_angle->setSingleStep(0.001000000000000);

        gridLayout_2->addWidget(sep_angle, 1, 1, 1, 1);

        sep_angle_platform = new QDoubleSpinBox(groupBox);
        sep_angle_platform->setObjectName("sep_angle_platform");
        sep_angle_platform->setDecimals(3);
        sep_angle_platform->setMaximum(1.000000000000000);
        sep_angle_platform->setSingleStep(0.001000000000000);

        gridLayout_2->addWidget(sep_angle_platform, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(configPlatform);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(configPlatform);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, configPlatform, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, configPlatform, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(configPlatform);
    } // setupUi

    void retranslateUi(QDialog *configPlatform)
    {
        configPlatform->setWindowTitle(QCoreApplication::translate("configPlatform", "Platform Geometry", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("configPlatform", "Actuators", nullptr));
        label->setText(QCoreApplication::translate("configPlatform", "Mid length/m", nullptr));
        label_6->setText(QCoreApplication::translate("configPlatform", "Min length/m", nullptr));
        label_7->setText(QCoreApplication::translate("configPlatform", "Range/m", nullptr));
        groupBox->setTitle(QCoreApplication::translate("configPlatform", "Platform", nullptr));
        label_2->setText(QCoreApplication::translate("configPlatform", "Base radius/m", nullptr));
        label_4->setText(QCoreApplication::translate("configPlatform", "Base separation angle/rad", nullptr));
        label_3->setText(QCoreApplication::translate("configPlatform", "Platform radius/m", nullptr));
        label_5->setText(QCoreApplication::translate("configPlatform", "Platform separation angle/rad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class configPlatform: public Ui_configPlatform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CONFIGPLATFORMRIQJCG_H
