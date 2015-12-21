TEMPLATE = app

QT += qml quick widgets

CONFIG += c++14

SOURCES += src/*.cpp

RESOURCES += qml/qml.qrc
DESTDIR = bin/
OBJECTS_DIR = bin/

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)
