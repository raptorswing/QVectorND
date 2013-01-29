#-------------------------------------------------
#
# Project created by QtCreator 2013-01-29T13:50:54
#
#-------------------------------------------------

QT       += testlib

TARGET = tst_QVectorNDTests
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_QVectorNDTests.cpp \
    main.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    tst_QVectorNDTests.h


#Linkage for QVectorND shared lib
win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QVectorND/release/ -lQVectorND
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QVectorND/debug/ -lQVectorND
else:unix: LIBS += -L$$OUT_PWD/../QVectorND/ -lQVectorND

INCLUDEPATH += $$PWD/../QVectorND
DEPENDPATH += $$PWD/../QVectorND
