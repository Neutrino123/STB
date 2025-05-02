/********************************************************************************
** Form generated from reading UI file 'RezultatePage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REZULTATEPAGE_H
#define UI_REZULTATEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RezultatePage
{
public:
    QWidget *widget;
    QVBoxLayout *mainVerticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *ruteLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *RezultatePage)
    {
        if (RezultatePage->objectName().isEmpty())
            RezultatePage->setObjectName("RezultatePage");
        RezultatePage->resize(500, 400);
        RezultatePage->setStyleSheet(QString::fromUtf8("background-color: #121212; color: white;"));
        widget = new QWidget(RezultatePage);
        widget->setObjectName("widget");
        mainVerticalLayout = new QVBoxLayout(widget);
        mainVerticalLayout->setObjectName("mainVerticalLayout");
        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 480, 380));
        ruteLayout = new QVBoxLayout(scrollAreaWidgetContents);
        ruteLayout->setObjectName("ruteLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        ruteLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        mainVerticalLayout->addWidget(scrollArea);

        RezultatePage->setCentralWidget(widget);

        retranslateUi(RezultatePage);

        QMetaObject::connectSlotsByName(RezultatePage);
    } // setupUi

    void retranslateUi(QMainWindow *RezultatePage)
    {
        RezultatePage->setWindowTitle(QCoreApplication::translate("RezultatePage", "Rute Disponibile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RezultatePage: public Ui_RezultatePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REZULTATEPAGE_H
