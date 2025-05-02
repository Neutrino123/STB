#ifndef TICKETLISTPAGE_H
#define TICKETLISTPAGE_H

#include <QWidget>
#include <QVBoxLayout>
#include <QScrollArea>
#include "ticketwidget.h" // Asigură-te că ai clasa asta

namespace Ui {
class TicketListPage;
}

class TicketListPage : public QWidget
{
    Q_OBJECT

public:
    explicit TicketListPage(QWidget *parent = nullptr);
    ~TicketListPage();

    void adaugaBilet(TicketWidget* ticket);

private:
    Ui::TicketListPage *ui;
    QVBoxLayout *ticketLayout;
};

#endif // TICKETLISTPAGE_H
