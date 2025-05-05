#include "AmendaWidget.h"
#include "./ui_AmendaWidget.h"
#include "ServerConnection.h"
#include "ErrorBox.h"
#include "SuccessBox.h"

AmendaWidget::AmendaWidget(QString suma, QString motiv, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AmendaWidget)
{
    ui->setupUi(this);
    this->setFixedSize(200,200);
    ui->sumaLabel->setText("Suma: " + suma);
    ui->motivLabel->setText("Motiv: " + motiv);
}

AmendaWidget::~AmendaWidget()
{
    delete ui;
}

void AmendaWidget::on_platesteButton_clicked()
{
    ServerConnection* server = new ServerConnection();
    server->readFromFile(":serverText/server.txt");
    server->connectToServer(server->getIp(), server->getPort());

    QString data = "platesteAmenda|";
    data += '\0';

    server->sendData(data);

    QString response = server->receiveData();
    qDebug()<<response;

    if(response == "failed"){
        ErrorBox* error = new ErrorBox();
        error->setMessage("Eroare");
        error->show();
    }
    else
    {
        SuccessBox* success = new SuccessBox();
        success->setMessage("Ai platit amenda!");
        success->show();
        this->deleteLater();  // sterge widgetul
    }
    delete server;

}
