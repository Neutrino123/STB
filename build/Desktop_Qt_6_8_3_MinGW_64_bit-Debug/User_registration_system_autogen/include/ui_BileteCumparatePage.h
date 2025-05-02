/********************************************************************************
** Form generated from reading UI file 'BileteCumparatePage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILETECUMPARATEPAGE_H
#define UI_BILETECUMPARATEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BileteCumparatePage
{
public:
    QWidget *widget;
    QVBoxLayout *mainVerticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *ruteLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *BileteCumparatePage)
    {
        if (BileteCumparatePage->objectName().isEmpty())
            BileteCumparatePage->setObjectName("BileteCumparatePage");
        BileteCumparatePage->resize(500, 400);
        BileteCumparatePage->setStyleSheet(QString::fromUtf8("background-color: #121212; color: white;"));
        widget = new QWidget(BileteCumparatePage);
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

        BileteCumparatePage->setCentralWidget(widget);

        retranslateUi(BileteCumparatePage);

        QMetaObject::connectSlotsByName(BileteCumparatePage);
    } // setupUi

    void retranslateUi(QMainWindow *BileteCumparatePage)
    {
        BileteCumparatePage->setWindowTitle(QCoreApplication::translate("BileteCumparatePage", "Rute Disponibile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BileteCumparatePage: public Ui_BileteCumparatePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILETECUMPARATEPAGE_H
