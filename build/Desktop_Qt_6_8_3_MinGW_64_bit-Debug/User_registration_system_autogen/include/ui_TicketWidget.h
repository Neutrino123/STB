/********************************************************************************
** Form generated from reading UI file 'TicketWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETWIDGET_H
#define UI_TICKETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicketWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *purchaseDateLabel;
    QLabel *expirationDateLabel;
    QLabel *validityLabel;
    QLabel *ticketIdLabel;
    QLabel *busIdLabel;

    void setupUi(QWidget *TicketWidget)
    {
        if (TicketWidget->objectName().isEmpty())
            TicketWidget->setObjectName("TicketWidget");
        TicketWidget->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #2c2c2c;\n"
"    border: 1px solid #444;\n"
"    border-radius: 10px;\n"
"    color: #ffffff;\n"
"   "));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TicketWidget->sizePolicy().hasHeightForWidth());
        TicketWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(TicketWidget);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(TicketWidget);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(18);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        purchaseDateLabel = new QLabel(TicketWidget);
        purchaseDateLabel->setObjectName("purchaseDateLabel");
        purchaseDateLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(purchaseDateLabel);

        expirationDateLabel = new QLabel(TicketWidget);
        expirationDateLabel->setObjectName("expirationDateLabel");
        expirationDateLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(expirationDateLabel);

        validityLabel = new QLabel(TicketWidget);
        validityLabel->setObjectName("validityLabel");
        validityLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(validityLabel);

        ticketIdLabel = new QLabel(TicketWidget);
        ticketIdLabel->setObjectName("ticketIdLabel");
        ticketIdLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ticketIdLabel);

        busIdLabel = new QLabel(TicketWidget);
        busIdLabel->setObjectName("busIdLabel");
        busIdLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(busIdLabel);


        retranslateUi(TicketWidget);

        QMetaObject::connectSlotsByName(TicketWidget);
    } // setupUi

    void retranslateUi(QWidget *TicketWidget)
    {
        titleLabel->setText(QCoreApplication::translate("TicketWidget", "TICKET", nullptr));
        purchaseDateLabel->setText(QCoreApplication::translate("TicketWidget", "Purchase Date: 2025-04-27 14:30", nullptr));
        expirationDateLabel->setText(QCoreApplication::translate("TicketWidget", "Expiration Date: 2025-04-27 15:30", nullptr));
        validityLabel->setText(QCoreApplication::translate("TicketWidget", "Valid for 1 Hour", nullptr));
        ticketIdLabel->setText(QCoreApplication::translate("TicketWidget", "Ticket ID: 123456", nullptr));
        busIdLabel->setText(QCoreApplication::translate("TicketWidget", "Bus ID: 42B", nullptr));
        (void)TicketWidget;
    } // retranslateUi

};

namespace Ui {
    class TicketWidget: public Ui_TicketWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETWIDGET_H
