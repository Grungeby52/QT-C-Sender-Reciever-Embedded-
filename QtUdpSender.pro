#-------------------------------------------------
#
# Project created by QtCreator 2018-05-14T09:51:53
#
#-------------------------------------------------

QT       += core
QT       += network
QT       -= gui
QT += serialport

TARGET = QtUdpSender
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    sendudp.cpp \
    mythread.cpp

HEADERS += \
    sendudp.h \
    cipamdatatypes.h \
    mythread.h
