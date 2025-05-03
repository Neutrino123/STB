/********************************************************************************
** Form generated from reading UI file 'ControlorPage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLORPAGE_H
#define UI_CONTROLORPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlorPage
{
public:
    QWidget *centralwidget;
    QLabel *welcomeLabel;
    QPushButton *verificaBiletButton;
    QPushButton *oferaAmendaButton;
    QPushButton *logoutButton;
    QMenuBar *menubar;
    QMenu *menuLogged_in;

    void setupUi(QMainWindow *ControlorPage)
    {
        if (ControlorPage->objectName().isEmpty())
            ControlorPage->setObjectName("ControlorPage");
        ControlorPage->resize(600, 450);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        font.setUnderline(false);
        ControlorPage->setFont(font);
        ControlorPage->setStyleSheet(QString::fromUtf8("background-color: #121212; color: white;"));
        centralwidget = new QWidget(ControlorPage);
        centralwidget->setObjectName("centralwidget");
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(120, 10, 361, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        welcomeLabel->setFont(font1);
        welcomeLabel->setStyleSheet(QString::fromUtf8("color: #00FF00; font-size: 28px; font-weight: bold; text-shadow: 2px 2px 10px #00FF00;"));
        verificaBiletButton = new QPushButton(centralwidget);
        verificaBiletButton->setObjectName("verificaBiletButton");
        verificaBiletButton->setGeometry(QRect(240, 110, 120, 40));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verificaBiletButton->sizePolicy().hasHeightForWidth());
        verificaBiletButton->setSizePolicy(sizePolicy);
        verificaBiletButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 5px; font-weight: bold; padding: 10px; text-align: center; font-size: 14px; transition: background-color 0.3s ease;"));
        oferaAmendaButton = new QPushButton(centralwidget);
        oferaAmendaButton->setObjectName("oferaAmendaButton");
        oferaAmendaButton->setGeometry(QRect(240, 170, 120, 40));
        sizePolicy.setHeightForWidth(oferaAmendaButton->sizePolicy().hasHeightForWidth());
        oferaAmendaButton->setSizePolicy(sizePolicy);
        oferaAmendaButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 5px; font-weight: bold; padding: 10px; text-align: center; font-size: 14px; transition: background-color 0.3s ease;"));
        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(470, 380, 120, 40));
        sizePolicy.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy);
        logoutButton->setStyleSheet(QString::fromUtf8("background-color: #FF0000; color: white; border-radius: 5px; font-weight: bold; padding: 10px; text-align: center; font-size: 14px; transition: background-color 0.3s ease;"));
        ControlorPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ControlorPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 21));
        menuLogged_in = new QMenu(menubar);
        menuLogged_in->setObjectName("menuLogged_in");
        QFont font2;
        font2.setBold(false);
        menuLogged_in->setFont(font2);
        ControlorPage->setMenuBar(menubar);

        menubar->addAction(menuLogged_in->menuAction());

        retranslateUi(ControlorPage);

        QMetaObject::connectSlotsByName(ControlorPage);
    } // setupUi

    void retranslateUi(QMainWindow *ControlorPage)
    {
        ControlorPage->setWindowTitle(QCoreApplication::translate("ControlorPage", "MainWindow", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("ControlorPage", "Welcome, <username>", nullptr));
        verificaBiletButton->setText(QCoreApplication::translate("ControlorPage", "Verifica Bilet", nullptr));
        oferaAmendaButton->setText(QCoreApplication::translate("ControlorPage", "Ofera Amenda", nullptr));
        logoutButton->setText(QCoreApplication::translate("ControlorPage", "Logout", nullptr));
        menuLogged_in->setTitle(QCoreApplication::translate("ControlorPage", "Logged in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlorPage: public Ui_ControlorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLORPAGE_H
