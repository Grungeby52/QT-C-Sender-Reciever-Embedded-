#include <QCoreApplication>
#include <sendudp.h>
#include <cipamdatatypes.h>
#include <mythread.h>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    PHostMessage message;
//    U.sendData(message);
    MyThread myt;
    myt.start();
    qDebug()<<"Current Thread ID: "<<myt.currentThreadId();
    return a.exec();
}
