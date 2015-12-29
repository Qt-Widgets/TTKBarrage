#-------------------------------------------------
#
# Project created by QtCreator 2015-12-28T19:55:02
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QBarrage
TEMPLATE = app

INCLUDEPATH += $$PWD/core \
               $$PWD/widget \
               $$PWD/

TRANSLATIONS += cn.ts

SOURCES += \
        main.cpp \
        widget/barragewidget.cpp \
        widget/videocontrol.cpp \
        widget/barrageedit.cpp \
        core/barrageanimation.cpp \
        videoview.cpp

HEADERS  += \
        widget/barragewidget.h \
        widget/videocontrol.h \
        widget/barrageedit.h \
        core/barrageanimation.h \
        core/barragecore.h \
        videoview.h


RESOURCES+= QBarrage.qrc

#RC_FILE  += \
#        QWeather.rc

#FORMS    += \
#        ui/weatherapplication.ui \
#        ui/weathermessagebox.ui
