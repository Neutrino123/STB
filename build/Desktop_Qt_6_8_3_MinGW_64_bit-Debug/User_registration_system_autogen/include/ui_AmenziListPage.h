/********************************************************************************
** Form generated from reading UI file 'AmenziListPage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMENZILISTPAGE_H
#define UI_AMENZILISTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AmenziListPage
{
public:
    QVBoxLayout *mainLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetAmenzi;
    QVBoxLayout *ticketLayout;

    void setupUi(QWidget *AmenziListPage)
    {
        if (AmenziListPage->objectName().isEmpty())
            AmenziListPage->setObjectName("AmenziListPage");
        AmenziListPage->resize(250, 400);
        mainLayout = new QVBoxLayout(AmenziListPage);
        mainLayout->setObjectName("mainLayout");
        scrollArea = new QScrollArea(AmenziListPage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetAmenzi = new QWidget();
        scrollAreaWidgetAmenzi->setObjectName("scrollAreaWidgetAmenzi");
        scrollAreaWidgetAmenzi->setGeometry(QRect(0, 0, 380, 580));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetAmenzi->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetAmenzi->setSizePolicy(sizePolicy);
        scrollAreaWidgetAmenzi->setMinimumSize(QSize(0, 0));
        ticketLayout = new QVBoxLayout(scrollAreaWidgetAmenzi);
        ticketLayout->setObjectName("ticketLayout");
        scrollArea->setWidget(scrollAreaWidgetAmenzi);

        mainLayout->addWidget(scrollArea);


        retranslateUi(AmenziListPage);

        QMetaObject::connectSlotsByName(AmenziListPage);
    } // setupUi

    void retranslateUi(QWidget *AmenziListPage)
    {
        AmenziListPage->setWindowTitle(QCoreApplication::translate("AmenziListPage", "Amenzi Primite", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AmenziListPage: public Ui_AmenziListPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMENZILISTPAGE_H
