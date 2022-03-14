/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QFrame *frame;
    QLineEdit *usernametextbox;
    QLineEdit *passwordtextsignup;
    QPushButton *signupbuttonsignupform;
    QGraphicsView *graphicsView_2;
    QLineEdit *worktextbox;
    QLineEdit *educationtextbox;
    QLineEdit *gendertextbox;
    QLineEdit *birthdatetextbox;
    QLineEdit *emailtextsignup;
    QLineEdit *liveintextbox;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(550, 950);
        frame = new QFrame(signup);
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
        usernametextbox = new QLineEdit(frame);
        usernametextbox->setObjectName(QString::fromUtf8("usernametextbox"));
        usernametextbox->setGeometry(QRect(70, 190, 411, 61));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        usernametextbox->setFont(font1);
        usernametextbox->setAutoFillBackground(false);
        usernametextbox->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        passwordtextsignup = new QLineEdit(frame);
        passwordtextsignup->setObjectName(QString::fromUtf8("passwordtextsignup"));
        passwordtextsignup->setGeometry(QRect(70, 340, 411, 61));
        passwordtextsignup->setFont(font1);
        passwordtextsignup->setAutoFillBackground(false);
        passwordtextsignup->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        passwordtextsignup->setEchoMode(QLineEdit::Password);
        signupbuttonsignupform = new QPushButton(frame);
        signupbuttonsignupform->setObjectName(QString::fromUtf8("signupbuttonsignupform"));
        signupbuttonsignupform->setGeometry(QRect(112, 821, 321, 61));
        QFont font2;
        font2.setPointSize(12);
        signupbuttonsignupform->setFont(font2);
        signupbuttonsignupform->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        graphicsView_2 = new QGraphicsView(frame);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(120, 60, 301, 81));
        graphicsView_2->setStyleSheet(QString::fromUtf8("QGraphicsView\n"
"\n"
"{\n"
"	background-image: url(:/facebooklogo/facebooktextlogo.png) no-repeat center center fixed;\n"
"    background-size:cover;\n"
"    border:0px\n"
"\n"
"}"));
        worktextbox = new QLineEdit(frame);
        worktextbox->setObjectName(QString::fromUtf8("worktextbox"));
        worktextbox->setGeometry(QRect(69, 490, 411, 61));
        worktextbox->setFont(font1);
        worktextbox->setAutoFillBackground(false);
        worktextbox->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        educationtextbox = new QLineEdit(frame);
        educationtextbox->setObjectName(QString::fromUtf8("educationtextbox"));
        educationtextbox->setGeometry(QRect(69, 565, 411, 61));
        educationtextbox->setFont(font1);
        educationtextbox->setAutoFillBackground(false);
        educationtextbox->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        gendertextbox = new QLineEdit(frame);
        gendertextbox->setObjectName(QString::fromUtf8("gendertextbox"));
        gendertextbox->setGeometry(QRect(70, 640, 411, 61));
        gendertextbox->setFont(font1);
        gendertextbox->setAutoFillBackground(false);
        gendertextbox->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        birthdatetextbox = new QLineEdit(frame);
        birthdatetextbox->setObjectName(QString::fromUtf8("birthdatetextbox"));
        birthdatetextbox->setGeometry(QRect(70, 415, 411, 61));
        birthdatetextbox->setFont(font1);
        birthdatetextbox->setAutoFillBackground(false);
        birthdatetextbox->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        emailtextsignup = new QLineEdit(frame);
        emailtextsignup->setObjectName(QString::fromUtf8("emailtextsignup"));
        emailtextsignup->setGeometry(QRect(70, 265, 411, 61));
        emailtextsignup->setFont(font1);
        emailtextsignup->setAutoFillBackground(false);
        emailtextsignup->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        liveintextbox = new QLineEdit(frame);
        liveintextbox->setObjectName(QString::fromUtf8("liveintextbox"));
        liveintextbox->setGeometry(QRect(70, 715, 411, 61));
        liveintextbox->setFont(font1);
        liveintextbox->setAutoFillBackground(false);
        liveintextbox->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Form", nullptr));
        usernametextbox->setText(QString());
        usernametextbox->setPlaceholderText(QCoreApplication::translate("signup", "User Name", nullptr));
        passwordtextsignup->setText(QString());
        passwordtextsignup->setPlaceholderText(QCoreApplication::translate("signup", "Password", nullptr));
        signupbuttonsignupform->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
        worktextbox->setText(QString());
        worktextbox->setPlaceholderText(QCoreApplication::translate("signup", "Work", nullptr));
        educationtextbox->setText(QString());
        educationtextbox->setPlaceholderText(QCoreApplication::translate("signup", "Education", nullptr));
        gendertextbox->setText(QString());
        gendertextbox->setPlaceholderText(QCoreApplication::translate("signup", "Gender", nullptr));
        birthdatetextbox->setText(QString());
        birthdatetextbox->setPlaceholderText(QCoreApplication::translate("signup", "BirthDate", nullptr));
        emailtextsignup->setText(QString());
        emailtextsignup->setPlaceholderText(QCoreApplication::translate("signup", "Email", nullptr));
        liveintextbox->setText(QString());
        liveintextbox->setPlaceholderText(QCoreApplication::translate("signup", "Live In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
