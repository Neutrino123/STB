#include "LoginPage.h"
#include "./ui_LoginPage.h"
#include <QMessageBox>
#include "DatabaseHeader.h"
#include "utils.h"
#include "ServerConnection.h"

LoginPage::LoginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    ptrRegisterPage = new RegisterPage();
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

        QMessageBox::information(this, "Success", "Login Successfully");
        ptrMainPage = new MainPage();
        ptrMainPage->setUsername(email);
        ptrMainPage->show();
        this->close();

    }
    else{

        QMessageBox::information(this, "Failed", "Email or password is incorrect");

    }
   // delete server;
}

