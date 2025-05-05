/********************************************************************************
** Form generated from reading UI file 'NotificationPopup.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTIFICATIONPOPUP_H
#define UI_NOTIFICATIONPOPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NotificationPopup
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *NotificationPopup)
    {
        if (NotificationPopup->objectName().isEmpty())
            NotificationPopup->setObjectName("NotificationPopup");
        NotificationPopup->resize(250, 200);
        NotificationPopup->setStyleSheet(QString::fromUtf8("\n"
"      background-color: #4d4d4d;\n"
"      border-radius: 8px;\n"
"      color: white;\n"
"      box-shadow: 0px 4px 12px rgba(0, 0, 0, 0.5); /* Ad\304\203ugarea umbrei */\n"
"   "));
        verticalLayout = new QVBoxLayout(NotificationPopup);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(10, 20, 10, 10);

        retranslateUi(NotificationPopup);

        QMetaObject::connectSlotsByName(NotificationPopup);
    } // setupUi

    void retranslateUi(QDialog *NotificationPopup)
    {
        NotificationPopup->setWindowTitle(QCoreApplication::translate("NotificationPopup", "NotificationPopup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotificationPopup: public Ui_NotificationPopup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTIFICATIONPOPUP_H
