/********************************************************************************
** Form generated from reading UI file 'configWashout.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGWASHOUT_H
#define UI_CONFIGWASHOUT_H

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

class Ui_configWashout
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *Faa_limit_lp;
    QDoubleSpinBox *Oaa_limit_hp;
    QLabel *label_3;
    QDoubleSpinBox *Faa_scale_lp;
    QDoubleSpinBox *Oaa_scale_hp;
    QLabel *label;
    QDoubleSpinBox *Faa_scale_hp;
    QLabel *label_2;
    QDoubleSpinBox *Faa_limit_hp;
    QLabel *label_4;
    QLabel *label_5;
    QDialogButtonBox *buttonBox;
    QGroupBox *final_filt;
    QGridLayout *gridLayout_4;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_6;
    QDoubleSpinBox *lpfilt_faa_final_o;
    QDoubleSpinBox *lpfilt_faa_final_z;
    QLabel *label_15;
    QDoubleSpinBox *lpfilt_oaa_final_o;
    QDoubleSpinBox *lpfilt_oaa_final_z;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QDoubleSpinBox *max_pitch;
    QDoubleSpinBox *max_roll;
    QLabel *label_16;
    QLabel *label_17;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *hpfilt_faa_o;
    QLabel *label_10;
    QDoubleSpinBox *hpfilt_faa_c_o;
    QLabel *label_11;
    QDoubleSpinBox *lpfilt_faa_z;
    QDoubleSpinBox *hpfilt_oaa_z;
    QLabel *label_9;
    QDoubleSpinBox *hpfilt_faa_z;
    QDoubleSpinBox *lpfilt_faa_o;
    QLabel *label_12;
    QDoubleSpinBox *hpfilt_oaa_o;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *configWashout)
    {
        if (configWashout->objectName().isEmpty())
            configWashout->setObjectName("configWashout");
        configWashout->resize(429, 513);
        gridLayout = new QGridLayout(configWashout);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(configWashout);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        Faa_limit_lp = new QDoubleSpinBox(groupBox);
        Faa_limit_lp->setObjectName("Faa_limit_lp");
        Faa_limit_lp->setMaximum(100.000000000000000);

        gridLayout_2->addWidget(Faa_limit_lp, 2, 2, 1, 1);

        Oaa_limit_hp = new QDoubleSpinBox(groupBox);
        Oaa_limit_hp->setObjectName("Oaa_limit_hp");
        Oaa_limit_hp->setMaximum(100.000000000000000);

        gridLayout_2->addWidget(Oaa_limit_hp, 3, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        Faa_scale_lp = new QDoubleSpinBox(groupBox);
        Faa_scale_lp->setObjectName("Faa_scale_lp");
        Faa_scale_lp->setMaximum(1.000000000000000);
        Faa_scale_lp->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(Faa_scale_lp, 2, 1, 1, 1);

        Oaa_scale_hp = new QDoubleSpinBox(groupBox);
        Oaa_scale_hp->setObjectName("Oaa_scale_hp");
        Oaa_scale_hp->setMaximum(1.000000000000000);
        Oaa_scale_hp->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(Oaa_scale_hp, 3, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        Faa_scale_hp = new QDoubleSpinBox(groupBox);
        Faa_scale_hp->setObjectName("Faa_scale_hp");
        Faa_scale_hp->setMaximum(1.000000000000000);
        Faa_scale_hp->setSingleStep(0.100000000000000);

        gridLayout_2->addWidget(Faa_scale_hp, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        Faa_limit_hp = new QDoubleSpinBox(groupBox);
        Faa_limit_hp->setObjectName("Faa_limit_hp");
        Faa_limit_hp->setMaximum(100.000000000000000);

        gridLayout_2->addWidget(Faa_limit_hp, 1, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(configWashout);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);

        final_filt = new QGroupBox(configWashout);
        final_filt->setObjectName("final_filt");
        final_filt->setCheckable(true);
        final_filt->setChecked(true);
        gridLayout_4 = new QGridLayout(final_filt);
        gridLayout_4->setObjectName("gridLayout_4");
        label_14 = new QLabel(final_filt);
        label_14->setObjectName("label_14");

        gridLayout_4->addWidget(label_14, 0, 2, 1, 1);

        label_13 = new QLabel(final_filt);
        label_13->setObjectName("label_13");

        gridLayout_4->addWidget(label_13, 0, 1, 1, 1);

        label_6 = new QLabel(final_filt);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 1, 0, 1, 1);

        lpfilt_faa_final_o = new QDoubleSpinBox(final_filt);
        lpfilt_faa_final_o->setObjectName("lpfilt_faa_final_o");
        lpfilt_faa_final_o->setMaximum(10.000000000000000);
        lpfilt_faa_final_o->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(lpfilt_faa_final_o, 1, 1, 1, 1);

        lpfilt_faa_final_z = new QDoubleSpinBox(final_filt);
        lpfilt_faa_final_z->setObjectName("lpfilt_faa_final_z");
        lpfilt_faa_final_z->setMaximum(10.000000000000000);
        lpfilt_faa_final_z->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(lpfilt_faa_final_z, 1, 2, 1, 1);

        label_15 = new QLabel(final_filt);
        label_15->setObjectName("label_15");

        gridLayout_4->addWidget(label_15, 2, 0, 1, 1);

        lpfilt_oaa_final_o = new QDoubleSpinBox(final_filt);
        lpfilt_oaa_final_o->setObjectName("lpfilt_oaa_final_o");
        lpfilt_oaa_final_o->setMaximum(10.000000000000000);
        lpfilt_oaa_final_o->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(lpfilt_oaa_final_o, 2, 1, 1, 1);

        lpfilt_oaa_final_z = new QDoubleSpinBox(final_filt);
        lpfilt_oaa_final_z->setObjectName("lpfilt_oaa_final_z");
        lpfilt_oaa_final_z->setMaximum(10.000000000000000);
        lpfilt_oaa_final_z->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(lpfilt_oaa_final_z, 2, 2, 1, 1);


        gridLayout->addWidget(final_filt, 2, 0, 1, 1);

        groupBox_4 = new QGroupBox(configWashout);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName("gridLayout_5");
        max_pitch = new QDoubleSpinBox(groupBox_4);
        max_pitch->setObjectName("max_pitch");
        max_pitch->setDecimals(3);
        max_pitch->setMaximum(1.000000000000000);
        max_pitch->setSingleStep(0.001000000000000);

        gridLayout_5->addWidget(max_pitch, 0, 1, 1, 1);

        max_roll = new QDoubleSpinBox(groupBox_4);
        max_roll->setObjectName("max_roll");
        max_roll->setDecimals(3);
        max_roll->setMaximum(1.000000000000000);
        max_roll->setSingleStep(0.001000000000000);

        gridLayout_5->addWidget(max_roll, 1, 1, 1, 1);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName("label_16");

        gridLayout_5->addWidget(label_16, 0, 0, 1, 1);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName("label_17");

        gridLayout_5->addWidget(label_17, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox_4, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(configWashout);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        hpfilt_faa_o = new QDoubleSpinBox(groupBox_2);
        hpfilt_faa_o->setObjectName("hpfilt_faa_o");
        hpfilt_faa_o->setMaximum(10.000000000000000);
        hpfilt_faa_o->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(hpfilt_faa_o, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName("label_10");

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        hpfilt_faa_c_o = new QDoubleSpinBox(groupBox_2);
        hpfilt_faa_c_o->setObjectName("hpfilt_faa_c_o");

        gridLayout_3->addWidget(hpfilt_faa_c_o, 1, 3, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName("label_11");

        gridLayout_3->addWidget(label_11, 0, 3, 1, 1);

        lpfilt_faa_z = new QDoubleSpinBox(groupBox_2);
        lpfilt_faa_z->setObjectName("lpfilt_faa_z");
        lpfilt_faa_z->setMaximum(10.000000000000000);
        lpfilt_faa_z->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(lpfilt_faa_z, 2, 2, 1, 1);

        hpfilt_oaa_z = new QDoubleSpinBox(groupBox_2);
        hpfilt_oaa_z->setObjectName("hpfilt_oaa_z");
        hpfilt_oaa_z->setMaximum(10.000000000000000);
        hpfilt_oaa_z->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(hpfilt_oaa_z, 3, 2, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        hpfilt_faa_z = new QDoubleSpinBox(groupBox_2);
        hpfilt_faa_z->setObjectName("hpfilt_faa_z");
        hpfilt_faa_z->setMaximum(10.000000000000000);
        hpfilt_faa_z->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(hpfilt_faa_z, 1, 2, 1, 1);

        lpfilt_faa_o = new QDoubleSpinBox(groupBox_2);
        lpfilt_faa_o->setObjectName("lpfilt_faa_o");
        lpfilt_faa_o->setMaximum(10.000000000000000);
        lpfilt_faa_o->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(lpfilt_faa_o, 2, 1, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName("label_12");

        gridLayout_3->addWidget(label_12, 3, 0, 1, 1);

        hpfilt_oaa_o = new QDoubleSpinBox(groupBox_2);
        hpfilt_oaa_o->setObjectName("hpfilt_oaa_o");
        hpfilt_oaa_o->setMaximum(10.000000000000000);
        hpfilt_oaa_o->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(hpfilt_oaa_o, 3, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");

        gridLayout_3->addWidget(label_8, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(configWashout);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, configWashout, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, configWashout, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(configWashout);
    } // setupUi

    void retranslateUi(QDialog *configWashout)
    {
        configWashout->setWindowTitle(QCoreApplication::translate("configWashout", "Washout Configuration", nullptr));
        groupBox->setTitle(QCoreApplication::translate("configWashout", "Scale and Limit", nullptr));
        label_3->setText(QCoreApplication::translate("configWashout", "Oaa High Pass", nullptr));
        label->setText(QCoreApplication::translate("configWashout", "Faa High Pass", nullptr));
        label_2->setText(QCoreApplication::translate("configWashout", "Faa Low Pass", nullptr));
        label_4->setText(QCoreApplication::translate("configWashout", "Scale", nullptr));
        label_5->setText(QCoreApplication::translate("configWashout", "Limit", nullptr));
        final_filt->setTitle(QCoreApplication::translate("configWashout", "Output low pass filter", nullptr));
        label_14->setText(QCoreApplication::translate("configWashout", "Zeta", nullptr));
        label_13->setText(QCoreApplication::translate("configWashout", "Omega", nullptr));
        label_6->setText(QCoreApplication::translate("configWashout", "Faa", nullptr));
        label_15->setText(QCoreApplication::translate("configWashout", "Oaa", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("configWashout", "Tilt coordination", nullptr));
        label_16->setText(QCoreApplication::translate("configWashout", "Max pitch rate", nullptr));
        label_17->setText(QCoreApplication::translate("configWashout", "Max roll rate", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("configWashout", "Washout filters", nullptr));
        label_10->setText(QCoreApplication::translate("configWashout", "Faa Low Pass", nullptr));
        label_11->setText(QCoreApplication::translate("configWashout", "C", nullptr));
        label_9->setText(QCoreApplication::translate("configWashout", "Faa High Pass", nullptr));
        label_12->setText(QCoreApplication::translate("configWashout", "Oaa High Pass", nullptr));
        label_7->setText(QCoreApplication::translate("configWashout", "Omega", nullptr));
        label_8->setText(QCoreApplication::translate("configWashout", "Zeta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class configWashout: public Ui_configWashout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWASHOUT_H
