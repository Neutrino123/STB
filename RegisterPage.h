#ifndef REGISTERPAGE_H
#define REGISTERPAGE_H

#include <QDialog>
#include "DatabaseHeader.h"
#include "SuccessBox.h"

namespace Ui {
class RegisterPage;
}

class RegisterPage : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterPage(QWidget *parent = nullptr);
    ~RegisterPage();

private slots:
    void on_submitButton_clicked();

private:
    Ui::RegisterPage *ui;
    SuccessBox* success;

};

#endif // REGISTERPAGE_H
