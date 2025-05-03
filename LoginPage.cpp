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

    // ServerConnection* server = new ServerConnection();
    // server->connectToServer("127.0.0.1", 12345); //172.16.42.12", 1028
     QString email = ui->emailInput->text().trimmed();
     QString password = ui->passwordInput->text().trimmed();
    // QString buffer = "login|" + email + "|" + password + "|";
    // buffer += '\0';

    // server->sendData(buffer);

    // QString response = server->receiveData();
   // qDebug()<<response;

    QString response;
    response = "success";
    if(response == "success"){

        this->successBox->show();
        this->ptrMainPage = new MainPage();
        this->ptrMainPage->setUsername(email);
        this->ptrMainPage->show();
        this->close();

    }
    else if (response == "successControlor"){

        this->successBox->show();
        this->ptrControlorPage = new ControlorPage();
        this->ptrControlorPage->setUsername(email);
        this->ptrControlorPage->show();
        this->close();

    }
   // delete server;
}

