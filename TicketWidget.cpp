#include "TicketWidget.h"
#include <QDateTime>
#include <ServerConnection.h>

TicketWidget::TicketWidget(QString purchaseDate, QString expirationDate, QString biletId, QString busId, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TicketWidget)
{
    ui->setupUi(this);
    this->setFixedSize(193, 167);

    ui->purchaseDateLabel->setText("Purchase Date: " + purchaseDate);
    ui->expirationDateLabel->setText("Expiration Date: " + expirationDate);
    ui->validityLabel->setText("Valid for 1 hour");
    ui->ticketIdLabel->setText("Id bilet: " + biletId);
    ui->titleLabel->setText("BILET");
    ui->busIdLabel->setText("Id Vehicul: " + busId);

    // // Obține data curentă
    // QString currentTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    // ui->purchaseDateLabel->setText("Purchase Date: " + currentTime);

    // // Calculează data expirării (1 oră după achiziție)
    // QDateTime expirationTime = QDateTime::currentDateTime().addSecs(3600); // 1 oră = 3600 secunde
    // QString expirationDate = expirationTime.toString("yyyy-MM-dd HH:mm:ss");
    // ui->expirationDateLabel->setText("Expiration Date: " + expirationDate);

    // // Setează mesajul de validitate
    // ui->validityLabel->setText("Valid for 1 Hour");


}

TicketWidget::~TicketWidget()
{
    delete ui;
}
