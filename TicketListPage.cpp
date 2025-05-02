#include "TicketListPage.h"
#include "./ui_TicketListPage.h"

TicketListPage::TicketListPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TicketListPage)
{
    ui->setupUi(this);

    // Obținem layout-ul din scrollAreaWidgetContents
    ticketLayout = ui->scrollAreaWidgetContents->findChild<QVBoxLayout*>("ticketLayout");

    if (!ticketLayout) {
        ticketLayout = new QVBoxLayout(ui->scrollAreaWidgetContents);
    }
}

TicketListPage::~TicketListPage()
{
    delete ui;
}

void TicketListPage::adaugaBilet(TicketWidget* ticket)
{
    if (ticketLayout) {
        ticketLayout->addWidget(ticket);
    }
}
