QT       += core gui  multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    benjin.cpp \
    benjin2.cpp \
    benxi.cpp \
    benxi2.cpp \
    error.cpp \
    main.cpp \
    mainwindow.cpp \
    qingchu.cpp \
    shangye.cpp \
    tixing.cpp \
    zuhe.cpp \
    zuhe1.cpp \
    zuhe2.cpp \
    zuheclear.cpp

HEADERS += \
    benjin.h \
    benjin2.h \
    benxi.h \
    benxi2.h \
    error.h \
    mainwindow.h \
    qingchu.h \
    shangye.h \
    tixing.h \
    zuhe.h \
    zuhe1.h \
    zuhe2.h \
    zuheclear.h

FORMS += \
    error.ui \
    mainwindow.ui \
    qingchu.ui \
    shangye.ui \
    tixing.ui \
    zuhe.ui \
    zuheclear.ui

TRANSLATIONS += \
    cpp_test2_yue_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    photos.qrc
