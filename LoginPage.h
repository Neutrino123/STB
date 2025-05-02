#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include "RegisterPage.h"
#include "MainPage.h"
#include <QRegularExpression>
#include <QCryptographicHash>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginPage; }
QT_END_NAMESPACE

class LoginPage : public QMainWindow
{
    Q_OBJECT

public:
    LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

private slots:
    void on_loginButton_clicked();

    void on_registerButton_clicked();


private:
    Ui::LoginPage *ui;
    RegisterPage* ptrRegisterPage;
    MainPage* ptrMainPage;

};

#endif // LOGINPAGE_H
