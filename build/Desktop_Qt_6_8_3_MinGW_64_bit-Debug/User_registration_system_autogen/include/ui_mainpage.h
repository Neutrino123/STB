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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *notificationButton;
    QMenuBar *menubar;
    QMenu *menuLogged_in;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainPage->sizePolicy().hasHeightForWidth());
        MainPage->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        MainPage->setFont(font);
        MainPage->setStyleSheet(QString::fromUtf8("background-color: #121212; color: white;"));
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(30, 20, 351, 51));
        welcomeLabel->setStyleSheet(QString::fromUtf8("color: #00FF00; font-size: 32px; font-weight: bold;"));
        cautaTraseuButton = new QPushButton(centralwidget);
        cautaTraseuButton->setObjectName("cautaTraseuButton");
        cautaTraseuButton->setGeometry(QRect(300, 120, 180, 60));
        cautaTraseuButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 8px; font-weight: bold; font-size: 16px; padding: 10px;"));
        veziBiletButton = new QPushButton(centralwidget);
        veziBiletButton->setObjectName("veziBiletButton");
        veziBiletButton->setGeometry(QRect(300, 200, 180, 60));
        veziBiletButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 8px; font-weight: bold; font-size: 16px; padding: 10px;"));
        veziAmenziButton = new QPushButton(centralwidget);
        veziAmenziButton->setObjectName("veziAmenziButton");
        veziAmenziButton->setGeometry(QRect(300, 280, 180, 60));
        veziAmenziButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 8px; font-weight: bold; font-size: 16px; padding: 10px;"));
        veziHartaButton = new QPushButton(centralwidget);
        veziHartaButton->setObjectName("veziHartaButton");
        veziHartaButton->setGeometry(QRect(300, 360, 180, 60));
        veziHartaButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 8px; font-weight: bold; font-size: 16px; padding: 10px;"));
        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(640, 520, 120, 40));
        logoutButton->setStyleSheet(QString::fromUtf8("background-color: #FF4444; color: white; border-radius: 6px; font-weight: bold; font-size: 14px;"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(500, 130, 48, 48));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/bus.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(500, 210, 48, 48));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/ticket.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(500, 290, 48, 48));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/administrative-fine.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(500, 370, 48, 48));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/map.png")));
        label_4->setScaledContents(true);
        notificationButton = new QPushButton(centralwidget);
        notificationButton->setObjectName("notificationButton");
        notificationButton->setGeometry(QRect(750, 10, 32, 32));
        notificationButton->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/bell.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon.addFile(QString::fromUtf8(":/icons/icons/notification.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        notificationButton->setIcon(icon);
        notificationButton->setIconSize(QSize(24, 24));
        MainPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        cautaTraseuButton->setText(QCoreApplication::translate("MainPage", "Caut\304\203 Traseu", nullptr));
        veziBiletButton->setText(QCoreApplication::translate("MainPage", "Vezi Bilet", nullptr));
        veziAmenziButton->setText(QCoreApplication::translate("MainPage", "Amenzi", nullptr));
        veziHartaButton->setText(QCoreApplication::translate("MainPage", "Vezi Hart\304\203", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainPage", "Logout", nullptr));
        menuLogged_in->setTitle(QCoreApplication::translate("MainPage", "Logged in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
