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
    server->connectToServer("127.0.0.1", 12345);
    QString data = "cautaTraseu|" + statieInitialaIntrodusa + "|" + statieFinalaIntrodusa + "|";
    data += '\0';
    server->sendData(data);

   // QString response = server->receiveData();

    QString response = "tramvai001|autobuz102|autobuz104|awdasd|asdss|asdasd|asdas|sss|ssssss|sssssssss|dwwwww|dfghgfd|sadafgh|wertyuiytrewq|wqertewq|";

    if(response == "failed"){

        qDebug() << "Nu exista trasee pentru datele introduse mai sus";

    }
    else {

        QStringList coduriList = response.split("|");
        RezultatePage* ptrRezultatPage = new RezultatePage(this->biletePage);

        for (const QString &cod : coduriList) {
            qDebug() << cod;
            ptrRezultatPage->adaugaRuta(cod);
        }
        ptrRezultatPage->show();
    }

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
void CautaTraseu::setBiletePagePointer(TicketListPage* ptrBiletePage){

    this->biletePage = ptrBiletePage;

}



void CautaTraseu::on_backButton_clicked(){

    this->close();
    this->ptrMainPage->show();

}

