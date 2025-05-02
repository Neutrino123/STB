#ifndef REZULTATCAUTARETRASEU_H
#define REZULTATCAUTARETRASEU_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
class RezultatePage;
class TicketListPage;


namespace Ui {
class RezultatCautareTraseu;
}

class RezultatCautareTraseu : public QWidget
{
    Q_OBJECT

public:
    explicit RezultatCautareTraseu( TicketListPage* biletePagePtr, QString denumire, QWidget *parent = nullptr);
    ~RezultatCautareTraseu();


private slots:
    void on_buyTicketButton_clicked();

private:
    Ui::RezultatCautareTraseu *ui;
    TicketListPage* biletePage;

};

#endif // SEARCHRESULTWIDGET_H
