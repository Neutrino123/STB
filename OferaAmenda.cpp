#include "OferaAmenda.h"
#include "./ui_OferaAmenda.h"
#include "ServerConnection.h"

OferaAmenda::OferaAmenda(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OferaAmenda)
{
    ui->setupUi(this);

}

void OferaAmenda::on_aplicaButton_clicked(){

    ServerConnection* server = new ServerConnection();
    server->connectToServer("127.0.0.1", 12345);

    QString cnp = ui->lineEdit_cnp->text().trimmed();
    QString suma = ui->lineEdit_suma->text().trimmed();
    QString motiv = ui->lineEdit_motiv->text().trimmed();

    QString data = "amenda|" + cnp + "|" + suma + "|" + motiv + "|";
    data += '\0';

    server->sendData(data);

    QString response = server->receiveData();
    qDebug() << response;
    if(response == "success"){

        qDebug() << "Amenda trimisa cu succes";
        this->close();

    }
    else{
        qDebug() << "Nu am reusit sa trimit amenda! Date introduse gresit";
    }

    delete server;

}
void OferaAmenda::on_renuntaButton_clicked(){

    this->close();

}

OferaAmenda::~OferaAmenda()
{
    delete ui;
}
