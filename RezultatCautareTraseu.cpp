#include "RezultatCautareTraseu.h"
#include "./ui_RezultatCautareTraseu.h"
#include "ServerConnection.h"
#include "TicketWidget.h"
#include "TicketListPage.h"


RezultatCautareTraseu::RezultatCautareTraseu(TicketListPage* biletePagePtr, QString denumire, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RezultatCautareTraseu)
{
    ui->setupUi(this);
    QLabel* label = findChild<QLabel*>("traseuLabel");
    label->setText(denumire);
    this->biletePage = biletePagePtr;
}

RezultatCautareTraseu::~RezultatCautareTraseu()
{
    delete ui;
}


void RezultatCautareTraseu::on_buyTicketButton_clicked(){

    qDebug()<<"Ai cumparat bilet pentru "<<ui->traseuLabel->text();
    ui->buyTicketButton->setText("Cumparat!");

    ServerConnection* server = new ServerConnection();
    server->connectToServer("127.0.0.1", 12345);
    server->sendData("bilet|");

    QString response = server->receiveData();



    if(response == "success"){

        qDebug()<<"Serverul a creat si trimis biletul cu succes";
        TicketWidget* bilet = new TicketWidget();
        this->biletePage->adaugaBilet(bilet);
    }
    // }

    // else{
    //     qDebug() << "Deja ai cumparat un bilet";
    // }

}
