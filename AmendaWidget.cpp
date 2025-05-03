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
