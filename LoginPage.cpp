#include "LoginPage.h"
#include "./ui_LoginPage.h"
#include <QMessageBox>
#include "DatabaseHeader.h"
#include "utils.h"
#include "ServerConnection.h"
#include "ControlorPage.h"

LoginPage::LoginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    this->ptrRegisterPage = new RegisterPage();
    this->errorBox = new ErrorBox();
    this->successBox = new SuccessBox();
    this->setFixedSize(800, 500);
}

LoginPage::~LoginPage()
{
    delete ptrRegisterPage;
    delete ui;
}

void LoginPage::on_registerButton_clicked()
{
    ptrRegisterPage->show();
}


void LoginPage::on_loginButton_clicked()
{
    qDebug() << "butonul de login merge \n";

    ServerConnection* server = new ServerConnection();
    server->readFromFile(":serverText/server.txt");
    server->connectToServer(server->getIp(), server->getPort());

    qDebug()<<server->getIp();
    qDebug()<<server->getPort();

    QString email = ui->emailInput->text().trimmed();
    QString password = ui->passwordInput->text().trimmed();
    QString buffer = "login|" + email + "|" + password + "|";
    buffer += '\0';

    server->sendData(buffer);

    QString response = server->receiveData();
    qDebug()<<response;

    if(response == "success"){
        this->successBox->setMessage("V-ați conectat cu succes!");
        this->successBox->show();
        this->ptrMainPage = new MainPage();
        this->ptrMainPage->setUsername(email);
        this->ptrMainPage->show();
        this->close();

    }
    else if (response == "successControlor"){

        this->successBox->setMessage("V-ați conectat cu succes!");
        this->successBox->show();
        this->ptrControlorPage = new ControlorPage();
        this->ptrControlorPage->setUsername(email);
        this->ptrControlorPage->show();
        this->close();

    }
    else if(response == "failed"){
        this->errorBox->setMessage("Email sau parola incorectă!");
        this->errorBox->show();
    }
    delete server;
}

