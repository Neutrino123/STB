#include "ErrorBox.h"
#include "./ui_ErrorBox.h"

ErrorBox::ErrorBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErrorBox)
{
    ui->setupUi(this);
    this->setWindowModality(Qt::ApplicationModal);
}

ErrorBox::~ErrorBox()
{
    delete ui;
}

void ErrorBox::on_buttonClose_clicked()
{
    this->accept(); // închide dialogul, echivalent cu close() dar specific QDialog
}

void ErrorBox::setMessage(QString message){

    QLabel* label = ui->labelError;
    label->setText(message);
    label->setAlignment(Qt::AlignHCenter);

}
