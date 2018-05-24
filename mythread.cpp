#include "mythread.h"
#include <QtCore>
#include <QDebug>
#include <sendudp.h>
#include <QTime>
MyThread::MyThread()
{

}
void MyThread::run(){

    qDebug()<<"Running Thread! Sending (CIPAM/ECG)Data Struct...";
    qDebug()<<"BroadCast! For Listening Port:8081";
    SendUdp U;
    int count=0;

    while (true) {
        QTime tempLast=QTime::currentTime();

        for (int i = 0; i < 80; ++i) {
            U.sendData();
            count=count+1;
            thread()->msleep(12);
        }
        QTime tempNow=QTime::currentTime();
        if (tempLast==tempNow) {
            qDebug()<<"Hata!";
        }

    }
}
