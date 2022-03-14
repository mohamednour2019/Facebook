/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page0;
    QFrame *frame;
    QLineEdit *emailtextlogin;
    QLineEdit *passwordtextlogin;
    QPushButton *loginbuttonloginwidget;
    QPushButton *signupbuttonsignupwidget;
    QGraphicsView *graphicsView;
    QWidget *page1;
    QFrame *frame_2;
    QLineEdit *usernametextboxsignupform;
    QLineEdit *passwordtextsignupform;
    QPushButton *signupbuttonsignupform_2;
    QGraphicsView *graphicsView_3;
    QLineEdit *worktextboxsignupform;
    QLineEdit *educationtextboxsignupform;
    QLineEdit *gendertextboxsignupform;
    QLineEdit *birthdatetextboxsignupform;
    QLineEdit *emailtextsignupform;
    QLineEdit *liveintextboxsignupform;
    QPushButton *loginbuttonsignupform;
    QWidget *page2;
    QFrame *frame_3;
    QFrame *upbar;
    QPushButton *timelinebutton;
    QPushButton *newsfeedbutton;
    QPushButton *friendsbutton;
    QPushButton *settingbutton;
    QPushButton *logoutbutton;
    QStackedWidget *stackedWidget_2;
    QWidget *page_2_0;
    QFrame *timelineframe;
    QGraphicsView *graphicsView_10;
    QGraphicsView *graphicsView_11;
    QGraphicsView *graphicsView_12;
    QGraphicsView *graphicsView_13;
    QGraphicsView *graphicsView_14;
    QGraphicsView *graphicsView_15;
    QLabel *usernamedisplaytimeline_2;
    QLabel *genderdisplaytimeline_2;
    QLabel *educationdisplaytimeline_2;
    QLabel *workdisplaytimeline_5;
    QLabel *liveindisplaytimeline_6;
    QLabel *birthdaydisplaytimeline_2;
    QLineEdit *posttextareatimeline_2;
    QPushButton *publishbuttontimeline_2;
    QScrollArea *scrollArea;
    QWidget *scrollareapoststimeline;
    QVBoxLayout *verticalLayout;
    QWidget *page_2_1;
    QFrame *timelineframe_3;
    QLineEdit *posttextnewsfeed;
    QPushButton *publishbuttonnewsfeed;
    QScrollArea *scrollArea_5;
    QWidget *scrollareapostsnewsfeed;
    QVBoxLayout *verticalLayout_5;
    QWidget *page2_2;
    QFrame *timelineframe_4;
    QScrollArea *scrollArea_8;
    QWidget *scrollareafriendslist;
    QVBoxLayout *verticalLayout_8;
    QLabel *label;
    QScrollArea *scrollArea_9;
    QWidget *scrollareasuggestionfriends;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_2;
    QWidget *page2_3;
    QFrame *frame_6;
    QLineEdit *changeusername;
    QLineEdit *changepassword;
    QLineEdit *changework;
    QLineEdit *changeeducation;
    QLineEdit *changelivein;
    QPushButton *changenamebutton;
    QPushButton *changepasswordbutton;
    QPushButton *changeworkbutton;
    QPushButton *changeeducationbutton;
    QPushButton *changeliveinbutton;
    QWidget *page3;
    QFrame *frame_4;
    QPushButton *backoncommentpage;
    QScrollArea *scrollArea_7;
    QWidget *scrollareapostscomments;
    QVBoxLayout *verticalLayout_7;
    QPushButton *publishbuttoncomment;
    QLineEdit *commenttextbox;
    QWidget *page4;
    QFrame *frame_5;
    QPushButton *backoncommentpage_2;
    QScrollArea *scrollArea_10;
    QWidget *scrollareapostscomments_2;
    QVBoxLayout *verticalLayout_10;
    QPushButton *publishbuttoncomment_2;
    QLineEdit *commenttextbox_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(550, 950);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 550, 950));
        page0 = new QWidget();
        page0->setObjectName(QString::fromUtf8("page0"));
        frame = new QFrame(page0);
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
        emailtextlogin = new QLineEdit(frame);
        emailtextlogin->setObjectName(QString::fromUtf8("emailtextlogin"));
        emailtextlogin->setGeometry(QRect(69, 400, 411, 61));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        emailtextlogin->setFont(font1);
        emailtextlogin->setAutoFillBackground(false);
        emailtextlogin->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        passwordtextlogin = new QLineEdit(frame);
        passwordtextlogin->setObjectName(QString::fromUtf8("passwordtextlogin"));
        passwordtextlogin->setGeometry(QRect(69, 550, 411, 61));
        passwordtextlogin->setFont(font1);
        passwordtextlogin->setAutoFillBackground(false);
        passwordtextlogin->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        passwordtextlogin->setEchoMode(QLineEdit::Password);
        loginbuttonloginwidget = new QPushButton(frame);
        loginbuttonloginwidget->setObjectName(QString::fromUtf8("loginbuttonloginwidget"));
        loginbuttonloginwidget->setGeometry(QRect(114, 700, 321, 61));
        QFont font2;
        font2.setPointSize(12);
        loginbuttonloginwidget->setFont(font2);
        loginbuttonloginwidget->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        signupbuttonsignupwidget = new QPushButton(frame);
        signupbuttonsignupwidget->setObjectName(QString::fromUtf8("signupbuttonsignupwidget"));
        signupbuttonsignupwidget->setGeometry(QRect(147, 800, 250, 61));
        signupbuttonsignupwidget->setFont(font2);
        signupbuttonsignupwidget->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(37, 39, 80);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(37, 39, 70);\n"
