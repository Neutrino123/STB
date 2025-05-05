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
#include <QtGui/QIcon>
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
    QLabel *ticketIcon;
    QPushButton *oferaAmendaButton;
    QLabel *fineIcon;
    QPushButton *logoutButton;
    QPushButton *notificationButton;
    QMenuBar *menubar;
    QMenu *menuLogged_in;

    void setupUi(QMainWindow *ControlorPage)
    {
        if (ControlorPage->objectName().isEmpty())
            ControlorPage->setObjectName("ControlorPage");
        ControlorPage->resize(800, 600);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        ControlorPage->setFont(font);
        ControlorPage->setStyleSheet(QString::fromUtf8("background-color: #121212; color: white;"));
        centralwidget = new QWidget(ControlorPage);
        centralwidget->setObjectName("centralwidget");
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setGeometry(QRect(90, 20, 620, 50));
        welcomeLabel->setStyleSheet(QString::fromUtf8("color: #00FF00; font-size: 28px; font-weight: bold;"));
        verificaBiletButton = new QPushButton(centralwidget);
        verificaBiletButton->setObjectName("verificaBiletButton");
        verificaBiletButton->setGeometry(QRect(280, 175, 200, 60));
        verificaBiletButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 8px; font-weight: bold; font-size: 16px; padding: 10px;"));
        ticketIcon = new QLabel(centralwidget);
        ticketIcon->setObjectName("ticketIcon");
        ticketIcon->setGeometry(QRect(490, 180, 48, 48));
        ticketIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/ticket.png")));
        ticketIcon->setScaledContents(true);
        oferaAmendaButton = new QPushButton(centralwidget);
        oferaAmendaButton->setObjectName("oferaAmendaButton");
        oferaAmendaButton->setGeometry(QRect(280, 325, 200, 60));
        oferaAmendaButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 8px; font-weight: bold; font-size: 16px; padding: 10px;"));
        fineIcon = new QLabel(centralwidget);
        fineIcon->setObjectName("fineIcon");
        fineIcon->setGeometry(QRect(490, 330, 48, 48));
        fineIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/administrative-fine.png")));
        fineIcon->setScaledContents(true);
        logoutButton = new QPushButton(centralwidget);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(600, 500, 120, 40));
        logoutButton->setStyleSheet(QString::fromUtf8("background-color: #FF4444; color: white; border-radius: 6px; font-weight: bold; font-size: 14px;"));
        notificationButton = new QPushButton(centralwidget);
        notificationButton->setObjectName("notificationButton");
        notificationButton->setGeometry(QRect(730, 20, 32, 32));
        notificationButton->setStyleSheet(QString::fromUtf8("background-color: transparent; border: none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/bell.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon.addFile(QString::fromUtf8(":/icons/icons/notification.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        notificationButton->setIcon(icon);
        notificationButton->setIconSize(QSize(24, 24));
        ControlorPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ControlorPage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuLogged_in = new QMenu(menubar);
        menuLogged_in->setObjectName("menuLogged_in");
        ControlorPage->setMenuBar(menubar);

        menubar->addAction(menuLogged_in->menuAction());

        retranslateUi(ControlorPage);

        QMetaObject::connectSlotsByName(ControlorPage);
    } // setupUi

    void retranslateUi(QMainWindow *ControlorPage)
    {
        ControlorPage->setWindowTitle(QCoreApplication::translate("ControlorPage", "Controlor", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("ControlorPage", "Welcome, <username>", nullptr));
        verificaBiletButton->setText(QCoreApplication::translate("ControlorPage", "Verific\304\203 Bilet", nullptr));
        oferaAmendaButton->setText(QCoreApplication::translate("ControlorPage", "Ofer\304\203 Amend\304\203", nullptr));
        logoutButton->setText(QCoreApplication::translate("ControlorPage", "Logout", nullptr));
        menuLogged_in->setTitle(QCoreApplication::translate("ControlorPage", "Logged in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlorPage: public Ui_ControlorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLORPAGE_H
