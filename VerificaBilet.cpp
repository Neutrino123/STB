#include "VerificaBilet.h"
#include "./ui_VerificaBilet.h"
#include "ServerConnection.h"
#include <QMessageBox>

VerificaBilet::VerificaBilet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VerificaBilet)
{
    ui->setupUi(this);
    this->errorBox = new ErrorBox();
    this->successBox = new SuccessBox();

}

void VerificaBilet::on_verificaButton_clicked(){

    ServerConnection* server = new ServerConnection();
    server->readFromFile(":serverText/server.txt");
    server->connectToServer(server->getIp(), server->getPort());
    qDebug()<<server->getIp() <<" " << server->getPort();

    QString idBilet =  ui->labelIdBilet->text().trimmed();
    QString data = "verificaBilet|" + idBilet + "|";
    data += '\0';

    server->sendData(data);

   QString response = server->receiveData();

    if(response == "success"){
        this->successBox->setMessage("Biletul este valid!");
        this->successBox->show();
        this->close();
    }
    else{
        this->errorBox->setMessage("Biletul este invalid");
        this->errorBox->show();
    }
    delete server;

}
void VerificaBilet::on_renuntaButton_clicked(){

    this->close();

}

VerificaBilet::~VerificaBilet()
{
    delete ui;
}
