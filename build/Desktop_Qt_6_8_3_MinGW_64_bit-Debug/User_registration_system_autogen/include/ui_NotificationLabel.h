/********************************************************************************
** Form generated from reading UI file 'NotificationLabel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATIONLABEL_H
#define UI_NOTIFICATIONLABEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotificationLabel
{
public:
    QVBoxLayout *notificationLayout;
    QPushButton *closeButton;
    QLabel *messageLabel;

    void setupUi(QWidget *NotificationLabel)
    {
        if (NotificationLabel->objectName().isEmpty())
            NotificationLabel->setObjectName("NotificationLabel");
        NotificationLabel->resize(182, 104);
        NotificationLabel->setStyleSheet(QString::fromUtf8("\n"
"    QWidget {\n"
"        background-color: #5c5c5c;\n"
"        border-radius: 6px;\n"
"        padding: 8px;\n"
"        margin-bottom: 6px;\n"
"    }\n"
"    QLabel {\n"
"        color: white;\n"
"        font-size: 12px;\n"
"        font-weight: bold;\n"
"        padding-left: 20px; /* Ad\304\203ug\304\203m spa\310\233iu pentru text */\n"
"    }\n"
"    QPushButton {\n"
"        background: transparent;\n"
"        border: none;\n"
"        padding: 0;\n"
"        width: 24px;  /* Butonul este mai mare acum */\n"
"        height: 24px; /* Butonul este mai mare acum */\n"
"        position: absolute;\n"
"        top: 6px;  /* Pozi\310\233ion\304\203m butonul \"X\" \303\256n col\310\233ul din sus */\n"
"        right: 6px; /* Pozi\310\233ion\304\203m butonul \"X\" \303\256n col\310\233ul din dreapta */\n"
"        cursor: pointer;\n"
"    }\n"
"    QPushButton:hover {\n"
"        background-color: rgba(255, 0, 0, 0.5); /* Mai vizibil la hover */\n"
"    }\n"
"   "));
        notificationLayout = new QVBoxLayout(NotificationLabel);
        notificationLayout->setObjectName("notificationLayout");
        closeButton = new QPushButton(NotificationLabel);
        closeButton->setObjectName("closeButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);
        closeButton->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/close.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        closeButton->setIcon(icon);

        notificationLayout->addWidget(closeButton);

        messageLabel = new QLabel(NotificationLabel);
        messageLabel->setObjectName("messageLabel");
        messageLabel->setStyleSheet(QString::fromUtf8("font-size: 12px; color: white; padding-left: 10px; font-weight: bold;"));
        messageLabel->setWordWrap(true);

        notificationLayout->addWidget(messageLabel);


        retranslateUi(NotificationLabel);

        QMetaObject::connectSlotsByName(NotificationLabel);
    } // setupUi

    void retranslateUi(QWidget *NotificationLabel)
    {
        messageLabel->setText(QCoreApplication::translate("NotificationLabel", "Mesaj notificare", nullptr));
        (void)NotificationLabel;
    } // retranslateUi

};

namespace Ui {
    class NotificationLabel: public Ui_NotificationLabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATIONLABEL_H
