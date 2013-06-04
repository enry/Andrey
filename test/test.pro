#-------------------------------------------------
#
# Project created by QtCreator 2013-05-29T08:44:25
#
#-------------------------------------------------

QT       += widgets network sql testlib

TARGET = tst_testtest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += D:\qShows

SOURCES += tst_testtest.cpp \
    ../qShows/title.cpp \
    ../qShows/serie.cpp \
    ../qShows/secondwindow.cpp \
    ../qShows/qxtjson.cpp \
    ../qShows/md5.cpp \
    ../qShows/mainwindow.cpp \
    ../qShows/filedownloader.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    ../qShows/title.h \
    ../qShows/serie.h \
    ../qShows/secondwindow.h \
    ../qShows/qxtjson.h \
    ../qShows/md5.h \
    ../qShows/mainwindow.h \
    ../qShows/filedownloader.h

FORMS += \
    ../qShows/secondwindow.ui \
    ../qShows/mainwindow.ui
