/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Homepage
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QPushButton *timelinebutton;
    QPushButton *newsfeedbutton;
    QPushButton *friendsbutton;
    QPushButton *groupsbutton;
    QPushButton *settingbutton;
    QPushButton *logoutbutton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *timelineframe;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QGraphicsView *graphicsView_4;
    QGraphicsView *graphicsView_5;
    QGraphicsView *graphicsView_6;
    QLabel *usernamedisplaytimeline;
    QLabel *genderdisplaytimeline;
    QLabel *educationdisplaytimeline;
    QLabel *workdisplaytimeline_4;
    QLabel *liveindisplaytimeline_5;
    QLabel *birthdaydisplaytimeline;
    QWidget *page_2;

    void setupUi(QWidget *Homepage)
    {
        if (Homepage->objectName().isEmpty())
            Homepage->setObjectName(QString::fromUtf8("Homepage"));
        Homepage->resize(550, 950);
        frame = new QFrame(Homepage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 550, 950));
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 551, 111));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        timelinebutton = new QPushButton(frame_2);
        timelinebutton->setObjectName(QString::fromUtf8("timelinebutton"));
        timelinebutton->setGeometry(QRect(38, 20, 71, 61));
        QFont font1;
        font1.setBold(true);
        timelinebutton->setFont(font1);
        timelinebutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(88, 144, 255);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(47, 116, 251);\n"
"}"));
        newsfeedbutton = new QPushButton(frame_2);
        newsfeedbutton->setObjectName(QString::fromUtf8("newsfeedbutton"));
        newsfeedbutton->setGeometry(QRect(118, 20, 71, 61));
        newsfeedbutton->setFont(font1);
        newsfeedbutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(88, 144, 255);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(47, 116, 251);\n"
"}"));
        friendsbutton = new QPushButton(frame_2);
        friendsbutton->setObjectName(QString::fromUtf8("friendsbutton"));
        friendsbutton->setGeometry(QRect(200, 20, 71, 61));
        friendsbutton->setFont(font1);
        friendsbutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(88, 144, 255);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(47, 116, 251);\n"
"}"));
        groupsbutton = new QPushButton(frame_2);
        groupsbutton->setObjectName(QString::fromUtf8("groupsbutton"));
        groupsbutton->setGeometry(QRect(283, 20, 71, 61));
        groupsbutton->setFont(font1);
        groupsbutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(88, 144, 255);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(47, 116, 251);\n"
"}"));
        settingbutton = new QPushButton(frame_2);
        settingbutton->setObjectName(QString::fromUtf8("settingbutton"));
        settingbutton->setGeometry(QRect(365, 20, 71, 61));
        settingbutton->setFont(font1);
        settingbutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(88, 144, 255);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(47, 116, 251);\n"
"}"));
        logoutbutton = new QPushButton(frame_2);
        logoutbutton->setObjectName(QString::fromUtf8("logoutbutton"));
        logoutbutton->setGeometry(QRect(450, 20, 71, 61));
        logoutbutton->setFont(font1);
        logoutbutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(88, 144, 255);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(47, 116, 251);\n"
"}"));
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 90, 550, 861));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        timelineframe = new QFrame(page);
        timelineframe->setObjectName(QString::fromUtf8("timelineframe"));
        timelineframe->setGeometry(QRect(0, 0, 550, 861));
        timelineframe->setFrameShape(QFrame::StyledPanel);
        timelineframe->setFrameShadow(QFrame::Raised);
        graphicsView = new QGraphicsView(timelineframe);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(40, 70, 25, 25));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"	background-image: url(:/facebooklogo/rename-24.png)no-repeat center center fixed;\n"
"border:0px;\n"
"}"));
        graphicsView_2 = new QGraphicsView(timelineframe);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(40, 295, 25, 25));
        graphicsView_2->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"	border-image: url(:/facebooklogo/birthday-cake-24 (1).png)no-repeat center center fixed;;\n"
"border:0px;\n"
"}"));
        graphicsView_3 = new QGraphicsView(timelineframe);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(40, 250, 25, 25));
        graphicsView_3->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"	background-image: url(:/facebooklogo/home-5-24.png)no-repeat center center fixed;\n"
"border:0px;\n"
"}"));
        graphicsView_4 = new QGraphicsView(timelineframe);
        graphicsView_4->setObjectName(QString::fromUtf8("graphicsView_4"));
        graphicsView_4->setGeometry(QRect(40, 160, 25, 25));
        graphicsView_4->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"	background-image: url(:/facebooklogo/student-24.png)no-repeat center center fixed;\n"
