#include "ControlorPage.h"
#include "./ui_ControlorPage.h"
#include "LoginPage.h"

ControlorPage::ControlorPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ControlorPage) {

    ui->setupUi(this);
}

ControlorPage::~ControlorPage(){


}

void ControlorPage::on_oferaAmendaButton_clicked(){

    this->ptrOferaAmenda = new OferaAmenda();
    this->ptrOferaAmenda->show();

}
void ControlorPage::on_verificaBiletButton_clicked(){

    this->ptrVerificaBilet = new VerificaBilet();
    this->ptrVerificaBilet->show();

}
void ControlorPage::on_logoutButton_clicked(){

    qDebug() << "butonul de logout merge \n";
    LoginPage* ptrLoginPage = new LoginPage();
    ptrLoginPage->show();
    this->close();

}

void ControlorPage::setUsername(QString username){

    this->username = username;

}
