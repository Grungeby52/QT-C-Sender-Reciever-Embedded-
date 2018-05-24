#include "sendudp.h"
#include <QByteArray>
#include "cipamdatatypes.h"
#include <QtCore>
#include <QDataStream>

SendUdp::SendUdp(QObject *parent) :
    QObject(parent)
{
    senderSocket = new QUdpSocket(this);
}

void SendUdp::sendData()
{
    TWaveFormData *wave=new TWaveFormData;
    wave->ECG_I=19;
    wave->ECG_II=20;
    wave->ECG_III=21;

    char *p = (char*)wave;
    QByteArray packet(p, sizeof(wave));

    //buffer oluşturucaksın

    QByteArray datagram1="Datas...";

    senderSocket->writeDatagram(packet,sizeof(packet),QHostAddress::Broadcast,8081);
    //senderSocketCDB->writeDatagram(datagram2,sizeof(datagram2),QHostAddress::Broadcast,1126);

}

