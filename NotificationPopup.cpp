#include "NotificationPopup.h"
#include "./ui_NotificationPopup.h"
#include "NotificationLabel.h"

NotificationPopup::NotificationPopup(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::NotificationPopup)
{
    ui->setupUi(this);

    // Poziționare relativă la butonul de notificare (clopoțel)
    setWindowFlags(Qt::FramelessWindowHint | Qt::Popup);
    setAttribute(Qt::WA_TranslucentBackground);
}

NotificationPopup::~NotificationPopup() {
    delete ui;
}

void NotificationPopup::addNotification(const QString &message) {

    NotificationLabel *notif = new NotificationLabel(this);
    notif->setPopup(this);
    notif->setMessage(message);
    ui->verticalLayout->addWidget(notif);

}
