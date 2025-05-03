#include "VerificaBilet.h"
#include "./ui_VerificaBilet.h"
#include "ServerConnection.h"
#include <QMessageBox>

VerificaBilet::VerificaBilet(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VerificaBilet)
{
    ui->setupUi(this);

    // Exemplu: Conectare butoane (poți completa mai târziu)
    // connect(ui->buttonVerifica, &QPushButton::clicked, this, &VerificaBilet::onVerificaClicked);
    // connect(ui->buttonRenunta, &QPushButton::clicked, this, &VerificaBilet::close);
}

void VerificaBilet::on_verificaButton_clicked(){

    ServerConnection* server = new ServerConnection();
    server->connectToServer("127.0.0.1", 12345);
    QString idBilet =  ui->labelIdBilet->text().trimmed();
    QString data = "verificaBilet|" + idBilet + "|";
    data += '\0';
\
    server->sendData(data);

    QString response = server->receiveData();
    if(response == "success"){
        QMessageBox::information(this, "Success", "Bilet Valid");
    }
    else{
        QMessageBox::information(this, "Failed", "Bilet Invalid");
    }

}
void VerificaBilet::on_renuntaButton_clicked(){

    this->close();

}

VerificaBilet::~VerificaBilet()
{
    delete ui;
}
