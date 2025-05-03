#include "SuccessBox.h"
#include "./ui_SuccessBox.h"

SuccessBox::SuccessBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SuccessBox)
{
    ui->setupUi(this);
    this->setWindowModality(Qt::ApplicationModal); // optional, redundant with exec()
}

SuccessBox::~SuccessBox()
{
    delete ui;
}

void SuccessBox::on_buttonClose_clicked()
{
    this->accept();  // echivalent cu close() dar specific pentru QDialog
}