"}"));
        graphicsView = new QGraphicsView(frame);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(123, 170, 301, 81));
        graphicsView->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"\n"
"{\n"
"	background-image: url(:/facebooklogo/facebooktextlogo.png) no-repeat center center fixed;\n"
"    background-size:cover;\n"
"    border:0px\n"
"\n"
"}"));
        stackedWidget->addWidget(page0);
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        frame_2 = new QFrame(page1);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 550, 950));
        frame_2->setFont(font);
        frame_2->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        usernametextboxsignupform = new QLineEdit(frame_2);
        usernametextboxsignupform->setObjectName(QString::fromUtf8("usernametextboxsignupform"));
        usernametextboxsignupform->setGeometry(QRect(70, 190, 411, 61));
        usernametextboxsignupform->setFont(font1);
        usernametextboxsignupform->setAutoFillBackground(false);
        usernametextboxsignupform->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        passwordtextsignupform = new QLineEdit(frame_2);
        passwordtextsignupform->setObjectName(QString::fromUtf8("passwordtextsignupform"));
        passwordtextsignupform->setGeometry(QRect(70, 340, 411, 61));
        passwordtextsignupform->setFont(font1);
        passwordtextsignupform->setAutoFillBackground(false);
        passwordtextsignupform->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        passwordtextsignupform->setEchoMode(QLineEdit::Password);
        signupbuttonsignupform_2 = new QPushButton(frame_2);
        signupbuttonsignupform_2->setObjectName(QString::fromUtf8("signupbuttonsignupform_2"));
        signupbuttonsignupform_2->setGeometry(QRect(110, 800, 321, 61));
        signupbuttonsignupform_2->setFont(font2);
        signupbuttonsignupform_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        graphicsView_3 = new QGraphicsView(frame_2);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(120, 60, 301, 81));
        graphicsView_3->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"\n"
"{\n"
"	background-image: url(:/facebooklogo/facebooktextlogo.png) no-repeat center center fixed;\n"
"    background-size:cover;\n"
"    border:0px\n"
"\n"
"}"));
        worktextboxsignupform = new QLineEdit(frame_2);
        worktextboxsignupform->setObjectName(QString::fromUtf8("worktextboxsignupform"));
        worktextboxsignupform->setGeometry(QRect(69, 490, 411, 61));
        worktextboxsignupform->setFont(font1);
        worktextboxsignupform->setAutoFillBackground(false);
        worktextboxsignupform->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        educationtextboxsignupform = new QLineEdit(frame_2);
        educationtextboxsignupform->setObjectName(QString::fromUtf8("educationtextboxsignupform"));
        educationtextboxsignupform->setGeometry(QRect(69, 565, 411, 61));
        educationtextboxsignupform->setFont(font1);
        educationtextboxsignupform->setAutoFillBackground(false);
        educationtextboxsignupform->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        gendertextboxsignupform = new QLineEdit(frame_2);
        gendertextboxsignupform->setObjectName(QString::fromUtf8("gendertextboxsignupform"));
        gendertextboxsignupform->setGeometry(QRect(70, 640, 411, 61));
        gendertextboxsignupform->setFont(font1);
        gendertextboxsignupform->setAutoFillBackground(false);
        gendertextboxsignupform->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        birthdatetextboxsignupform = new QLineEdit(frame_2);
        birthdatetextboxsignupform->setObjectName(QString::fromUtf8("birthdatetextboxsignupform"));
        birthdatetextboxsignupform->setGeometry(QRect(70, 415, 411, 61));
        birthdatetextboxsignupform->setFont(font1);
        birthdatetextboxsignupform->setAutoFillBackground(false);
        birthdatetextboxsignupform->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        emailtextsignupform = new QLineEdit(frame_2);
        emailtextsignupform->setObjectName(QString::fromUtf8("emailtextsignupform"));
        emailtextsignupform->setGeometry(QRect(70, 265, 411, 61));
        emailtextsignupform->setFont(font1);
        emailtextsignupform->setAutoFillBackground(false);
        emailtextsignupform->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        liveintextboxsignupform = new QLineEdit(frame_2);
        liveintextboxsignupform->setObjectName(QString::fromUtf8("liveintextboxsignupform"));
        liveintextboxsignupform->setGeometry(QRect(70, 715, 411, 61));
        liveintextboxsignupform->setFont(font1);
        liveintextboxsignupform->setAutoFillBackground(false);
        liveintextboxsignupform->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        loginbuttonsignupform = new QPushButton(frame_2);
        loginbuttonsignupform->setObjectName(QString::fromUtf8("loginbuttonsignupform"));
        loginbuttonsignupform->setGeometry(QRect(197, 870, 151, 41));
        loginbuttonsignupform->setFont(font2);
        loginbuttonsignupform->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(37, 39, 80);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(37, 39, 70);\n"
