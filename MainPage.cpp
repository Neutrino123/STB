#include "MainPage.h"
#include "ui_MainPage.h"
#include "LoginPage.h"
#include "CautaTraseu.h"
#include "TicketWidget.h"
#include "AmenziListPage.h"
#include <QDesktopServices>
#include <QUrl>
#include "NotificationPopup.h"
#include "ErrorBox.h"
#include "SuccessBox.h"


MainPage::MainPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
    this->welcomeLabel = ui->welcomeLabel;
    if(hasNotification()){

        QPushButton *notificationButton = ui->notificationButton;
        notificationButton->setIcon(QIcon(":/icons/icons/notification.png"));

    }
    this->setFixedSize(800, 600);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowCloseButtonHint);

}

MainPage::~MainPage()
{
    delete ui;
}
void MainPage::on_logoutButton_clicked(){

    qDebug() << "butonul de logout merge \n";
    LoginPage* ptrLoginPage = new LoginPage();
    ptrLoginPage->show();
    this->close();
}

void MainPage::on_veziAmenziButton_clicked(){

    //vom face de fiecare data un serverConnection pentru a primi amenzile;
    ServerConnection* server = new ServerConnection();
    server->readFromFile(":serverText/server.txt");
    server->connectToServer(server->getIp(), server->getPort());
    qDebug()<<server->getIp() <<" " << server->getPort();
    QString data = "veziAmenzi|";
    data += '\0';

    server->sendData(data);

    QString response = server->receiveData();
    if(response == "failed"){

        SuccessBox* success = new SuccessBox();
        success->setMessage("Nu ai nicio amenda");
        success->show();

    }
    else
    {
        QStringList amenziList = response.split(".");
        AmenziListPage* amenziPage = new AmenziListPage();

        for(int i = 0; i<amenziList.size()-1; i++){
            qDebug() << amenziList[i];
            QStringList infoAmenda = amenziList[i].split("|");
            AmendaWidget* amenda = new AmendaWidget(infoAmenda[0], infoAmenda[1]);
            amenziPage->adaugaAmenda(amenda);
        }

        amenziPage->show();
    }
    delete server;
    // AmenziListPage* amenziPage = new AmenziListPage();

    // AmendaWidget* amenda1 = new AmendaWidget();
    // AmendaWidget* amenda2 = new AmendaWidget();
    // amenziPage->adaugaAmenda(amenda1);
    // amenziPage->adaugaAmenda(amenda2);

    // qDebug()<<"Am ajuns aici";

    // amenziPage->show();
}

//  void MainPage::on_cumparaBiletButton_clicked(){

// //     // ServerConnection* server = new ServerConnection();
// //     // server->connectToServer("127.0.0.1", 12345);
// //     // QString response = "";

// //     ServerConnection* server = new ServerConnection();
// //     server->connectToServer("127.0.0.1", 12345);
// //     server->sendData("bilet");

// //     QString response = server->receiveData();

// //     if(response == "success" && this->ticket == nullptr){

// //         qDebug()<<"Serverul a creat si trimis biletul cu succes";
// //         if(this->ticket == nullptr){
// //             qDebug() << "am cumparat bilet";
// //             this->ticket = new TicketWidget();
// //         }

// //     }

// //     else{
// //         qDebug() << "Deja ai cumparat un bilet";
// //     }


//  }

void MainPage::on_veziBiletButton_clicked(){

    ServerConnection* server = new ServerConnection();
    server->readFromFile(":serverText/server.txt");
    server->connectToServer(server->getIp(), server->getPort());

    QString data = "bileteCumparate|";
    data += '\0';

    server->sendData(data);

    QString response = server->receiveData();
    qDebug()<<response;

    if(response == "failed"){
        ErrorBox* error = new ErrorBox();
        error->setMessage("Nu ai niciun bilet");
        error->show();
    }
    else{
        QStringList bileteList = response.split(".");
        TicketListPage* biletePage = new TicketListPage();

        for(int i = 0; i<bileteList.size(); i++){
            qDebug() << bileteList[i];
            QStringList infoBilet = bileteList[i].split("|");
            TicketWidget* bilet = new TicketWidget(infoBilet[0], infoBilet[1], infoBilet[2], infoBilet[3]);
            biletePage->adaugaBilet(bilet);
        }

        biletePage->show();
    }
    delete server;

}

void MainPage::on_veziHartaButton_clicked(){

  QDesktopServices::openUrl(QUrl("https://www.google.com/maps"));

}

void MainPage::on_notificationButton_clicked(){

    QPushButton *notificationButton = ui->notificationButton;

    notificationButton->setIcon(QIcon(":/icons/icons/bell.png"));
    NotificationPopup *popup = new NotificationPopup(this);
    popup->addNotification("notificarea1");
    popup->addNotification("notificarea2");
    popup->addNotification("notificarea3");
    popup->addNotification("notificarea4");

    if (popup->isVisible()) {
        popup->hide();
    } else {
        QPoint globalPos = notificationButton->mapToGlobal(QPoint(0, notificationButton->height()));
        popup->move(globalPos.x() - popup->width() + notificationButton->width(), globalPos.y() + 10);
        popup->show();
    }

}

void MainPage::on_cautaTraseuButton_clicked(){

    this->close();
    CautaTraseu* traseu = new CautaTraseu();
    traseu->setMainPagePointer(this);
    traseu->show();

}
void MainPage::setUsername(QString username){

    this->username = username;
    QString welcomeText = "Welcome, " + this->username;
    this->welcomeLabel->setText(welcomeText);

}
bool MainPage::hasNotification(){

    //Server Connection
    if(true){
        return true;
    }
    return false;

}

