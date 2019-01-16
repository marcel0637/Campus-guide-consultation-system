#-------------------------------------------------
#
# Project created by QtCreator 2018-06-08T16:16:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Mare_Serenitatis
TEMPLATE = app

RC_FILE =qtdemo.rc
SOURCES += main.cpp\
        mainwindow.cpp \
    consult_window.cpp \
    recommend.cpp

HEADERS  += mainwindow.h \
    consult_window.h \
    recommend.h

FORMS    += mainwindow.ui \
    consult_window.ui \
    recommend.ui
