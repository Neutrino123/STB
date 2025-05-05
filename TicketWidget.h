#ifndef TICKETWIDGET_H
#define TICKETWIDGET_H

#include <QWidget>
#include "ui_TicketWidget.h"  // Include fișierul generat de Qt Designer
#include "RezultatePage.h"

class TicketWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TicketWidget(QString purchaseDate, QString expireDate, QString biletId, QString busId, QWidget *parent = nullptr);
    ~TicketWidget();

private:
    Ui::TicketWidget *ui;  // Obiectul pentru a manipula elementele din fișierul .ui
};

#endif // TICKETWIDGET_H
