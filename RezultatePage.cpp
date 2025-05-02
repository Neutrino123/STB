#include "RezultatePage.h"
#include "./ui_RezultatePage.h"
#include <QDebug>
#include "RezultatCautareTraseu.h"
#include "TicketListPage.h"

RezultatePage::RezultatePage(TicketListPage* biletePagePtr, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RezultatePage)
{
    ui->setupUi(this);
    this->biletePage = biletePagePtr;
    // Obținem layout-ul din scroll area
    layoutRute = qobject_cast<QVBoxLayout*>(ui->scrollAreaWidgetContents->layout());
    if (!layoutRute) {
        layoutRute = new QVBoxLayout(ui->scrollAreaWidgetContents);
    }

}

RezultatePage::~RezultatePage()
{
    delete ui;
}

void RezultatePage::adaugaRuta(const QString &codRuta)
{
    RezultatCautareTraseu* rezultat = new RezultatCautareTraseu(this->biletePage, codRuta);

    QVBoxLayout* layout = this->layoutRute;

    layout->addWidget(rezultat);
}


