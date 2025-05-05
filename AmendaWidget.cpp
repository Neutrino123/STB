#include "AmendaWidget.h"
#include "./ui_AmendaWidget.h"

AmendaWidget::AmendaWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AmendaWidget)
{
    ui->setupUi(this);
}

AmendaWidget::~AmendaWidget()
{
    delete ui;
}

void AmendaWidget::on_platesteButton_clicked()
{
    this->deleteLater();  // Șterge widgetul în siguranță

    //Conexiune cu serverul;
}
