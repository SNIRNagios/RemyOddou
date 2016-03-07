#-------------------------------------------------
#
# Project created by QtCreator 2016-03-02T18:31:46
#
#-------------------------------------------------

#permettre à qmake d'ajouter les chemins d'inclusion des en-têtes et les libs pour XML
QT += xml
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Configurateur
TEMPLATE = app


SOURCES += main.cpp\
        fen_configurateur.cpp \
    configurateur.cpp

HEADERS  += fen_configurateur.h \
    configurateur.h

FORMS    += fen_configurateur.ui
