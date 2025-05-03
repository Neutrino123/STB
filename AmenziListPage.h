#ifndef AMENZILISTPAGE_H
#define AMENZILISTPAGE_H

#include <QWidget>
#include "AmendaWidget.h"
#include <QVBoxLayout>

namespace Ui {
class AmenziListPage;
}

class AmenziListPage : public QWidget
{
    Q_OBJECT

public:
    explicit AmenziListPage(QWidget *parent = nullptr);
    ~AmenziListPage();
    void adaugaAmenda(AmendaWidget* amenda);

private:
    Ui::AmenziListPage *ui;
    QVBoxLayout *amendaLayout;
};

#endif // AMENZILISTPAGE_H
