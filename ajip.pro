QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ajip-fork
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += src/main.cpp\
        src/ajip.cpp

HEADERS  += src/ajip.h

FORMS    += src/ajip.ui
