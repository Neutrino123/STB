/********************************************************************************
** Form generated from reading UI file 'LoginPage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QWidget *centralwidget;
    QFrame *loginframe;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *emailInput;
    QLabel *label_2;
    QLineEdit *passwordInput;
    QPushButton *loginButton;
    QLabel *label_4;
    QPushButton *registerButton;
    QLabel *mainTitle;
    QMenuBar *menubar;
    QMenu *menuUser_Login_Page;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(800, 500);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        LoginPage->setFont(font);
        LoginPage->setStyleSheet(QString::fromUtf8("background-color: #121212; color: white;"));
        centralwidget = new QWidget(LoginPage);
        centralwidget->setObjectName("centralwidget");
        loginframe = new QFrame(centralwidget);
        loginframe->setObjectName("loginframe");
        loginframe->setGeometry(QRect(210, 80, 400, 360));
        loginframe->setStyleSheet(QString::fromUtf8("\n"
"QFrame#loginframe {\n"
"    background-color: #1F1F1F;\n"
"    border: 2px solid #3A3A3A;\n"
"    border-radius: 15px;\n"
"    padding: 20px;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(loginframe);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(loginframe);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: #00FF00; font-size: 18px; font-weight: bold; text-align: center; text-shadow: 2px 2px 8px #00FF00;"));

        verticalLayout->addWidget(label_3);

        label = new QLabel(loginframe);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: white; font-size: 14px;"));

        verticalLayout->addWidget(label);

        emailInput = new QLineEdit(loginframe);
        emailInput->setObjectName("emailInput");
        emailInput->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A; border: 1px solid #555; border-radius: 8px; padding: 6px; color: white;"));

        verticalLayout->addWidget(emailInput);

        label_2 = new QLabel(loginframe);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: white; font-size: 14px;"));

        verticalLayout->addWidget(label_2);

        passwordInput = new QLineEdit(loginframe);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A; border: 1px solid #555; border-radius: 8px; padding: 6px; color: white;"));
        passwordInput->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(passwordInput);

        loginButton = new QPushButton(loginframe);
        loginButton->setObjectName("loginButton");
        loginButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    box-shadow: 0px 4px 12px rgba(76, 175, 80, 0.3);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #43A047;\n"
"    box-shadow: 0px 6px 16px rgba(76, 175, 80, 0.4);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #388E3C;\n"
"    box-shadow: inset 0px 2px 4px rgba(0, 0, 0, 0.3);\n"
"}\n"
""));

        verticalLayout->addWidget(loginButton);

        label_4 = new QLabel(loginframe);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: white; font-size: 14px;"));

        verticalLayout->addWidget(label_4);

        registerButton = new QPushButton(loginframe);
        registerButton->setObjectName("registerButton");
        registerButton->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"    box-shadow: 0px 4px 12px rgba(76, 175, 80, 0.3);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #43A047;\n"
"    box-shadow: 0px 6px 16px rgba(76, 175, 80, 0.4);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #388E3C;\n"
"    box-shadow: inset 0px 2px 4px rgba(0, 0, 0, 0.3);\n"
"}\n"
""));

        verticalLayout->addWidget(registerButton);

        mainTitle = new QLabel(centralwidget);
        mainTitle->setObjectName("mainTitle");
        mainTitle->setGeometry(QRect(240, 20, 338, 32));
        mainTitle->setStyleSheet(QString::fromUtf8("color: #00FF00; font-size: 24px; font-weight: bold; qproperty-alignment: AlignCenter;"));
        LoginPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuUser_Login_Page = new QMenu(menubar);
        menuUser_Login_Page->setObjectName("menuUser_Login_Page");
        LoginPage->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginPage);
        statusbar->setObjectName("statusbar");
        LoginPage->setStatusBar(statusbar);

        menubar->addAction(menuUser_Login_Page->menuAction());

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QMainWindow *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "Digital Transport Bucure\310\231ti", nullptr));
        label_3->setText(QCoreApplication::translate("LoginPage", "Use Email and Password for Login", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "Email:", nullptr));
        label_2->setText(QCoreApplication::translate("LoginPage", "Password:", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginPage", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("LoginPage", "New User?", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginPage", "Register", nullptr));
        mainTitle->setText(QCoreApplication::translate("LoginPage", "Digital Transport Bucure\310\231ti", nullptr));
        menuUser_Login_Page->setTitle(QCoreApplication::translate("LoginPage", "User Login Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
