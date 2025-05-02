#ifndef TICKETWIDGET_H
#define TICKETWIDGET_H

#include <QWidget>
#include "ui_TicketWidget.h"  // Include fișierul generat de Qt Designer
#include "RezultatePage.h"

class TicketWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TicketWidget(QWidget *parent = nullptr);
    ~TicketWidget();

private:
    Ui::TicketWidget *ui;  // Obiectul pentru a manipula elementele din fișierul .ui
};

#endif // TICKETWIDGET_H
