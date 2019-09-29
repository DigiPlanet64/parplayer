#-------------------------------------------------
#
# Project ParPlayer
# Creation Date : 2019-09-29T11:42:41
#
#-------------------------------------------------

VERSION = 1.0.0.0
QMAKE_TARGET_COMPANY = ""
QMAKE_TARGET_PRODUCT = "ParPlayer"
QMAKE_TARGET_DESCRIPTION = "ParPlayer Software"
QMAKE_TARGET_COPYRIGHT = "ALL RIGHTS RESERVED"

DEFINES += \
APP_VERSION=\"\\\"$$VERSION\\\"\" \
APP_COMPANY=\"\\\"$$QMAKE_TARGET_COMPANY\\\"\" \
APP_PRODUCT=\"\\\"$$QMAKE_TARGET_PRODUCT\\\"\" \
APP_DESCRIPTION=\"\\\"$$QMAKE_TARGET_DESCRIPTION\\\"\" \
APP_COPYRIGHT=\"\\\"$$QMAKE_TARGET_COPYRIGHT\\\"\" \
APP_NAME=\\\"$$TARGET\\\"

win32:RC_ICONS = Resources/main.ico


CONFIG(debug, debug|release) {
    DESTDIR = $$PWD/bin/Debug
}
else{
    DESTDIR = $$PWD/bin/Release
}

QT       += core gui multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = parplayer
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    main.cpp \
    GUI/Main/FormMain.cpp

HEADERS += \
    GUI/Main/FormMain.h

FORMS += \
    GUI/Main/FormMain.ui

# Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target
