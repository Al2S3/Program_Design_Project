QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcoursewidget.cpp \
    courseAllocation.cpp \
    course_info.cpp \
    coursebrowserwidget.cpp \
    coursenetworkadmin.cpp \
    coursenetworkstudent.cpp \
    coursenetworkteacher.cpp \
    curriculum.cpp \
    delcoursewidget.cpp \
    logWindow.cpp \
    main.cpp \
    prefer.cpp \
    registerWindow.cpp \
    userauth.cpp \
    widget.cpp

HEADERS += \
    addcoursewidget.h \
    courseAllocation.h \
    course_info.h \
    coursebrowserwidget.h \
    coursenetworkadmin.h \
    coursenetworkstudent.h \
    coursenetworkteacher.h \
    curriculum.h \
    delcoursewidget.h \
    logWindow.h \
    prefer.h \
    registerWindow.h \
    userauth.h \
    widget.h

FORMS += \
    addcoursewidget.ui \
    coursebrowserwidget.ui \
    coursenetworkadmin.ui \
    coursenetworkstudent.ui \
    coursenetworkteacher.ui \
    curriculum.ui \
    delcoursewidget.ui \
    logWindow.ui \
    prefer.ui \
    registerWindow.ui \
    widget.ui

INCLUDEPATH += C:/src/or-tools_x64/include

INCLUDEPATH += C:\src\ortools\include

LIBS += -LC:/src/vcpkg/installed/x64-windows/lib \
    libprotobuf.lib \
    glog.lib \
    gflags.lib \
    absl_string_view.lib \
    absl_flags_commandlineflag.lib \
    absl_flags_commandlineflag_internal.lib \
    absl_flags_config.lib \
    absl_flags_internal.lib \
    absl_flags_marshalling.lib \
    absl_flags_parse.lib \
    absl_flags_private_handle_accessor.lib \
    absl_flags_program_name.lib \
    absl_flags_reflection.lib \
    absl_flags_usage.lib \
    absl_flags_usage_internal.lib

LIBS += -LC:\src\ortools\lib \
    ortools.lib

QMAKE_LFLAGS += /LIBPATH:C:\src\ortools/lib

QMAKE_LFLAGS += /LIBPATH:C:\src\vcpkg-master\installed\x64-windows/lib

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
