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
    void readFromFile(QString serverName);
    QString getIp();
    quint16 getPort();

private:
    QTcpSocket *socket;
    QString ip;
    quint16 port;
};
