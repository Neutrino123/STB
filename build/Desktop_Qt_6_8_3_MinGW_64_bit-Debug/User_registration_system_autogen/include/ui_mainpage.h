/********************************************************************************
** Form generated from reading UI file 'MainPage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QLabel *welcomeLabel;
    QPushButton *cautaTraseuButton;
    QPushButton *veziBiletButton;
    QPushButton *veziAmenziButton;
    QPushButton *veziHartaButton;
    QPushButton *logoutButton;
    QPushButton *notificationButton;
    QMenuBar *menubar;
    QMenu *menuLogged_in;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(600, 450);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        font.setUnderline(false);
        MainPage->setFont(font);
        MainPage->setStyleSheet(QString::fromUtf8("background-color: #121212; color: white;"));
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(120, 10, 361, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        welcomeLabel->setFont(font1);
        welcomeLabel->setStyleSheet(QString::fromUtf8("color: #00FF00; font-size: 28px; font-weight: bold; text-shadow: 2px 2px 10px #00FF00;"));
        cautaTraseuButton = new QPushButton(centralwidget);
        cautaTraseuButton->setObjectName("cautaTraseuButton");
        cautaTraseuButton->setGeometry(QRect(240, 120, 120, 40));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cautaTraseuButton->sizePolicy().hasHeightForWidth());
        cautaTraseuButton->setSizePolicy(sizePolicy);
        cautaTraseuButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 5px; font-weight: bold; padding: 10px; text-align: center; font-size: 14px; transition: background-color 0.3s ease; cursor: pointer;"));
        veziBiletButton = new QPushButton(centralwidget);
        veziBiletButton->setObjectName("veziBiletButton");
        veziBiletButton->setGeometry(QRect(240, 180, 120, 40));
        veziBiletButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 5px; font-weight: bold; padding: 10px; text-align: center; font-size: 14px; transition: background-color 0.3s ease; cursor: pointer;"));
        veziAmenziButton = new QPushButton(centralwidget);
        veziAmenziButton->setObjectName("veziAmenziButton");
        veziAmenziButton->setGeometry(QRect(240, 240, 120, 40));
        veziAmenziButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 5px; font-weight: bold; padding: 10px; text-align: center; font-size: 14px; transition: background-color 0.3s ease; cursor: pointer;"));
        veziHartaButton = new QPushButton(centralwidget);
        veziHartaButton->setObjectName("veziHartaButton");
        veziHartaButton->setGeometry(QRect(240, 300, 120, 40));
        veziHartaButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 5px; font-weight: bold; padding: 10px; text-align: center; font-size: 14px; transition: background-color 0.3s ease; cursor: pointer;"));
        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(470, 380, 120, 40));
        logoutButton->setStyleSheet(QString::fromUtf8("background-color: #FF0000; color: white; border-radius: 5px; font-weight: bold; padding: 10px; text-align: center; font-size: 14px; transition: background-color 0.3s ease; cursor: pointer;"));
        notificationButton = new QPushButton(centralwidget);
        notificationButton->setObjectName("notificationButton");
        notificationButton->setGeometry(QRect(550, 10, 32, 32));
        notificationButton->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/bell.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon.addFile(QString::fromUtf8(":/icons/icons/notification.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        notificationButton->setIcon(icon);
        notificationButton->setIconSize(QSize(24, 24));
        MainPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 21));
        menuLogged_in = new QMenu(menubar);
        menuLogged_in->setObjectName("menuLogged_in");
        MainPage->setMenuBar(menubar);

        menubar->addAction(menuLogged_in->menuAction());

        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "MainWindow", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("MainPage", "Welcome, <username>", nullptr));
        cautaTraseuButton->setText(QCoreApplication::translate("MainPage", "Cauta Traseu", nullptr));
        veziBiletButton->setText(QCoreApplication::translate("MainPage", "Vezi Bilet", nullptr));
        veziAmenziButton->setText(QCoreApplication::translate("MainPage", "Amenzi", nullptr));
        veziHartaButton->setText(QCoreApplication::translate("MainPage", "Vezi Harta", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainPage", "Logout", nullptr));
        menuLogged_in->setTitle(QCoreApplication::translate("MainPage", "Logged in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
