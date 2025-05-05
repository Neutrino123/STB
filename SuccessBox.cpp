#include "SuccessBox.h"
#include "./ui_SuccessBox.h"
#include <QLabel>

SuccessBox::SuccessBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SuccessBox)
{
    ui->setupUi(this);
    this->setWindowModality(Qt::ApplicationModal); //apare fereastra cu mesajul prima
}

SuccessBox::~SuccessBox()
{
    delete ui;
}

void SuccessBox::on_buttonClose_clicked()
{
    this->accept();  // echivalent cu close() dar specific pentru QDialog
}

void SuccessBox::setMessage(QString message){

    QLabel* label = ui->labelSuccess;
    label->setText(message);
    label->setAlignment(Qt::AlignHCenter);

}
