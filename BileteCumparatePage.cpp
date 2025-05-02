include "BileteCumparatePage.h"
#include "./ui_BileteCumparatePage.h"
#include <QDebug>
#include "TicketWidget.h"

BileteCumparatePage::BileteCumparatePage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BileteCumparatePage)
{
    ui->setupUi(this);

    // Obținem layout-ul din scroll area
    layoutBilete = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents->layout());
    if (!layoutBilete) {
        layoutBilete = new QVBoxLayout(ui->scrollAreaWidgetContents);
    }

}

BileteCumparatePage::~BileteCumparatePage()
{
    delete ui;
}

void BileteCumparatePage::adaugaBilet()
{
    TicketWidget* bilet = new TicketWidget();

    QVBoxLayout* layout = this->layoutBilete;

    layout->addWidget(bilet);
}

