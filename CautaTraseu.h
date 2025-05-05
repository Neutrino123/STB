#ifndef CAUTATRASEU_H
#define CAUTATRASEU_H

#include <QMainWindow>
#include "MainPage.h"
#include "ErrorBox.h"


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

private slots:

    void on_cautaTraseuButton_clicked();
    void on_backButton_clicked();

private:
    Ui::CautaTraseu *ui;
    MainPage* ptrMainPage;
    ErrorBox* error;
};

#endif // CAUTATRASEU_H
