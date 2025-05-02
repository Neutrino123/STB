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
    QMenuBar *menubar;
    QMenu *menuUser_Login_Page;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName("LoginPage");
        LoginPage->resize(800, 500);
        LoginPage->setMinimumSize(QSize(500, 300));
        LoginPage->setMaximumSize(QSize(800, 500));
        LoginPage->setStyleSheet(QString::fromUtf8("MainWindow {\n"
"     background-color: #121212;\n"
"     color: #E0E0E0;\n"
"	border-radius: 10px;\n"
"\n"
"}"));
        centralwidget = new QWidget(LoginPage);
        centralwidget->setObjectName("centralwidget");
        loginframe = new QFrame(centralwidget);
        loginframe->setObjectName("loginframe");
        loginframe->setGeometry(QRect(120, 80, 581, 291));
        loginframe->setStyleSheet(QString::fromUtf8("QFrame#LoginFrame {\n"
"    background-color: #2B2B2B;   /* Softer dark tone */\n"
"    border: 2px solid #3A3A3A;\n"
"    border-radius: 15px;\n"
"    padding: 40px;               /* Adds internal spacing */\n"
"    margin: 20% auto;            /* Auto centers horizontally (visual trick) */\n"
"    max-width: 400px;            /* Limits width for a balanced look */\n"
"    min-height: 300px;           /* Ensures enough height for content */\n"
"    box-shadow: 0 4px 15px rgba(0, 0, 0, 0.5);  /* Soft shadow for depth */\n"
"}\n"
""));
        loginframe->setFrameShape(QFrame::Shape::StyledPanel);
        loginframe->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(loginframe);
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(loginframe);
        label_3->setObjectName("label_3");
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setStrikeOut(false);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            font-size: 15px;\n"
"            font-weight: bold;\n"
"            color: white;\n"
"        }"));

        verticalLayout->addWidget(label_3);

        label = new QLabel(loginframe);
        label->setObjectName("label");
        QFont font1;
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            font-size: 15px;\n"
"            font-weight: bold;\n"
"            color: white;\n"
"        }"));

        verticalLayout->addWidget(label);

        emailInput = new QLineEdit(loginframe);
        emailInput->setObjectName("emailInput");
        emailInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #1E1E1E;\n"
"            border: 1px solid #333333;\n"
"            border-radius: 8px;\n"
"            color: #FFFFFF;\n"
"            padding: 6px;\n"
"}"));

        verticalLayout->addWidget(emailInput);

        label_2 = new QLabel(loginframe);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            font-size: 15px;\n"
"            font-weight: bold;\n"
"            color: white;\n"
"        }"));

        verticalLayout->addWidget(label_2);

        passwordInput = new QLineEdit(loginframe);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"   background-color: #1E1E1E;\n"
"   border: 1px solid #333333;\n"
"   border-radius: 8px;\n"
"   color: #FFFFFF;\n"
"   padding: 6px;\n"
"}"));
        passwordInput->setEchoMode(QLineEdit::EchoMode::Password);
        passwordInput->setClearButtonEnabled(false);

        verticalLayout->addWidget(passwordInput);

        loginButton = new QPushButton(loginframe);
        loginButton->setObjectName("loginButton");
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #6200EE;\n"
"            color: #FFFFFF;\n"
"            border: none;\n"
"            border-radius: 8px;\n"
"            padding: 5px;\n"
"			font-size: 14px;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: #3700B3;\n"
"        }\n"
"        QPushButton:pressed {\n"
"            background-color: #BB86FC;\n"
"        }"));

        verticalLayout->addWidget(loginButton);

        label_4 = new QLabel(loginframe);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"            font-size: 15px;\n"
"            font-weight: bold;\n"
"            color: white;\n"
"        }"));

        verticalLayout->addWidget(label_4);

        registerButton = new QPushButton(loginframe);
        registerButton->setObjectName("registerButton");
        registerButton->setAutoFillBackground(false);
        registerButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background-color: #6200EE;\n"
"            color: #FFFFFF;\n"
"            border: none;\n"
"            border-radius: 8px;\n"
"            padding: 5px;\n"
"			font-size: 14px;\n"
"        }\n"
"        QPushButton:hover {\n"
"            background-color: #3700B3;\n"
"        }\n"
"        QPushButton:pressed {\n"
"            background-color: #BB86FC;\n"
"        }"));

        verticalLayout->addWidget(registerButton);

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
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "User Registration System", nullptr));
        label_3->setText(QCoreApplication::translate("LoginPage", "Use Email and Password for Login", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "Email:", nullptr));
        label_2->setText(QCoreApplication::translate("LoginPage", "Password:", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginPage", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("LoginPage", "New User:", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginPage", "Register", nullptr));
        menuUser_Login_Page->setTitle(QCoreApplication::translate("LoginPage", "User Login Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
