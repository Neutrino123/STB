#ifndef NOTIFICATIONPOPUP_H
#define NOTIFICATIONPOPUP_H

#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>

namespace Ui {
class NotificationPopup;
}

class NotificationPopup : public QDialog {
    Q_OBJECT

public:
    explicit NotificationPopup(QWidget *parent = nullptr);
    ~NotificationPopup();

    void addNotification(const QString &message);

private:
    Ui::NotificationPopup *ui;
};

#endif // NOTIFICATIONPOPUP_H
