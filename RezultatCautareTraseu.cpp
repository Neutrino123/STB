#include "RezultatCautareTraseu.h"
#include "./ui_RezultatCautareTraseu.h"
#include "ServerConnection.h"
#include "TicketWidget.h"
#include "TicketListPage.h"
#include "SuccessBox.h"
#include "ErrorBox.h"


RezultatCautareTraseu::RezultatCautareTraseu(QString denumire, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RezultatCautareTraseu)
{
    ui->setupUi(this);
    QLabel* label = findChild<QLabel*>("traseuLabel");
    label->setText(denumire);

}

RezultatCautareTraseu::~RezultatCautareTraseu()
{
    delete ui;
}

void RezultatCautareTraseu::on_buyTicketButton_clicked(){

   // qDebug()<<"Ai cumparat bilet pentru "<<ui->traseuLabel->text();

    ServerConnection* server = new ServerConnection();
    server->readFromFile(":serverText/server.txt");
    server->connectToServer(server->getIp(), server->getPort());

    server->sendData("bilet|");

    QString response = server->receiveData();

    if(response == "success"){

        qDebug()<<"Serverul a creat si trimis biletul cu succes";
        SuccessBox* success = new SuccessBox();
        success->setMessage("Ai cumpărat biletul!");
        success->show();

    }

    else{
        ErrorBox* error = new ErrorBox();
        error->setMessage("Eroare!");
        error->show();
    }
    delete server;

}