"}"));
        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        frame_3 = new QFrame(page2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 550, 950));
        frame_3->setFont(font);
        frame_3->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"}"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        upbar = new QFrame(frame_3);
        upbar->setObjectName(QString::fromUtf8("upbar"));
        upbar->setGeometry(QRect(0, 0, 551, 111));
        upbar->setFrameShape(QFrame::StyledPanel);
        upbar->setFrameShadow(QFrame::Raised);
        timelinebutton = new QPushButton(upbar);
        timelinebutton->setObjectName(QString::fromUtf8("timelinebutton"));
        timelinebutton->setGeometry(QRect(60, 19, 71, 61));
        QFont font3;
        font3.setBold(true);
        timelinebutton->setFont(font3);
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
        newsfeedbutton = new QPushButton(upbar);
        newsfeedbutton->setObjectName(QString::fromUtf8("newsfeedbutton"));
        newsfeedbutton->setGeometry(QRect(150, 19, 71, 61));
        newsfeedbutton->setFont(font3);
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
        friendsbutton = new QPushButton(upbar);
        friendsbutton->setObjectName(QString::fromUtf8("friendsbutton"));
        friendsbutton->setGeometry(QRect(242, 19, 71, 61));
        friendsbutton->setFont(font3);
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
        settingbutton = new QPushButton(upbar);
        settingbutton->setObjectName(QString::fromUtf8("settingbutton"));
        settingbutton->setGeometry(QRect(332, 19, 71, 61));
        settingbutton->setFont(font3);
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
        logoutbutton = new QPushButton(upbar);
        logoutbutton->setObjectName(QString::fromUtf8("logoutbutton"));
        logoutbutton->setGeometry(QRect(423, 19, 71, 61));
        logoutbutton->setFont(font3);
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
        stackedWidget_2 = new QStackedWidget(frame_3);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(0, 90, 550, 861));
        page_2_0 = new QWidget();
        page_2_0->setObjectName(QString::fromUtf8("page_2_0"));
        timelineframe = new QFrame(page_2_0);
        timelineframe->setObjectName(QString::fromUtf8("timelineframe"));
        timelineframe->setGeometry(QRect(0, 0, 550, 861));
        timelineframe->setFrameShape(QFrame::StyledPanel);
        timelineframe->setFrameShadow(QFrame::Raised);
        graphicsView_10 = new QGraphicsView(timelineframe);
        graphicsView_10->setObjectName(QString::fromUtf8("graphicsView_10"));
        graphicsView_10->setGeometry(QRect(40, 20, 25, 25));
        graphicsView_10->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"	background-image: url(:/facebooklogo/rename-24.png)no-repeat center center fixed;\n"
"border:0px;\n"
"}"));
        graphicsView_11 = new QGraphicsView(timelineframe);
        graphicsView_11->setObjectName(QString::fromUtf8("graphicsView_11"));
        graphicsView_11->setGeometry(QRect(40, 245, 25, 25));
        graphicsView_11->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"	border-image: url(:/facebooklogo/birthday-cake-24 (1).png)no-repeat center center fixed;;\n"
"border:0px;\n"
"}"));
        graphicsView_12 = new QGraphicsView(timelineframe);
        graphicsView_12->setObjectName(QString::fromUtf8("graphicsView_12"));
        graphicsView_12->setGeometry(QRect(40, 200, 25, 25));
        graphicsView_12->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"	background-image: url(:/facebooklogo/home-5-24.png)no-repeat center center fixed;\n"
