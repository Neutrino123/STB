#ifndef CONTROLORPAGE_H
#define CONTROLORPAGE_H
#include <QMainWindow>

#include "OferaAmenda.h"
#include "VerificaBilet.h"

namespace Ui{
class ControlorPage;
}
class ControlorPage: public QMainWindow
{
    Q_OBJECT
public:
    explicit ControlorPage(QWidget *parent = nullptr);
    ~ControlorPage();

    void setUsername(QString username);

private slots:

    void on_oferaAmendaButton_clicked();
    void on_verificaBiletButton_clicked();
    void on_logoutButton_clicked();

private:

    QString username;
    Ui::ControlorPage *ui;
    OferaAmenda* ptrOferaAmenda;
    VerificaBilet* ptrVerificaBilet;
};


#endif // CONTROLORPAGE_H
