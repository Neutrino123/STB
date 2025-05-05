#ifndef AMENDAWIDGET_H
#define AMENDAWIDGET_H

#include <QWidget>

namespace Ui {
class AmendaWidget;
}

class AmendaWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AmendaWidget(QString suma, QString motiv, QWidget *parent = nullptr);
    ~AmendaWidget();

private slots:
    void on_platesteButton_clicked();

private:
    Ui::AmendaWidget *ui;
};

#endif
