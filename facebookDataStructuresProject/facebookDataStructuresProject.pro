QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Comment.cpp \
    NewsFeed.cpp \
    Post.cpp \
    TimeLine.cpp \
    User.cpp \
    homepage.cpp \
    main.cpp \
    mainwindow.cpp \
    signup.cpp

HEADERS += \
    Comment.h \
    NewsFeed.h \
    Post.h \
    TimeLine.h \
    User.h \
    homepage.h \
    mainwindow.h \
    signup.h

FORMS += \
    homepage.ui \
    mainwindow.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
