#include "ErrorBox.h"
#include "./ui_ErrorBox.h"

ErrorBox::ErrorBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErrorBox)
{
    ui->setupUi(this);
    this->setWindowModality(Qt::ApplicationModal); // fereastra e modală
}

ErrorBox::~ErrorBox()
{
    delete ui;
}

void ErrorBox::on_buttonClose_clicked()
{
    this->accept(); // închide dialogul, echivalent cu close() dar specific QDialog
}
