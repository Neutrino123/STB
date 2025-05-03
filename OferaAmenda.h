#ifndef OFERAAMENDA_H
#define OFERAAMENDA_H

#include <QWidget>

namespace Ui {
class OferaAmenda;
}

class OferaAmenda : public QWidget
{
    Q_OBJECT

public:
    explicit OferaAmenda(QWidget *parent = nullptr);
    ~OferaAmenda();

private slots:
    void on_aplicaButton_clicked();
    void on_renuntaButton_clicked();

private:
    Ui::OferaAmenda *ui;
};

#endif // OFERAAMENDA_H