"border:0px;\n"
"}"));
        graphicsView_13 = new QGraphicsView(timelineframe);
        graphicsView_13->setObjectName(QString::fromUtf8("graphicsView_13"));
        graphicsView_13->setGeometry(QRect(40, 110, 25, 25));
        graphicsView_13->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"	background-image: url(:/facebooklogo/student-24.png)no-repeat center center fixed;\n"
"\n"
"border:0px;\n"
"}"));
        graphicsView_14 = new QGraphicsView(timelineframe);
        graphicsView_14->setObjectName(QString::fromUtf8("graphicsView_14"));
        graphicsView_14->setGeometry(QRect(40, 155, 25, 25));
        graphicsView_14->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"{\n"
"\n"
"\n"
"	background-image: url(:/facebooklogo/worker-24.png)	no-repeat center center fixed;\n"
"border:0px;\n"
"}"));
        graphicsView_15 = new QGraphicsView(timelineframe);
        graphicsView_15->setObjectName(QString::fromUtf8("graphicsView_15"));
        graphicsView_15->setGeometry(QRect(40, 65, 25, 25));
        graphicsView_15->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"\n"
"{\n"
"	background-image: url(:/facebooklogo/user-24.png);no-repeat center center fixed;\n"
"border:0px;\n"
"}"));
        usernamedisplaytimeline_2 = new QLabel(timelineframe);
        usernamedisplaytimeline_2->setObjectName(QString::fromUtf8("usernamedisplaytimeline_2"));
        usernamedisplaytimeline_2->setGeometry(QRect(72, 25, 440, 16));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        usernamedisplaytimeline_2->setFont(font4);
        usernamedisplaytimeline_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        genderdisplaytimeline_2 = new QLabel(timelineframe);
        genderdisplaytimeline_2->setObjectName(QString::fromUtf8("genderdisplaytimeline_2"));
        genderdisplaytimeline_2->setGeometry(QRect(73, 70, 440, 16));
        genderdisplaytimeline_2->setFont(font4);
        genderdisplaytimeline_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        educationdisplaytimeline_2 = new QLabel(timelineframe);
        educationdisplaytimeline_2->setObjectName(QString::fromUtf8("educationdisplaytimeline_2"));
        educationdisplaytimeline_2->setGeometry(QRect(74, 115, 440, 16));
        educationdisplaytimeline_2->setFont(font4);
        educationdisplaytimeline_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        workdisplaytimeline_5 = new QLabel(timelineframe);
        workdisplaytimeline_5->setObjectName(QString::fromUtf8("workdisplaytimeline_5"));
        workdisplaytimeline_5->setGeometry(QRect(73, 160, 440, 16));
        workdisplaytimeline_5->setFont(font4);
        workdisplaytimeline_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        liveindisplaytimeline_6 = new QLabel(timelineframe);
        liveindisplaytimeline_6->setObjectName(QString::fromUtf8("liveindisplaytimeline_6"));
        liveindisplaytimeline_6->setGeometry(QRect(74, 205, 440, 16));
        liveindisplaytimeline_6->setFont(font4);
        liveindisplaytimeline_6->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        birthdaydisplaytimeline_2 = new QLabel(timelineframe);
        birthdaydisplaytimeline_2->setObjectName(QString::fromUtf8("birthdaydisplaytimeline_2"));
        birthdaydisplaytimeline_2->setGeometry(QRect(75, 250, 440, 16));
        birthdaydisplaytimeline_2->setFont(font4);
        birthdaydisplaytimeline_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"}"));
        posttextareatimeline_2 = new QLineEdit(timelineframe);
        posttextareatimeline_2->setObjectName(QString::fromUtf8("posttextareatimeline_2"));
        posttextareatimeline_2->setGeometry(QRect(20, 287, 411, 71));
        posttextareatimeline_2->setFont(font1);
        posttextareatimeline_2->setAutoFillBackground(false);
        posttextareatimeline_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        posttextareatimeline_2->setEchoMode(QLineEdit::Normal);
        publishbuttontimeline_2 = new QPushButton(timelineframe);
        publishbuttontimeline_2->setObjectName(QString::fromUtf8("publishbuttontimeline_2"));
        publishbuttontimeline_2->setGeometry(QRect(450, 290, 61, 61));
        publishbuttontimeline_2->setFont(font3);
        publishbuttontimeline_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(88, 144, 255);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:30px;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(47, 116, 251);\n"
