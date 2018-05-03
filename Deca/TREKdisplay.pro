#-------------------------------------------------
#
# Project created by QtCreator 2014-05-28T11:50:00
#
#-------------------------------------------------
cache()

QT       += core gui network xml serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DecaRangeRTLS
TEMPLATE = app
QMAKE_INFO_PLIST = Info.plist

INCLUDEPATH += models network views util tools

INCLUDEPATH += $$PWD/armadillo-3.930.0/include


LIBS += -L$$PWD/armadillo-3.930.0/lib/ -lblas_win32_MT

LIBS += -L$$PWD/armadillo-3.930.0/lib/ -llapack_win32_MT

SOURCES += main.cpp\
    RTLSDisplayApplication.cpp \
    views/mainwindow.cpp \
    network/RTLSClient.cpp \
    views/GraphicsView.cpp \
    views/GraphicsWidget.cpp \
    views/ViewSettingsWidget.cpp \
	views/MinimapView.cpp \
    views/connectionwidget.cpp \
    models/ViewSettings.cpp \
    tools/OriginTool.cpp \
    tools/RubberBandTool.cpp \
    tools/ScaleTool.cpp \
    util/QPropertyModel.cpp \
    network/SerialConnection.cpp \
    tools/trilateration.cpp \
    wms/connect_database.cpp \
    views/storage.cpp \
    views/storage_modify.cpp \
    views/storage_modify2.cpp \
    views/storage_delete.cpp \
    views/tag_add.cpp

HEADERS  += \
    RTLSDisplayApplication.h \
	views/mainwindow.h \
    network/RTLSClient.h \
    views/GraphicsView.h \
    views/GraphicsWidget.h \
    views/ViewSettingsWidget.h \
    views/MinimapView.h \
    views/connectionwidget.h \
    models/ViewSettings.h \
    tools/AbstractTool.h \
    tools/OriginTool.h \
    tools/RubberBandTool.h \
    tools/ScaleTool.h \
    util/QPropertyModel.h \
    network/SerialConnection.h \
    tools/trilateration.h \
    wms/connect_database.h \
    views/storage.h \
    views/storage_modify.h \
    views/storage_modify2.h \
    views/storage_delete.h \
    views/tag_add.h
FORMS    += \
    views/mainwindow.ui \
    views/GraphicsWidget.ui \
    views/ViewSettingsWidget.ui \
    views/connectionwidget.ui \
    views/storage.ui \
    views/storage_modify.ui \
    views/storage_modify2.ui \
    views/storage_delete.ui \
    views/tag_add.ui


RESOURCES += \
    res/resources.qrc
QT   +=sql



CONFIG += qaxcontainer #导出excel
QT+ =serialport
