/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtUserName;
    QLabel *label_2;
    QLineEdit *txtEmail;
    QLabel *label_3;
    QLineEdit *txtPassword;
    QLabel *label_4;
    QLineEdit *txtConfPassword;
    QPushButton *pushButton;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(400, 300);
        Register->setMaximumSize(QSize(400, 300));
        Register->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"     background-color: #121212;\n"
"     color: #E0E0E0;\n"
"	 border-radius: 10px;\n"
"}"));
        formLayoutWidget = new QWidget(Register);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 40, 361, 144));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            font-size: 14px;\n"
"            font-weight: bold;\n"
"            color: white;\n"
"        }"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtUserName = new QLineEdit(formLayoutWidget);
        txtUserName->setObjectName("txtUserName");
        txtUserName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1E1E1E;\n"
"            border: 1px solid #333333;\n"
"            border-radius: 8px;\n"
"            color: #FFFFFF;\n"
"            padding: 6px;\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtUserName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            font-size: 14px;\n"
"            font-weight: bold;\n"
"            color: white;\n"
"        }"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtEmail = new QLineEdit(formLayoutWidget);
        txtEmail->setObjectName("txtEmail");
        txtEmail->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1E1E1E;\n"
"            border: 1px solid #333333;\n"
"            border-radius: 8px;\n"
"            color: #FFFFFF;\n"
"            padding: 6px;\n"
"}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtEmail);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            font-size: 14px;\n"
"            font-weight: bold;\n"
"            color: white;\n"
"        }"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtPassword = new QLineEdit(formLayoutWidget);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1E1E1E;\n"
"            border: 1px solid #333333;\n"
"            border-radius: 8px;\n"
"            color: #FFFFFF;\n"
"            padding: 6px;\n"
"}"));
        txtPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, txtPassword);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            font-size: 14px;\n"
"            font-weight: bold;\n"
"            color: white;\n"
"        }"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtConfPassword = new QLineEdit(formLayoutWidget);
        txtConfPassword->setObjectName("txtConfPassword");
        txtConfPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1E1E1E;\n"
"            border: 1px solid #333333;\n"
"            border-radius: 8px;\n"
"            color: #FFFFFF;\n"
"            padding: 6px;\n"
"}"));
        txtConfPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, txtConfPassword);

        pushButton = new QPushButton(Register);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 220, 80, 23));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #6200EE;\n"
"            color: #FFFFFF;\n"
"            border: none;\n"
"            border-radius: 8px;\n"
"            padding: 5px;\n"
"			font-size: 14px\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: #3700B3;\n"
"        }\n"
"        QPushButton:pressed {\n"
"            background-color: #BB86FC;\n"
"        }"));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "New Registeration", nullptr));
        label->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "Email:", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        label_4->setText(QCoreApplication::translate("Register", "Confirm password:", nullptr));
        pushButton->setText(QCoreApplication::translate("Register", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
