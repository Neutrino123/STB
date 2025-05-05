#include "CautaTraseu.h"
#include "./ui_CautaTraseu.h"
#include "ServerConnection.h"
#include "mainpage.h"
#include "RezultatCautareTraseu.h"
#include "RezultatePage.h"

CautaTraseu::CautaTraseu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CautaTraseu)
{
    ui->setupUi(this);
    this->setFixedSize(500, 350);
    this->error = new ErrorBox();
}

CautaTraseu::~CautaTraseu()
{
    delete ui;
}

void CautaTraseu::on_cautaTraseuButton_clicked(){

    //facem conexiunea cu serverul care o sa ne ofere informatiile acestea, pana atunci hardcodam

    QString statieInitialaIntrodusa = ui->textBoxPlecare->text().trimmed();
    QString statieFinalaIntrodusa = ui->textBoxDestinatie->text().trimmed();

    ServerConnection* server = new ServerConnection();
    server->readFromFile(":serverText/server.txt");
    server->connectToServer(server->getIp(), server->getPort());

    QString data = "cautaTraseu|" + statieInitialaIntrodusa + "|" + statieFinalaIntrodusa + "|";
    data += '\0';
    server->sendData(data);

   QString response = server->receiveData();
    qDebug() << response;

   // QString response = "tramvai001|autobuz102|autobuz104|awdasd|asdss|asdasd|asdas|sss|ssssss|sssssssss|dwwwww|dfghgfd|sadafgh|wertyuiytrewq|wqertewq|";

    if(response == "failed"){

        qDebug() << "Nu exista trasee pentru datele introduse mai sus";
        this->error->setMessage("Nu există transport");
        this->error->show();

    }
    else {

        QStringList coduriList = response.split("|");
        RezultatePage* ptrRezultatPage = new RezultatePage();

        for(int i = 0; i<coduriList.size()-1; i++){
            qDebug() << coduriList[i];
            ptrRezultatPage->adaugaRuta(coduriList[i]);
        }

        ptrRezultatPage->show();
    }
    delete server;

    // QString statieInitiala, statieFinala;
    // statieInitiala = "Rahova";
    // statieFinala = "Centrul Vechi";

    // QVector<QString> coduriTransport;

    // // Adăugăm coduri de tramvaie
    // coduriTransport.append("tramvai001");
    // coduriTransport.append("tramvai002");
    // coduriTransport.append("tramvai003");
    // coduriTransport.append("tramvai004");

    // // Adăugăm coduri de autobuze
    // coduriTransport.append("autobuz101");
    // coduriTransport.append("autobuz102");
    // coduriTransport.append("autobuz103");
    // coduriTransport.append("autobuz104");

    // QString statieInitialaIntrodusa = ui->textBoxPlecare->text().trimmed();
    // QString statieFinalaIntrodusa = ui->textBoxDestinatie->text().trimmed();
    // if(statieInitialaIntrodusa == statieInitiala && statieFinalaIntrodusa == statieFinala){

    //     for (const QString &cod : coduriTransport) {
    //         qDebug() << cod;
    //     }
    // }
    // else{
    //     qDebug() << "Nu gasim transport pentru datele introduse";
    // }

}
void CautaTraseu::setMainPagePointer(MainPage* ptrMainPagee){

    this->ptrMainPage = ptrMainPagee;

}

void CautaTraseu::on_backButton_clicked(){

    this->close();
    this->ptrMainPage->show();

}

