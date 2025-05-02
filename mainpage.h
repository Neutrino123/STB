#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <QLabel>
#include "ServerConnection.h"
#include "TicketListPage.h"



class LoginPage;

namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);
    ~MainPage();
    void setUsername(QString username);

private slots:
    void on_logoutButton_clicked();
    void on_cumparaBiletButton_clicked();
    void on_veziBiletButton_clicked();
    void on_cautaTraseuButton_clicked();


private:
    Ui::MainPage *ui;
    QString username;
    QLabel* welcomeLabel;
    TicketListPage* biletePage;

};

#endif // MAINPAGE_H
