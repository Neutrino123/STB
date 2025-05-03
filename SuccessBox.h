#ifndef SUCCESSBOX_H
#define SUCCESSBOX_H

#include <QDialog>

namespace Ui {
class SuccessBox;
}

class SuccessBox : public QDialog
{
    Q_OBJECT

public:
    explicit SuccessBox(QWidget *parent = nullptr);
    ~SuccessBox();

private slots:
    void on_buttonClose_clicked();

private:
    Ui::SuccessBox *ui;
};

#endif // SUCCESSBOX_H
