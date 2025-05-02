#ifndef REZULTATEPAGE_H
#define REZULTATEPAGE_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
class TicketListPage;


QT_BEGIN_NAMESPACE
namespace Ui { class RezultatePage; }
QT_END_NAMESPACE

class RezultatePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit RezultatePage(TicketListPage* biletePagePtr, QWidget *parent = nullptr);
    ~RezultatePage();

    void adaugaRuta(const QString &codRuta);


private slots:


private:
    Ui::RezultatePage *ui;
    QVBoxLayout *layoutRute;
    TicketListPage* biletePage;

};

#endif
