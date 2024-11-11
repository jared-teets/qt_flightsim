QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += openglwidgets

QT += network

QT += serialport

QT += core5compat

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    actuator.cpp \
    geo6dof.cpp \
    main.cpp \
    mainwindow.cpp \
    manual.cpp \
    matrix.cpp \
    open6dofsim.cpp \
    render.cpp \
    washout.cpp \
    xplane.cpp

HEADERS += \
    actuator.h \
    algorithm.h \
    geo6dof.h \
    input.h \
    mainwindow.h \
    manual.h \
    matrix.h \
    motion.h \
    noinput.h \
    nooutput.h \
    open6dofsim.h \
    output.h \
    render.h \
    selector.h \
    ui_MainWindow.h \
    ui_configActuator.h \
    ui_configManual.h \
    ui_configPlatform.h \
    ui_configWashout.h \
    ui_open6dofsim.h \
    washout.h \
    xplane.h

FORMS += \
    configActuator.ui \
    configManual.ui \
    configPlatform.ui \
    configWashout.ui \
    mainwindow.ui \
    open6dofsim.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    open6dofsim.qrc

DISTFILES += \
    main.qml \
    qt_flight_sim.pro.user
