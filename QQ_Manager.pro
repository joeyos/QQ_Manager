#-------------------------------------------------
#
# Project created by QtCreator 2016-03-12T16:41:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QQ_Manager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    menupushbutton.cpp

HEADERS  += mainwindow.h \
    menubutton.h

FORMS    += mainwindow.ui

RESOURCES += \
    image.qrc

RC_FILE += myico.rc //添加图标
