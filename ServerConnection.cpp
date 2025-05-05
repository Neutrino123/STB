#include "ServerConnection.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QDebug>

ServerConnection::ServerConnection()
{
    socket = new QTcpSocket();
}

ServerConnection::~ServerConnection()
{
    qDebug() << "am pierdut conexiunea";
    disconnectFromServer();
    delete socket;
}

bool ServerConnection::connectToServer(const QString &host, quint16 port)
{
    qDebug() << "am intrat in connectToServer";
    socket->connectToHost(host, port);
    return socket->waitForConnected(3000); // așteaptă max 3 secunde să se conecteze
}

void ServerConnection::disconnectFromServer()
{
    if (socket->state() == QAbstractSocket::ConnectedState) {
        socket->disconnectFromHost();
        socket->waitForDisconnected(3000);
    }
}

bool ServerConnection::sendData(const QString &data)
{
      qDebug() << "am intrat in sendata";
    if (socket->state() == QAbstractSocket::ConnectedState) {
        socket->write(data.toUtf8());
        return socket->waitForBytesWritten(3000); // așteaptă să trimită datele
    }
    return false;
}

QString ServerConnection::receiveData()
{
    if (socket->state() == QAbstractSocket::ConnectedState) {
        if (socket->waitForReadyRead(3000)) { // așteaptă date max 3 secunde
            return QString::fromUtf8(socket->readAll());
        }
    }
    return QString();
}

void ServerConnection::readFromFile(QString pathServer){
    QFile file(pathServer);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Nu pot deschide fisierul:" << pathServer;
        return;
    }
    QTextStream in(&file);
    QString line = in.readLine().trimmed();
    file.close();
    QStringList parts = line.split(" ", Qt::SkipEmptyParts);
    if (parts.size() == 2) {
        ip = parts[0];
        port = parts[1].toUShort();
    }

    qDebug() << "Format invalid. Se asteapta: IP PORT";
    return;
}

QString ServerConnection::getIp(){
    return this->ip;
}

quint16 ServerConnection::getPort(){
    return this->port;
}
