/********************************************************************************
** Form generated from reading UI file 'TicketListPage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETLISTPAGE_H
#define UI_TICKETLISTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicketListPage
{
public:
    QVBoxLayout *mainLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *ticketLayout;

    void setupUi(QWidget *TicketListPage)
    {
        if (TicketListPage->objectName().isEmpty())
            TicketListPage->setObjectName("TicketListPage");
        TicketListPage->resize(400, 600);
        mainLayout = new QVBoxLayout(TicketListPage);
        mainLayout->setObjectName("mainLayout");
        scrollArea = new QScrollArea(TicketListPage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 0));
        ticketLayout = new QVBoxLayout(scrollAreaWidgetContents);
        ticketLayout->setObjectName("ticketLayout");
        scrollArea->setWidget(scrollAreaWidgetContents);

        mainLayout->addWidget(scrollArea);


        retranslateUi(TicketListPage);

        QMetaObject::connectSlotsByName(TicketListPage);
    } // setupUi

    void retranslateUi(QWidget *TicketListPage)
    {
        TicketListPage->setWindowTitle(QCoreApplication::translate("TicketListPage", "Bilete Cump\304\203rate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicketListPage: public Ui_TicketListPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETLISTPAGE_H
