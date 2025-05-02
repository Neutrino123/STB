#pragma once

#include <QTcpSocket>

class ServerConnection
{
public:
    ServerConnection();
    ~ServerConnection();

    bool connectToServer(const QString &host, quint16 port);
    void disconnectFromServer();
    bool sendData(const QString &data);
    QString receiveData();

private:
    QTcpSocket *socket;
};
