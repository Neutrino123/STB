/********************************************************************************
** Form generated from reading UI file 'RezultatCautareTraseu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REZULTATCAUTARETRASEU_H
#define UI_REZULTATCAUTARETRASEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RezultatCautareTraseu
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *traseuLabel;
    QPushButton *buyTicketButton;

    void setupUi(QWidget *RezultatCautareTraseu)
    {
        if (RezultatCautareTraseu->objectName().isEmpty())
            RezultatCautareTraseu->setObjectName("RezultatCautareTraseu");
        RezultatCautareTraseu->resize(400, 50);
        RezultatCautareTraseu->setStyleSheet(QString::fromUtf8("background-color: #1E1E1E; color: white; border-radius: 5px; padding: 5px;"));
        horizontalLayout = new QHBoxLayout(RezultatCautareTraseu);
        horizontalLayout->setObjectName("horizontalLayout");
        traseuLabel = new QLabel(RezultatCautareTraseu);
        traseuLabel->setObjectName("traseuLabel");
        traseuLabel->setStyleSheet(QString::fromUtf8("font-size: 16px; font-weight: bold; color: #4CAF50;"));

        horizontalLayout->addWidget(traseuLabel);

        buyTicketButton = new QPushButton(RezultatCautareTraseu);
        buyTicketButton->setObjectName("buyTicketButton");
        buyTicketButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 5px; padding: 5px 10px; font-size: 14px;"));

        horizontalLayout->addWidget(buyTicketButton);


        retranslateUi(RezultatCautareTraseu);

        QMetaObject::connectSlotsByName(RezultatCautareTraseu);
    } // setupUi

    void retranslateUi(QWidget *RezultatCautareTraseu)
    {
        traseuLabel->setText(QCoreApplication::translate("RezultatCautareTraseu", "Autobuz 101", nullptr));
        buyTicketButton->setText(QCoreApplication::translate("RezultatCautareTraseu", "Cump\304\203r\304\203 Bilet", nullptr));
        (void)RezultatCautareTraseu;
    } // retranslateUi

};

namespace Ui {
    class RezultatCautareTraseu: public Ui_RezultatCautareTraseu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REZULTATCAUTARETRASEU_H
