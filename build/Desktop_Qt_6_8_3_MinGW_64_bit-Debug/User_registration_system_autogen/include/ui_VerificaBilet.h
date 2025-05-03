/********************************************************************************
** Form generated from reading UI file 'VerificaBilet.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFICABILET_H
#define UI_VERIFICABILET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerificaBilet
{
public:
    QLabel *labelIdBilet;
    QLineEdit *lineEditIdBilet;
    QPushButton *verificaButton;
    QPushButton *renuntaButton;

    void setupUi(QWidget *VerificaBilet)
    {
        if (VerificaBilet->objectName().isEmpty())
            VerificaBilet->setObjectName("VerificaBilet");
        VerificaBilet->resize(400, 200);
        VerificaBilet->setStyleSheet(QString::fromUtf8("background-color: #121212; color: white;"));
        labelIdBilet = new QLabel(VerificaBilet);
        labelIdBilet->setObjectName("labelIdBilet");
        labelIdBilet->setGeometry(QRect(40, 40, 100, 30));
        lineEditIdBilet = new QLineEdit(VerificaBilet);
        lineEditIdBilet->setObjectName("lineEditIdBilet");
        lineEditIdBilet->setGeometry(QRect(100, 40, 200, 30));
        verificaButton = new QPushButton(VerificaBilet);
        verificaButton->setObjectName("verificaButton");
        verificaButton->setGeometry(QRect(80, 120, 100, 40));
        verificaButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; font-weight: bold; border-radius: 5px;"));
        renuntaButton = new QPushButton(VerificaBilet);
        renuntaButton->setObjectName("renuntaButton");
        renuntaButton->setGeometry(QRect(220, 120, 100, 40));
        renuntaButton->setStyleSheet(QString::fromUtf8("background-color: #FF0000; color: white; font-weight: bold; border-radius: 5px;"));

        retranslateUi(VerificaBilet);

        QMetaObject::connectSlotsByName(VerificaBilet);
    } // setupUi

    void retranslateUi(QWidget *VerificaBilet)
    {
        VerificaBilet->setWindowTitle(QCoreApplication::translate("VerificaBilet", "Verifica Bilet", nullptr));
        labelIdBilet->setText(QCoreApplication::translate("VerificaBilet", "ID Bilet:", nullptr));
        verificaButton->setText(QCoreApplication::translate("VerificaBilet", "Verifica", nullptr));
        renuntaButton->setText(QCoreApplication::translate("VerificaBilet", "Renunta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VerificaBilet: public Ui_VerificaBilet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFICABILET_H
