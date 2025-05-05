/********************************************************************************
** Form generated from reading UI file 'RegisterPage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERPAGE_H
#define UI_REGISTERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegisterPage
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_username;
    QLineEdit *txtUserName;
    QLabel *label_email;
    QLineEdit *txtEmail;
    QLabel *label_password;
    QLineEdit *txtPassword;
    QLabel *label_conf_password;
    QLineEdit *txtConfPassword;
    QLabel *label_nume;
    QLineEdit *txtNume;
    QLabel *label_prenume;
    QLineEdit *txtPrenume;
    QLabel *label_cnp;
    QLineEdit *txtCNP;
    QPushButton *submitButton;

    void setupUi(QDialog *RegisterPage)
    {
        if (RegisterPage->objectName().isEmpty())
            RegisterPage->setObjectName("RegisterPage");
        RegisterPage->resize(400, 450);
        RegisterPage->setStyleSheet(QString::fromUtf8("\n"
"    QWidget {\n"
"        background-color: #121212;\n"
"        color: white;\n"
"        font-family: Arial;\n"
"        font-size: 12pt;\n"
"    }\n"
"    QLineEdit {\n"
"        background-color: #1E1E1E;\n"
"        color: white;\n"
"        border: 1px solid #333;\n"
"        border-radius: 6px;\n"
"        padding: 5px;\n"
"    }\n"
"    QLabel {\n"
"        font-weight: bold;\n"
"    }\n"
"    QPushButton {\n"
"        background-color: #4CAF50;\n"
"        color: white;\n"
"        border-radius: 8px;\n"
"        font-weight: bold;\n"
"        font-size: 14px;\n"
"        padding: 8px;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: #45A049;\n"
"    }\n"
"    QPushButton:pressed {\n"
"        background-color: #388E3C;\n"
"    }\n"
"   "));
        verticalLayout = new QVBoxLayout(RegisterPage);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_username = new QLabel(RegisterPage);
        label_username->setObjectName("label_username");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_username);

        txtUserName = new QLineEdit(RegisterPage);
        txtUserName->setObjectName("txtUserName");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtUserName);

        label_email = new QLabel(RegisterPage);
        label_email->setObjectName("label_email");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_email);

        txtEmail = new QLineEdit(RegisterPage);
        txtEmail->setObjectName("txtEmail");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtEmail);

        label_password = new QLabel(RegisterPage);
        label_password->setObjectName("label_password");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_password);

        txtPassword = new QLineEdit(RegisterPage);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, txtPassword);

        label_conf_password = new QLabel(RegisterPage);
        label_conf_password->setObjectName("label_conf_password");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_conf_password);

        txtConfPassword = new QLineEdit(RegisterPage);
        txtConfPassword->setObjectName("txtConfPassword");
        txtConfPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, txtConfPassword);

        label_nume = new QLabel(RegisterPage);
        label_nume->setObjectName("label_nume");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_nume);

        txtNume = new QLineEdit(RegisterPage);
        txtNume->setObjectName("txtNume");

        formLayout->setWidget(4, QFormLayout::FieldRole, txtNume);

        label_prenume = new QLabel(RegisterPage);
        label_prenume->setObjectName("label_prenume");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_prenume);

        txtPrenume = new QLineEdit(RegisterPage);
        txtPrenume->setObjectName("txtPrenume");

        formLayout->setWidget(5, QFormLayout::FieldRole, txtPrenume);

        label_cnp = new QLabel(RegisterPage);
        label_cnp->setObjectName("label_cnp");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_cnp);

        txtCNP = new QLineEdit(RegisterPage);
        txtCNP->setObjectName("txtCNP");

        formLayout->setWidget(6, QFormLayout::FieldRole, txtCNP);


        verticalLayout->addLayout(formLayout);

        submitButton = new QPushButton(RegisterPage);
        submitButton->setObjectName("submitButton");

        verticalLayout->addWidget(submitButton, 0, Qt::AlignCenter);


        retranslateUi(RegisterPage);

        QMetaObject::connectSlotsByName(RegisterPage);
    } // setupUi

    void retranslateUi(QDialog *RegisterPage)
    {
        RegisterPage->setWindowTitle(QCoreApplication::translate("RegisterPage", "\303\216nregistrare utilizator", nullptr));
        label_username->setText(QCoreApplication::translate("RegisterPage", "Username:", nullptr));
        label_email->setText(QCoreApplication::translate("RegisterPage", "Email:", nullptr));
        label_password->setText(QCoreApplication::translate("RegisterPage", "Parol\304\203:", nullptr));
        label_conf_password->setText(QCoreApplication::translate("RegisterPage", "Confirmare Parol\304\203:", nullptr));
        label_nume->setText(QCoreApplication::translate("RegisterPage", "Nume:", nullptr));
        label_prenume->setText(QCoreApplication::translate("RegisterPage", "Prenume:", nullptr));
        label_cnp->setText(QCoreApplication::translate("RegisterPage", "CNP:", nullptr));
        submitButton->setText(QCoreApplication::translate("RegisterPage", "\303\216nregistreaz\304\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterPage: public Ui_RegisterPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPAGE_H
