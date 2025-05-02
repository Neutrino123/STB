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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterPage
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
    QLabel *label_nume;
    QLineEdit *txtNume;
    QLabel *label_prenume;
    QLineEdit *txtPrenume;
    QLabel *label_cnp;
    QLineEdit *txtCNP;
    QPushButton *pushButton;

    void setupUi(QDialog *RegisterPage)
    {
        if (RegisterPage->objectName().isEmpty())
            RegisterPage->setObjectName("RegisterPage");
        RegisterPage->resize(400, 400);
        RegisterPage->setMaximumSize(QSize(400, 400));
        RegisterPage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"    background-color: #121212;\n"
"    color: #E0E0E0;\n"
"    border-radius: 10px;\n"
"}"));
        formLayoutWidget = new QWidget(RegisterPage);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 20, 361, 300));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"           font-size: 14px;\n"
"           font-weight: bold;\n"
"           color: white;\n"
"       }"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtUserName = new QLineEdit(formLayoutWidget);
        txtUserName->setObjectName("txtUserName");
        txtUserName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"           background-color: #1E1E1E;\n"
"           border: 1px solid #333333;\n"
"           border-radius: 8px;\n"
"           color: #FFFFFF;\n"
"           padding: 6px;\n"
"       }"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtUserName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"           font-size: 14px;\n"
"           font-weight: bold;\n"
"           color: white;\n"
"       }"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtEmail = new QLineEdit(formLayoutWidget);
        txtEmail->setObjectName("txtEmail");
        txtEmail->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"           background-color: #1E1E1E;\n"
"           border: 1px solid #333333;\n"
"           border-radius: 8px;\n"
"           color: #FFFFFF;\n"
"           padding: 6px;\n"
"       }"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtEmail);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"           font-size: 14px;\n"
"           font-weight: bold;\n"
"           color: white;\n"
"       }"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtPassword = new QLineEdit(formLayoutWidget);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"           background-color: #1E1E1E;\n"
"           border: 1px solid #333333;\n"
"           border-radius: 8px;\n"
"           color: #FFFFFF;\n"
"           padding: 6px;\n"
"       }"));
        txtPassword->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, txtPassword);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"           font-size: 14px;\n"
"           font-weight: bold;\n"
"           color: white;\n"
"       }"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txtConfPassword = new QLineEdit(formLayoutWidget);
        txtConfPassword->setObjectName("txtConfPassword");
        txtConfPassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"           background-color: #1E1E1E;\n"
"           border: 1px solid #333333;\n"
"           border-radius: 8px;\n"
"           color: #FFFFFF;\n"
"           padding: 6px;\n"
"       }"));
        txtConfPassword->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, txtConfPassword);

        label_nume = new QLabel(formLayoutWidget);
        label_nume->setObjectName("label_nume");
        label_nume->setStyleSheet(QString::fromUtf8("QLabel {\n"
"           font-size: 14px;\n"
"           font-weight: bold;\n"
"           color: white;\n"
"       }"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_nume);

        txtNume = new QLineEdit(formLayoutWidget);
        txtNume->setObjectName("txtNume");
        txtNume->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"           background-color: #1E1E1E;\n"
"           border: 1px solid #333333;\n"
"           border-radius: 8px;\n"
"           color: #FFFFFF;\n"
"           padding: 6px;\n"
"       }"));

        formLayout->setWidget(4, QFormLayout::FieldRole, txtNume);

        label_prenume = new QLabel(formLayoutWidget);
        label_prenume->setObjectName("label_prenume");
        label_prenume->setStyleSheet(QString::fromUtf8("QLabel {\n"
"           font-size: 14px;\n"
"           font-weight: bold;\n"
"           color: white;\n"
"       }"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_prenume);

        txtPrenume = new QLineEdit(formLayoutWidget);
        txtPrenume->setObjectName("txtPrenume");
        txtPrenume->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"           background-color: #1E1E1E;\n"
"           border: 1px solid #333333;\n"
"           border-radius: 8px;\n"
"           color: #FFFFFF;\n"
"           padding: 6px;\n"
"       }"));

        formLayout->setWidget(5, QFormLayout::FieldRole, txtPrenume);

        label_cnp = new QLabel(formLayoutWidget);
        label_cnp->setObjectName("label_cnp");
        label_cnp->setStyleSheet(QString::fromUtf8("QLabel {\n"
"           font-size: 14px;\n"
"           font-weight: bold;\n"
"           color: white;\n"
"       }"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_cnp);

        txtCNP = new QLineEdit(formLayoutWidget);
        txtCNP->setObjectName("txtCNP");
        txtCNP->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"           background-color: #1E1E1E;\n"
"           border: 1px solid #333333;\n"
"           border-radius: 8px;\n"
"           color: #FFFFFF;\n"
"           padding: 6px;\n"
"       }"));

        formLayout->setWidget(6, QFormLayout::FieldRole, txtCNP);

        pushButton = new QPushButton(RegisterPage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 340, 80, 23));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #6200EE;\n"
"            color: #FFFFFF;\n"
"            border: none;\n"
"            border-radius: 8px;\n"
"            padding: 5px;\n"
"            font-size: 14px;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: #3700B3;\n"
"        }\n"
"        QPushButton:pressed {\n"
"            background-color: #BB86FC;\n"
"        }"));

        retranslateUi(RegisterPage);

        QMetaObject::connectSlotsByName(RegisterPage);
    } // setupUi

    void retranslateUi(QDialog *RegisterPage)
    {
        RegisterPage->setWindowTitle(QCoreApplication::translate("RegisterPage", "New Registeration", nullptr));
        label->setText(QCoreApplication::translate("RegisterPage", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterPage", "Email:", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterPage", "Password:", nullptr));
        label_4->setText(QCoreApplication::translate("RegisterPage", "Confirm Password:", nullptr));
        label_nume->setText(QCoreApplication::translate("RegisterPage", "Nume:", nullptr));
        label_prenume->setText(QCoreApplication::translate("RegisterPage", "Prenume:", nullptr));
        label_cnp->setText(QCoreApplication::translate("RegisterPage", "CNP:", nullptr));
        pushButton->setText(QCoreApplication::translate("RegisterPage", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterPage: public Ui_RegisterPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERPAGE_H