"}"));
        scrollArea = new QScrollArea(timelineframe);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 370, 541, 461));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setMinimumSize(QSize(0, 100));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"border:0px;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollareapoststimeline = new QWidget();
        scrollareapoststimeline->setObjectName(QString::fromUtf8("scrollareapoststimeline"));
        scrollareapoststimeline->setGeometry(QRect(0, 0, 541, 461));
        scrollareapoststimeline->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"}"));
        verticalLayout = new QVBoxLayout(scrollareapoststimeline);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea->setWidget(scrollareapoststimeline);
        stackedWidget_2->addWidget(page_2_0);
        page_2_1 = new QWidget();
        page_2_1->setObjectName(QString::fromUtf8("page_2_1"));
        timelineframe_3 = new QFrame(page_2_1);
        timelineframe_3->setObjectName(QString::fromUtf8("timelineframe_3"));
        timelineframe_3->setGeometry(QRect(0, 20, 550, 861));
        timelineframe_3->setFrameShape(QFrame::StyledPanel);
        timelineframe_3->setFrameShadow(QFrame::Raised);
        posttextnewsfeed = new QLineEdit(timelineframe_3);
        posttextnewsfeed->setObjectName(QString::fromUtf8("posttextnewsfeed"));
        posttextnewsfeed->setGeometry(QRect(20, 37, 411, 71));
        posttextnewsfeed->setFont(font1);
        posttextnewsfeed->setAutoFillBackground(false);
        posttextnewsfeed->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        posttextnewsfeed->setEchoMode(QLineEdit::Normal);
        publishbuttonnewsfeed = new QPushButton(timelineframe_3);
        publishbuttonnewsfeed->setObjectName(QString::fromUtf8("publishbuttonnewsfeed"));
        publishbuttonnewsfeed->setGeometry(QRect(450, 40, 61, 61));
        publishbuttonnewsfeed->setFont(font3);
        publishbuttonnewsfeed->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(88, 144, 255);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:30px;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(47, 116, 251);\n"
"}"));
        scrollArea_5 = new QScrollArea(timelineframe_3);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setGeometry(QRect(10, 140, 541, 661));
        sizePolicy.setHeightForWidth(scrollArea_5->sizePolicy().hasHeightForWidth());
        scrollArea_5->setSizePolicy(sizePolicy);
        scrollArea_5->setMinimumSize(QSize(0, 100));
        scrollArea_5->setStyleSheet(QString::fromUtf8("QScrollArea\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"border:0px;\n"
"}"));
        scrollArea_5->setWidgetResizable(true);
        scrollareapostsnewsfeed = new QWidget();
        scrollareapostsnewsfeed->setObjectName(QString::fromUtf8("scrollareapostsnewsfeed"));
        scrollareapostsnewsfeed->setGeometry(QRect(0, 0, 541, 661));
        scrollareapostsnewsfeed->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(scrollareapostsnewsfeed);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        scrollArea_5->setWidget(scrollareapostsnewsfeed);
        stackedWidget_2->addWidget(page_2_1);
        page2_2 = new QWidget();
        page2_2->setObjectName(QString::fromUtf8("page2_2"));
        timelineframe_4 = new QFrame(page2_2);
        timelineframe_4->setObjectName(QString::fromUtf8("timelineframe_4"));
        timelineframe_4->setGeometry(QRect(0, 0, 550, 841));
        timelineframe_4->setFrameShape(QFrame::StyledPanel);
        timelineframe_4->setFrameShadow(QFrame::Raised);
        scrollArea_8 = new QScrollArea(timelineframe_4);
        scrollArea_8->setObjectName(QString::fromUtf8("scrollArea_8"));
        scrollArea_8->setGeometry(QRect(3, 480, 541, 351));
        sizePolicy.setHeightForWidth(scrollArea_8->sizePolicy().hasHeightForWidth());
        scrollArea_8->setSizePolicy(sizePolicy);
        scrollArea_8->setMinimumSize(QSize(0, 100));
        scrollArea_8->setStyleSheet(QString::fromUtf8("QScrollArea\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"border:0px;\n"
"}"));
        scrollArea_8->setWidgetResizable(true);
        scrollareafriendslist = new QWidget();
        scrollareafriendslist->setObjectName(QString::fromUtf8("scrollareafriendslist"));
        scrollareafriendslist->setGeometry(QRect(0, 0, 541, 351));
        scrollareafriendslist->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"}"));
        verticalLayout_8 = new QVBoxLayout(scrollareafriendslist);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        scrollArea_8->setWidget(scrollareafriendslist);
        label = new QLabel(timelineframe_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(14, 434, 161, 41));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:#fff\n"
