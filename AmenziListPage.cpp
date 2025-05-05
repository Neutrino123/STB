#include "AmenziListPage.h"
#include "./ui_AmenziListPage.h"


AmenziListPage::AmenziListPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AmenziListPage)
{
    ui->setupUi(this);
     this->setFixedSize(250, 400);
    if (!ui->scrollAreaWidgetAmenzi->layout()) {
        this->amendaLayout = new QVBoxLayout(ui->scrollAreaWidgetAmenzi);
        ui->scrollAreaWidgetAmenzi->setLayout(this->amendaLayout);
    } else {
        this->amendaLayout = qobject_cast<QVBoxLayout *>(ui->scrollAreaWidgetAmenzi->layout());
    }
}

AmenziListPage::~AmenziListPage()
{
    delete ui;
}

void AmenziListPage::adaugaAmenda(AmendaWidget* amenda){

    if (this->amendaLayout) {
        this->amendaLayout->addWidget(amenda);
    }

}
