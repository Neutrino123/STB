#ifndef NOTIFICATIONLABEL_H
#define NOTIFICATIONLABEL_H

#include <QWidget>
class NotificationPopup;

namespace Ui {
class NotificationLabel;
}

class NotificationLabel : public QWidget
{
    Q_OBJECT

public:
    explicit NotificationLabel(QWidget *parent = nullptr);
    ~NotificationLabel();

    void setMessage(const QString &message);
    void setPopup(NotificationPopup* popup);

private slots:
    void on_closeButton_clicked();

private:
    Ui::NotificationLabel *ui;
    NotificationPopup* popup;
};

#endif // NOTIFICATIONLABEL_H