"}"));
        scrollArea_9 = new QScrollArea(timelineframe_4);
        scrollArea_9->setObjectName(QString::fromUtf8("scrollArea_9"));
        scrollArea_9->setGeometry(QRect(4, 62, 541, 331));
        sizePolicy.setHeightForWidth(scrollArea_9->sizePolicy().hasHeightForWidth());
        scrollArea_9->setSizePolicy(sizePolicy);
        scrollArea_9->setMinimumSize(QSize(0, 100));
        scrollArea_9->setStyleSheet(QString::fromUtf8("QScrollArea\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"border:0px;\n"
"}"));
        scrollArea_9->setWidgetResizable(true);
        scrollareasuggestionfriends = new QWidget();
        scrollareasuggestionfriends->setObjectName(QString::fromUtf8("scrollareasuggestionfriends"));
        scrollareasuggestionfriends->setGeometry(QRect(0, 0, 541, 331));
        scrollareasuggestionfriends->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"}"));
        verticalLayout_9 = new QVBoxLayout(scrollareasuggestionfriends);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        scrollArea_9->setWidget(scrollareasuggestionfriends);
        label_2 = new QLabel(timelineframe_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(14, 20, 221, 41));
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color:#fff\n"
"}"));
        stackedWidget_2->addWidget(page2_2);
        page2_3 = new QWidget();
        page2_3->setObjectName(QString::fromUtf8("page2_3"));
        frame_6 = new QFrame(page2_3);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(0, -7, 550, 841));
        frame_6->setFont(font);
        frame_6->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"}"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        changeusername = new QLineEdit(frame_6);
        changeusername->setObjectName(QString::fromUtf8("changeusername"));
        changeusername->setGeometry(QRect(30, 80, 371, 61));
        changeusername->setFont(font1);
        changeusername->setAutoFillBackground(false);
        changeusername->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        changepassword = new QLineEdit(frame_6);
        changepassword->setObjectName(QString::fromUtf8("changepassword"));
        changepassword->setGeometry(QRect(30, 220, 371, 61));
        changepassword->setFont(font1);
        changepassword->setAutoFillBackground(false);
        changepassword->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        changepassword->setEchoMode(QLineEdit::Password);
        changework = new QLineEdit(frame_6);
        changework->setObjectName(QString::fromUtf8("changework"));
        changework->setGeometry(QRect(30, 360, 371, 61));
        changework->setFont(font1);
        changework->setAutoFillBackground(false);
        changework->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        changeeducation = new QLineEdit(frame_6);
        changeeducation->setObjectName(QString::fromUtf8("changeeducation"));
        changeeducation->setGeometry(QRect(30, 500, 371, 61));
        changeeducation->setFont(font1);
        changeeducation->setAutoFillBackground(false);
        changeeducation->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        changelivein = new QLineEdit(frame_6);
        changelivein->setObjectName(QString::fromUtf8("changelivein"));
        changelivein->setGeometry(QRect(30, 640, 371, 61));
        changelivein->setFont(font1);
        changelivein->setAutoFillBackground(false);
        changelivein->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        changenamebutton = new QPushButton(frame_6);
        changenamebutton->setObjectName(QString::fromUtf8("changenamebutton"));
        changenamebutton->setGeometry(QRect(420, 83, 91, 51));
        changenamebutton->setFont(font3);
        changenamebutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        changepasswordbutton = new QPushButton(frame_6);
        changepasswordbutton->setObjectName(QString::fromUtf8("changepasswordbutton"));
        changepasswordbutton->setGeometry(QRect(420, 223, 91, 51));
        changepasswordbutton->setFont(font3);
        changepasswordbutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        changeworkbutton = new QPushButton(frame_6);
        changeworkbutton->setObjectName(QString::fromUtf8("changeworkbutton"));
        changeworkbutton->setGeometry(QRect(420, 363, 91, 51));
        changeworkbutton->setFont(font3);
        changeworkbutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        changeeducationbutton = new QPushButton(frame_6);
        changeeducationbutton->setObjectName(QString::fromUtf8("changeeducationbutton"));
        changeeducationbutton->setGeometry(QRect(420, 503, 91, 51));
        changeeducationbutton->setFont(font3);
        changeeducationbutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        changeliveinbutton = new QPushButton(frame_6);
        changeliveinbutton->setObjectName(QString::fromUtf8("changeliveinbutton"));
        changeliveinbutton->setGeometry(QRect(420, 643, 91, 51));
        changeliveinbutton->setFont(font3);
        changeliveinbutton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        stackedWidget_2->addWidget(page2_3);
        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QString::fromUtf8("page3"));
        frame_4 = new QFrame(page3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(0, 0, 550, 950));
        frame_4->setFont(font);
        frame_4->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        backoncommentpage = new QPushButton(frame_4);
        backoncommentpage->setObjectName(QString::fromUtf8("backoncommentpage"));
        backoncommentpage->setGeometry(QRect(10, 10, 61, 41));
        backoncommentpage->setFont(font2);
        backoncommentpage->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        scrollArea_7 = new QScrollArea(frame_4);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setGeometry(QRect(0, 180, 551, 741));
        sizePolicy.setHeightForWidth(scrollArea_7->sizePolicy().hasHeightForWidth());
        scrollArea_7->setSizePolicy(sizePolicy);
        scrollArea_7->setMinimumSize(QSize(0, 100));
        scrollArea_7->setStyleSheet(QString::fromUtf8("QScrollArea\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"border:0px;\n"
"}"));
        scrollArea_7->setWidgetResizable(true);
        scrollareapostscomments = new QWidget();
        scrollareapostscomments->setObjectName(QString::fromUtf8("scrollareapostscomments"));
        scrollareapostscomments->setGeometry(QRect(0, 0, 551, 741));
        scrollareapostscomments->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"}"));
        verticalLayout_7 = new QVBoxLayout(scrollareapostscomments);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        scrollArea_7->setWidget(scrollareapostscomments);
        publishbuttoncomment = new QPushButton(frame_4);
        publishbuttoncomment->setObjectName(QString::fromUtf8("publishbuttoncomment"));
        publishbuttoncomment->setGeometry(QRect(450, 74, 61, 61));
        publishbuttoncomment->setFont(font3);
        publishbuttoncomment->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(88, 144, 255);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:30px;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(47, 116, 251);\n"
