#include "NotificationLabel.h"
#include "./ui_NotificationLabel.h"
#include "NotificationPopup.h"

NotificationLabel::NotificationLabel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NotificationLabel)
{
    ui->setupUi(this);
    this->setFixedSize(182, 104);
}

NotificationLabel::~NotificationLabel()
{
    delete ui;
}

void NotificationLabel::setMessage(const QString &message)
{
    ui->messageLabel->setText(message);
}

void NotificationLabel::on_closeButton_clicked(){

    this->close();
    this->popup->resize(250, 0);

}

void NotificationLabel::setPopup(NotificationPopup* popup){
    this->popup = popup;
}
