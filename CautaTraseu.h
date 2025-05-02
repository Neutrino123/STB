#ifndef CAUTATRASEU_H
#define CAUTATRASEU_H

#include <QMainWindow>
#include "MainPage.h"


QT_BEGIN_NAMESPACE
namespace Ui { class CautaTraseu; }
QT_END_NAMESPACE

class CautaTraseu : public QMainWindow
{
    Q_OBJECT

public:
    CautaTraseu(QWidget *parent = nullptr);
    ~CautaTraseu();
    void setMainPagePointer(MainPage* ptrMainPage);
    void setBiletePagePointer(TicketListPage* ptrBiletePage);



private slots:

    void on_cautaTraseuButton_clicked();
    void on_backButton_clicked();

private:
    Ui::CautaTraseu *ui;
    MainPage* ptrMainPage;
    TicketListPage* biletePage;
};

#endif // CAUTATRASEU_H
