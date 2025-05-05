/********************************************************************************
** Form generated from reading UI file 'AmendaWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMENDAWIDGET_H
#define UI_AMENDAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AmendaWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *sumaLabel;
    QLabel *motivLabel;
    QPushButton *platesteButton;

    void setupUi(QWidget *AmendaWidget)
    {
        if (AmendaWidget->objectName().isEmpty())
            AmendaWidget->setObjectName("AmendaWidget");
        AmendaWidget->resize(200, 200);
        AmendaWidget->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #2c2c2c;\n"
"    border: 1px solid #444;\n"
"    border-radius: 10px;\n"
"    color: #ffffff;\n"
"   "));
        verticalLayout = new QVBoxLayout(AmendaWidget);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(AmendaWidget);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        sumaLabel = new QLabel(AmendaWidget);
        sumaLabel->setObjectName("sumaLabel");
        sumaLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(sumaLabel);

        motivLabel = new QLabel(AmendaWidget);
        motivLabel->setObjectName("motivLabel");
        motivLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(motivLabel);

        platesteButton = new QPushButton(AmendaWidget);
        platesteButton->setObjectName("platesteButton");
        platesteButton->setMinimumHeight(30);
        platesteButton->setStyleSheet(QString::fromUtf8("\n"
"        QPushButton {\n"
"            background-color: #28a745;\n"
"            color: white;\n"
"            border: none;\n"
"            border-radius: 5px;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: #218838;\n"
"        }\n"
"        QPushButton:pressed {\n"
"            background-color: #1e7e34;\n"
"        }\n"
"      "));

        verticalLayout->addWidget(platesteButton);


        retranslateUi(AmendaWidget);

        QMetaObject::connectSlotsByName(AmendaWidget);
    } // setupUi

    void retranslateUi(QWidget *AmendaWidget)
    {
        titleLabel->setText(QCoreApplication::translate("AmendaWidget", "AMENDA", nullptr));
        sumaLabel->setText(QCoreApplication::translate("AmendaWidget", "Suma: 250 RON", nullptr));
        motivLabel->setText(QCoreApplication::translate("AmendaWidget", "Motiv: Calatorie fara bilet", nullptr));
        platesteButton->setText(QCoreApplication::translate("AmendaWidget", "Pl\304\203te\310\231te amenda", nullptr));
        (void)AmendaWidget;
    } // retranslateUi

};

namespace Ui {
    class AmendaWidget: public Ui_AmendaWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMENDAWIDGET_H
