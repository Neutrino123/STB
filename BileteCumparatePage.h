#ifndef REZULTATEPAGE_H
#define REZULTATEPAGE_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class BileteCumparatePage; }
QT_END_NAMESPACE

class BileteCumparatePage : public QMainWindow
{
    Q_OBJECT

public:
    explicit BileteCumparatePage(QWidget *parent = nullptr);
    ~BileteCumparatePage();
    void adaugaBilet();

private slots:


private:
    Ui::BileteCumparatePage *ui;
    QVBoxLayout *layoutBilete;


};

#endif
