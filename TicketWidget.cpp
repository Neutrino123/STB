#include "TicketWidget.h"
#include <QDateTime>
#include <ServerConnection.h>

TicketWidget::TicketWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TicketWidget)
{
    ui->setupUi(this);

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