"\n"
"border:0px;\n"
"}"));
        graphicsView_5 = new QGraphicsView(timelineframe);
        graphicsView_5->setObjectName(QString::fromUtf8("graphicsView_5"));
        graphicsView_5->setGeometry(QRect(40, 205, 25, 25));
        graphicsView_5->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"\n"
"\n"
"	background-image: url(:/facebooklogo/worker-24.png)	no-repeat center center fixed;\n"
"border:0px;\n"
"}"));
        graphicsView_6 = new QGraphicsView(timelineframe);
        graphicsView_6->setObjectName(QString::fromUtf8("graphicsView_6"));
        graphicsView_6->setGeometry(QRect(40, 115, 25, 25));
        graphicsView_6->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"\n"
"{\n"
"	background-image: url(:/facebooklogo/user-24.png);no-repeat center center fixed;\n"
"border:0px;\n"
"}"));
        usernamedisplaytimeline = new QLabel(timelineframe);
        usernamedisplaytimeline->setObjectName(QString::fromUtf8("usernamedisplaytimeline"));
        usernamedisplaytimeline->setGeometry(QRect(72, 75, 440, 16));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        usernamedisplaytimeline->setFont(font2);
        usernamedisplaytimeline->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        genderdisplaytimeline = new QLabel(timelineframe);
        genderdisplaytimeline->setObjectName(QString::fromUtf8("genderdisplaytimeline"));
        genderdisplaytimeline->setGeometry(QRect(73, 120, 440, 16));
        genderdisplaytimeline->setFont(font2);
        genderdisplaytimeline->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        educationdisplaytimeline = new QLabel(timelineframe);
        educationdisplaytimeline->setObjectName(QString::fromUtf8("educationdisplaytimeline"));
        educationdisplaytimeline->setGeometry(QRect(74, 165, 440, 16));
        educationdisplaytimeline->setFont(font2);
        educationdisplaytimeline->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        workdisplaytimeline_4 = new QLabel(timelineframe);
        workdisplaytimeline_4->setObjectName(QString::fromUtf8("workdisplaytimeline_4"));
        workdisplaytimeline_4->setGeometry(QRect(73, 210, 440, 16));
        workdisplaytimeline_4->setFont(font2);
        workdisplaytimeline_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        liveindisplaytimeline_5 = new QLabel(timelineframe);
        liveindisplaytimeline_5->setObjectName(QString::fromUtf8("liveindisplaytimeline_5"));
        liveindisplaytimeline_5->setGeometry(QRect(74, 255, 440, 16));
        liveindisplaytimeline_5->setFont(font2);
        liveindisplaytimeline_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        birthdaydisplaytimeline = new QLabel(timelineframe);
        birthdaydisplaytimeline->setObjectName(QString::fromUtf8("birthdaydisplaytimeline"));
        birthdaydisplaytimeline->setGeometry(QRect(75, 300, 440, 16));
        birthdaydisplaytimeline->setFont(font2);
        birthdaydisplaytimeline->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(Homepage);

        QMetaObject::connectSlotsByName(Homepage);
    } // setupUi

    void retranslateUi(QWidget *Homepage)
    {
        Homepage->setWindowTitle(QCoreApplication::translate("Homepage", "Form", nullptr));
        timelinebutton->setText(QCoreApplication::translate("Homepage", "Timeline", nullptr));
        newsfeedbutton->setText(QCoreApplication::translate("Homepage", "NewsFeed", nullptr));
        friendsbutton->setText(QCoreApplication::translate("Homepage", "Friends", nullptr));
        groupsbutton->setText(QCoreApplication::translate("Homepage", "Groups", nullptr));
        settingbutton->setText(QCoreApplication::translate("Homepage", "Setting", nullptr));
        logoutbutton->setText(QCoreApplication::translate("Homepage", "Logout", nullptr));
        usernamedisplaytimeline->setText(QCoreApplication::translate("Homepage", "TextLabel", nullptr));
        genderdisplaytimeline->setText(QCoreApplication::translate("Homepage", "TextLabel", nullptr));
        educationdisplaytimeline->setText(QCoreApplication::translate("Homepage", "TextLabel", nullptr));
        workdisplaytimeline_4->setText(QCoreApplication::translate("Homepage", "TextLabel", nullptr));
        liveindisplaytimeline_5->setText(QCoreApplication::translate("Homepage", "TextLabel", nullptr));
        birthdaydisplaytimeline->setText(QCoreApplication::translate("Homepage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homepage: public Ui_Homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
