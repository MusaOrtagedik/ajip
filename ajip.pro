QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ajip
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += src/main.cpp\
        src/ajip.cpp

HEADERS  += src/ajip.h

FORMS    += src/ajip.ui

target.path = /usr/bin/

icon.files = logo.png
icon.commands = mkdir -p /usr/share/ajip
icon.path = /usr/share/ajip/

desktop_file.files = ajip.desktop
desktop_file.path = /usr/share/applications/

INSTALLS += target icon desktop_file
