#ifndef VERIFICABILET_H
#define VERIFICABILET_H

#include <QWidget>
#include "ErrorBox.h"
#include "SuccessBox.h"

namespace Ui {
class VerificaBilet;
}

class VerificaBilet : public QWidget
{
    Q_OBJECT

public:
    explicit VerificaBilet(QWidget *parent = nullptr);
    ~VerificaBilet();


private slots:

    void on_verificaButton_clicked();
    void on_renuntaButton_clicked();

private:
    Ui::VerificaBilet *ui;
    SuccessBox* successBox;
    ErrorBox* errorBox;
};

#endif // VERIFICABILET_H