"}"));
        commenttextbox = new QLineEdit(frame_4);
        commenttextbox->setObjectName(QString::fromUtf8("commenttextbox"));
        commenttextbox->setGeometry(QRect(20, 80, 411, 51));
        commenttextbox->setFont(font1);
        commenttextbox->setAutoFillBackground(false);
        commenttextbox->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        commenttextbox->setEchoMode(QLineEdit::Normal);
        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QString::fromUtf8("page4"));
        frame_5 = new QFrame(page4);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 550, 950));
        frame_5->setFont(font);
        frame_5->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        backoncommentpage_2 = new QPushButton(frame_5);
        backoncommentpage_2->setObjectName(QString::fromUtf8("backoncommentpage_2"));
        backoncommentpage_2->setGeometry(QRect(10, 10, 61, 41));
        backoncommentpage_2->setFont(font2);
        backoncommentpage_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        scrollArea_10 = new QScrollArea(frame_5);
        scrollArea_10->setObjectName(QString::fromUtf8("scrollArea_10"));
        scrollArea_10->setGeometry(QRect(0, 180, 551, 741));
        sizePolicy.setHeightForWidth(scrollArea_10->sizePolicy().hasHeightForWidth());
        scrollArea_10->setSizePolicy(sizePolicy);
        scrollArea_10->setMinimumSize(QSize(0, 100));
        scrollArea_10->setStyleSheet(QString::fromUtf8("QScrollArea\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"border:0px;\n"
"}"));
        scrollArea_10->setWidgetResizable(true);
        scrollareapostscomments_2 = new QWidget();
        scrollareapostscomments_2->setObjectName(QString::fromUtf8("scrollareapostscomments_2"));
        scrollareapostscomments_2->setGeometry(QRect(0, 0, 551, 741));
        scrollareapostscomments_2->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"background-color: rgb(27, 29, 35);\n"
"}"));
        verticalLayout_10 = new QVBoxLayout(scrollareapostscomments_2);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        scrollArea_10->setWidget(scrollareapostscomments_2);
        publishbuttoncomment_2 = new QPushButton(frame_5);
        publishbuttoncomment_2->setObjectName(QString::fromUtf8("publishbuttoncomment_2"));
        publishbuttoncomment_2->setGeometry(QRect(450, 74, 61, 61));
        publishbuttoncomment_2->setFont(font3);
        publishbuttoncomment_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(88, 144, 255);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:30px;\n"
"color:#fff;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(47, 116, 251);\n"
"}"));
        commenttextbox_2 = new QLineEdit(frame_5);
        commenttextbox_2->setObjectName(QString::fromUtf8("commenttextbox_2"));
        commenttextbox_2->setGeometry(QRect(20, 80, 411, 51));
        commenttextbox_2->setFont(font1);
        commenttextbox_2->setAutoFillBackground(false);
        commenttextbox_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"background-color: rgb(37, 39, 48);\n"
