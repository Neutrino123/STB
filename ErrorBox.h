#ifndef ERRORBOX_H
#define ERRORBOX_H

#include <QDialog>

namespace Ui {
class ErrorBox;
}

class ErrorBox : public QDialog
{
    Q_OBJECT

public:
    explicit ErrorBox(QWidget *parent = nullptr);
    ~ErrorBox();

private slots:
    void on_buttonClose_clicked();

private:
    Ui::ErrorBox *ui;
};

#endif // ERRORBOX_H
