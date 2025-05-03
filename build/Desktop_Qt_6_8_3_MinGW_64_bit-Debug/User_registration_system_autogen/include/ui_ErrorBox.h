/********************************************************************************
** Form generated from reading UI file 'ErrorBox.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORBOX_H
#define UI_ERRORBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ErrorBox
{
public:
    QLabel *labelError;
    QPushButton *buttonClose;

    void setupUi(QDialog *ErrorBox)
    {
        if (ErrorBox->objectName().isEmpty())
            ErrorBox->setObjectName("ErrorBox");
        ErrorBox->resize(350, 150);
        ErrorBox->setStyleSheet(QString::fromUtf8("background-color: #1c1c1c; color: white;"));
        labelError = new QLabel(ErrorBox);
        labelError->setObjectName("labelError");
        labelError->setGeometry(QRect(20, 30, 310, 40));
        labelError->setStyleSheet(QString::fromUtf8("color: #FF5555; font-weight: bold; font-size: 16px;"));
        buttonClose = new QPushButton(ErrorBox);
        buttonClose->setObjectName("buttonClose");
        buttonClose->setGeometry(QRect(120, 90, 100, 30));
        buttonClose->setStyleSheet(QString::fromUtf8("background-color: #FF3333; color: white; font-weight: bold; border-radius: 5px;"));

        retranslateUi(ErrorBox);

        QMetaObject::connectSlotsByName(ErrorBox);
    } // setupUi

    void retranslateUi(QDialog *ErrorBox)
    {
        ErrorBox->setWindowTitle(QCoreApplication::translate("ErrorBox", "Eroare", nullptr));
        labelError->setText(QCoreApplication::translate("ErrorBox", "Eroare: Ceva nu a func\310\233ionat corect.", nullptr));
        buttonClose->setText(QCoreApplication::translate("ErrorBox", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErrorBox: public Ui_ErrorBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORBOX_H