"border:2px solid rgb(37,39,48);\n"
"border-radius:20px;\n"
"padding-left:20px;\n"
"color:#fff;\n"
"padding-right:20px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"border:2px solid rgb(48,50,62);\n"
"}\n"
"QLineEdit:focus\n"
"{\n"
"border:2px solid rgb(85,170,255);\n"
"background-color:rgb(43,45,56);\n"
"}"));
        commenttextbox_2->setEchoMode(QLineEdit::Normal);
        stackedWidget->addWidget(page4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 550, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget_2->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        emailtextlogin->setText(QString());
        emailtextlogin->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        passwordtextlogin->setText(QString());
        passwordtextlogin->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        loginbuttonloginwidget->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signupbuttonsignupwidget->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        usernametextboxsignupform->setText(QString());
        usernametextboxsignupform->setPlaceholderText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        passwordtextsignupform->setText(QString());
        passwordtextsignupform->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        signupbuttonsignupform_2->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        worktextboxsignupform->setText(QString());
        worktextboxsignupform->setPlaceholderText(QCoreApplication::translate("MainWindow", "Work", nullptr));
        educationtextboxsignupform->setText(QString());
        educationtextboxsignupform->setPlaceholderText(QCoreApplication::translate("MainWindow", "Education", nullptr));
        gendertextboxsignupform->setText(QString());
        gendertextboxsignupform->setPlaceholderText(QCoreApplication::translate("MainWindow", "Gender", nullptr));
        birthdatetextboxsignupform->setText(QString());
        birthdatetextboxsignupform->setPlaceholderText(QCoreApplication::translate("MainWindow", "BirthDate", nullptr));
        emailtextsignupform->setText(QString());
        emailtextsignupform->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        liveintextboxsignupform->setText(QString());
        liveintextboxsignupform->setPlaceholderText(QCoreApplication::translate("MainWindow", "Live In", nullptr));
        loginbuttonsignupform->setText(QCoreApplication::translate("MainWindow", "LogIn", nullptr));
        timelinebutton->setText(QCoreApplication::translate("MainWindow", "Timeline", nullptr));
        newsfeedbutton->setText(QCoreApplication::translate("MainWindow", "NewsFeed", nullptr));
        friendsbutton->setText(QCoreApplication::translate("MainWindow", "Friends", nullptr));
        settingbutton->setText(QCoreApplication::translate("MainWindow", "Setting", nullptr));
        logoutbutton->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        usernamedisplaytimeline_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        genderdisplaytimeline_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        educationdisplaytimeline_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        workdisplaytimeline_5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        liveindisplaytimeline_6->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        birthdaydisplaytimeline_2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        posttextareatimeline_2->setText(QString());
        posttextareatimeline_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "What's in your mind?", nullptr));
        publishbuttontimeline_2->setText(QCoreApplication::translate("MainWindow", "Publish", nullptr));
        posttextnewsfeed->setText(QString());
        posttextnewsfeed->setPlaceholderText(QCoreApplication::translate("MainWindow", "What's in your mind?", nullptr));
        publishbuttonnewsfeed->setText(QCoreApplication::translate("MainWindow", "Publish", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Friends List", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Suggestion Friends", nullptr));
        changeusername->setText(QString());
        changeusername->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter New Name", nullptr));
        changepassword->setText(QString());
        changepassword->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter New Password", nullptr));
        changework->setText(QString());
        changework->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter New Work", nullptr));
        changeeducation->setText(QString());
        changeeducation->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter New Education", nullptr));
        changelivein->setText(QString());
        changelivein->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter New Live In", nullptr));
        changenamebutton->setText(QCoreApplication::translate("MainWindow", "Save Change", nullptr));
        changepasswordbutton->setText(QCoreApplication::translate("MainWindow", "Save Change", nullptr));
        changeworkbutton->setText(QCoreApplication::translate("MainWindow", "Save Change", nullptr));
        changeeducationbutton->setText(QCoreApplication::translate("MainWindow", "Save Change", nullptr));
        changeliveinbutton->setText(QCoreApplication::translate("MainWindow", "Save Change", nullptr));
        backoncommentpage->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        publishbuttoncomment->setText(QCoreApplication::translate("MainWindow", "Publish", nullptr));
        commenttextbox->setText(QString());
        commenttextbox->setPlaceholderText(QCoreApplication::translate("MainWindow", "Write a comment...", nullptr));
        backoncommentpage_2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        publishbuttoncomment_2->setText(QCoreApplication::translate("MainWindow", "Publish", nullptr));
        commenttextbox_2->setText(QString());
        commenttextbox_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Write a comment...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
