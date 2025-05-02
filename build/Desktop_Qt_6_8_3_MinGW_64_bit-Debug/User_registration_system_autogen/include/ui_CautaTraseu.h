/********************************************************************************
** Form generated from reading UI file 'CautaTraseu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAUTATRASEU_H
#define UI_CAUTATRASEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CautaTraseu
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelPlecare;
    QLineEdit *textBoxPlecare;
    QLabel *labelDestinatie;
    QLineEdit *textBoxDestinatie;
    QPushButton *cautaTraseuButton;
    QPushButton *backButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *CautaTraseu)
    {
        if (CautaTraseu->objectName().isEmpty())
            CautaTraseu->setObjectName("CautaTraseu");
        CautaTraseu->resize(500, 350);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        CautaTraseu->setFont(font);
        CautaTraseu->setStyleSheet(QString::fromUtf8("background-color: #121212; color: white;"));
        centralwidget = new QWidget(CautaTraseu);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        labelPlecare = new QLabel(centralwidget);
        labelPlecare->setObjectName("labelPlecare");

        verticalLayout->addWidget(labelPlecare);

        textBoxPlecare = new QLineEdit(centralwidget);
        textBoxPlecare->setObjectName("textBoxPlecare");
        textBoxPlecare->setStyleSheet(QString::fromUtf8("background-color: #1E1E1E; color: white; border: 1px solid #4CAF50; border-radius: 5px; padding: 5px;"));

        verticalLayout->addWidget(textBoxPlecare);

        labelDestinatie = new QLabel(centralwidget);
        labelDestinatie->setObjectName("labelDestinatie");

        verticalLayout->addWidget(labelDestinatie);

        textBoxDestinatie = new QLineEdit(centralwidget);
        textBoxDestinatie->setObjectName("textBoxDestinatie");
        textBoxDestinatie->setStyleSheet(QString::fromUtf8("background-color: #1E1E1E; color: white; border: 1px solid #4CAF50; border-radius: 5px; padding: 5px;"));

        verticalLayout->addWidget(textBoxDestinatie);

        cautaTraseuButton = new QPushButton(centralwidget);
        cautaTraseuButton->setObjectName("cautaTraseuButton");
        cautaTraseuButton->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; border-radius: 5px; font-weight: bold; font-size: 14px; padding: 10px; transition: background-color 0.3s ease;"));

        verticalLayout->addWidget(cautaTraseuButton);

        backButton = new QPushButton(centralwidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(200, 270, 100, 40));
        backButton->setStyleSheet(QString::fromUtf8("background-color: red; color: white; border-radius: 5px; font-weight: bold; font-size: 14px; padding: 10px;"));

        verticalLayout->addWidget(backButton);

        CautaTraseu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CautaTraseu);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 500, 21));
        CautaTraseu->setMenuBar(menubar);

        retranslateUi(CautaTraseu);

        QMetaObject::connectSlotsByName(CautaTraseu);
    } // setupUi

    void retranslateUi(QMainWindow *CautaTraseu)
    {
        CautaTraseu->setWindowTitle(QCoreApplication::translate("CautaTraseu", "Cauta Traseu", nullptr));
        labelPlecare->setText(QCoreApplication::translate("CautaTraseu", "Zon\304\203 Plecare:", nullptr));
        labelDestinatie->setText(QCoreApplication::translate("CautaTraseu", "Destina\310\233ie:", nullptr));
        cautaTraseuButton->setText(QCoreApplication::translate("CautaTraseu", "Caut\304\203 Traseu", nullptr));
        backButton->setText(QCoreApplication::translate("CautaTraseu", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CautaTraseu: public Ui_CautaTraseu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAUTATRASEU_H
