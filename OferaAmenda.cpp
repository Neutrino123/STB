#include "OferaAmenda.h"
#include "./ui_OferaAmenda.h"
#include "ServerConnection.h"
#include <QRegularExpression>

OferaAmenda::OferaAmenda(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OferaAmenda)
{
    ui->setupUi(this);
    this->errorBox = new ErrorBox();
    this->successBox = new SuccessBox();

}

void OferaAmenda::on_aplicaButton_clicked(){

    QString cnp = ui->lineEdit_cnp->text().trimmed();
    QString suma = ui->lineEdit_suma->text().trimmed();
    QString motiv = ui->lineEdit_motiv->text().trimmed();

    QRegularExpression cnpRegex("^\\d{13}$");
    QRegularExpression sumaRegex("^\\d{1,3}$");

    if (!cnpRegex.match(cnp).hasMatch()) {
        this->errorBox->setMessage("CNP invalid");
        this->errorBox->show();
        return;
    }

    if (!sumaRegex.match(suma).hasMatch()) {

        this->errorBox->setMessage("Sumă invalidă");
        this->errorBox->show();
        return;
    }

    ServerConnection* server = new ServerConnection();
    server->readFromFile(":serverText/server.txt");
    server->connectToServer(server->getIp(), server->getPort());
    qDebug()<<server->getIp() <<" " << server->getPort();

    QString data = "oferaAmenda|" + cnp + "|" + suma + "|" + motiv + "|";
    data += '\0';

    server->sendData(data);

    QString response = server->receiveData();
    qDebug() << response;
    if(response == "success"){
        this->successBox->setMessage("Amenda trimisă cu succes!");
        this->successBox->show();
        this->close();

    }
    else{
        this->errorBox->setMessage("Nu am putut trimite amenda!");
        this->errorBox->show();
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
