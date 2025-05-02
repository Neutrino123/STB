#include "MainPage.h"
#include "ui_MainPage.h"
#include "LoginPage.h"
#include "CautaTraseu.h"
#include "TicketWidget.h"


MainPage::MainPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
    this->welcomeLabel = ui->welcomeLabel;
    this->biletePage = new TicketListPage();

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

 void MainPage::on_cumparaBiletButton_clicked(){

//     // ServerConnection* server = new ServerConnection();
//     // server->connectToServer("127.0.0.1", 12345);
//     // QString response = "";

//     ServerConnection* server = new ServerConnection();
//     server->connectToServer("127.0.0.1", 12345);
//     server->sendData("bilet");

//     QString response = server->receiveData();

//     if(response == "success" && this->ticket == nullptr){

//         qDebug()<<"Serverul a creat si trimis biletul cu succes";
//         if(this->ticket == nullptr){
//             qDebug() << "am cumparat bilet";
//             this->ticket = new TicketWidget();
//         }

//     }

//     else{
//         qDebug() << "Deja ai cumparat un bilet";
//     }


 }

void MainPage::on_veziBiletButton_clicked(){

    // if(this->bileteCumparatePage != nullptr){
    //     this->bileteCumparatePage->show();
    // }
    // else
    // {
    //      qDebug() << "Nu ai cumparat inca bilet";
    // }
    if(biletePage != nullptr){

        //comunicare cu serverul pentru a primi biletele
       // qDebug()<<"nu ai bilete cumparate";
        // biletePage = new TicketListPage();
        // TicketWidget* ticket = new TicketWidget();
        // TicketWidget* ticket1 = new TicketWidget();
        // TicketWidget* ticket2 = new TicketWidget();
        // biletePage->adaugaBilet(ticket);
        // biletePage->adaugaBilet(ticket1);
        // biletePage->adaugaBilet(ticket2);

        // biletePage->show();
       this->biletePage->show();

    }
    else
    {

    }

}

void MainPage::on_cautaTraseuButton_clicked(){

    this->close();
    CautaTraseu* traseu = new CautaTraseu();
    traseu->setMainPagePointer(this);
    traseu->setBiletePagePointer(this->biletePage);
    traseu->show();

}
void MainPage::setUsername(QString username){

    this->username = username;
    QString welcomeText = "Welcome, " + this->username;
    this->welcomeLabel->setText(welcomeText);

}
