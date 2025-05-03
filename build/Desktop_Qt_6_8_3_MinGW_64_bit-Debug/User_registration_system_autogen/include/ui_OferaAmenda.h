/********************************************************************************
** Form generated from reading UI file 'oferaAmenda.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OFERAAMENDA_H
#define UI_OFERAAMENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OferaAmenda
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_cnp;
    QLineEdit *lineEdit_cnp;
    QLabel *label_suma;
    QLineEdit *lineEdit_suma;
    QLabel *label_motiv;
    QLineEdit *lineEdit_motiv;
    QHBoxLayout *horizontalLayout_buttons;
    QPushButton *aplicaButton;
    QPushButton *renuntaButton;

    void setupUi(QWidget *OferaAmenda)
    {
        if (OferaAmenda->objectName().isEmpty())
            OferaAmenda->setObjectName("OferaAmenda");
        OferaAmenda->resize(400, 300);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        OferaAmenda->setFont(font);
        OferaAmenda->setStyleSheet(QString::fromUtf8("background-color: #121212; color: white;"));
        verticalLayout = new QVBoxLayout(OferaAmenda);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_cnp = new QLabel(OferaAmenda);
        label_cnp->setObjectName("label_cnp");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_cnp);

        lineEdit_cnp = new QLineEdit(OferaAmenda);
        lineEdit_cnp->setObjectName("lineEdit_cnp");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_cnp);

        label_suma = new QLabel(OferaAmenda);
        label_suma->setObjectName("label_suma");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_suma);

        lineEdit_suma = new QLineEdit(OferaAmenda);
        lineEdit_suma->setObjectName("lineEdit_suma");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_suma);

        label_motiv = new QLabel(OferaAmenda);
        label_motiv->setObjectName("label_motiv");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_motiv);

        lineEdit_motiv = new QLineEdit(OferaAmenda);
        lineEdit_motiv->setObjectName("lineEdit_motiv");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_motiv);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_buttons = new QHBoxLayout();
        horizontalLayout_buttons->setObjectName("horizontalLayout_buttons");
        aplicaButton = new QPushButton(OferaAmenda);
        aplicaButton->setObjectName("aplicaButton");
        aplicaButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 5px; font-weight: bold; padding: 8px;"));

        horizontalLayout_buttons->addWidget(aplicaButton);

        renuntaButton = new QPushButton(OferaAmenda);
        renuntaButton->setObjectName("renuntaButton");
        renuntaButton->setStyleSheet(QString::fromUtf8("background-color: #FF0000; color: white; border-radius: 5px; font-weight: bold; padding: 8px;"));

        horizontalLayout_buttons->addWidget(renuntaButton);


        verticalLayout->addLayout(horizontalLayout_buttons);


        retranslateUi(OferaAmenda);

        QMetaObject::connectSlotsByName(OferaAmenda);
    } // setupUi

    void retranslateUi(QWidget *OferaAmenda)
    {
        OferaAmenda->setWindowTitle(QCoreApplication::translate("OferaAmenda", "Formular Amenzi", nullptr));
        label_cnp->setText(QCoreApplication::translate("OferaAmenda", "CNP", nullptr));
        label_suma->setText(QCoreApplication::translate("OferaAmenda", "Suma", nullptr));
        label_motiv->setText(QCoreApplication::translate("OferaAmenda", "Motivul", nullptr));
        aplicaButton->setText(QCoreApplication::translate("OferaAmenda", "Aplica", nullptr));
        renuntaButton->setText(QCoreApplication::translate("OferaAmenda", "Renunta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OferaAmenda: public Ui_OferaAmenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OFERAAMENDA_H
