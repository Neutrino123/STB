/********************************************************************************
** Form generated from reading UI file 'SuccessBox.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCCESSBOX_H
#define UI_SUCCESSBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SuccessBox
{
public:
    QLabel *labelSuccess;
    QPushButton *buttonClose;

    void setupUi(QDialog *SuccessBox)
    {
        if (SuccessBox->objectName().isEmpty())
            SuccessBox->setObjectName("SuccessBox");
        SuccessBox->resize(350, 150);
        SuccessBox->setStyleSheet(QString::fromUtf8("background-color: #1c1c1c; color: white;"));
        labelSuccess = new QLabel(SuccessBox);
        labelSuccess->setObjectName("labelSuccess");
        labelSuccess->setGeometry(QRect(20, 30, 310, 40));
        labelSuccess->setStyleSheet(QString::fromUtf8("color: #00FF88; font-weight: bold; font-size: 16px;"));
        buttonClose = new QPushButton(SuccessBox);
        buttonClose->setObjectName("buttonClose");
        buttonClose->setGeometry(QRect(120, 90, 100, 30));
        buttonClose->setStyleSheet(QString::fromUtf8("background-color: #00CC66; color: white; font-weight: bold; border-radius: 5px;"));

        retranslateUi(SuccessBox);

        QMetaObject::connectSlotsByName(SuccessBox);
    } // setupUi

    void retranslateUi(QDialog *SuccessBox)
    {
        SuccessBox->setWindowTitle(QCoreApplication::translate("SuccessBox", "Succes", nullptr));
        labelSuccess->setText(QCoreApplication::translate("SuccessBox", "Succes! Opera\310\233iunea a fost realizat\304\203.", nullptr));
        buttonClose->setText(QCoreApplication::translate("SuccessBox", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SuccessBox: public Ui_SuccessBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCCESSBOX_H
