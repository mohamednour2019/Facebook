#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QPushButton>
#include<QBoxLayout>
#include<QVBoxLayout>
#include<vector>
#include"Comment.h"
#include<QMainWindow>
#include"User.h"
#include<QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

#include"User.h"
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void onAddPostTimeline();
    void onAddPostNewsFeed();
    void onAddPostCommentTimeLine();
    void onAddPostCommentNewFeed();
    void createFriendSuggestionBlock(string username);
    void createFriendListBlock(string username);
    void displayFriendsSuggestions();
    void sharePostTiemLine();
    void sharePostNewsFeed();
    void displayFriendsList();
    void getPostContent();
    void goToTimelineComments();
    void unFriend();
    void goToNewsFeedComments();
    void createCommentBlock2(string content, string datetime, string username);
    void addFromSuggestion();
    void AddLikeForPost();
    void AddLikeForPost2();
    void createNewsFeedPostBlock(string content,string datetime,string username,int numberoflikes);
    void createTimeLinePostBlock(string content,string datetime,string username,int numberoflikes);
    void hey();
    void createCommentBlock(string content,string datetime,string username);
    QHash<QPushButton*,QBoxLayout*>mButtonToLayoutMap;
    QHash<QPushButton*,QWidget*>mButtonToWidgetMap;


private slots:

    void on_signupbuttonsignupwidget_clicked();

    void on_loginbuttonsignupform_clicked();

    void on_timelinebutton_clicked();

    void on_signupbuttonsignupform_2_clicked();

    void on_logoutbutton_clicked();


    void on_newsfeedbutton_clicked();

    void on_backoncommentpage_clicked();

    void on_loginbuttonloginwidget_clicked();

    void on_friendsbutton_clicked();




    void on_backoncommentpage_2_clicked();

    void on_settingbutton_clicked();

    void on_changenamebutton_clicked();

    void on_changepasswordbutton_clicked();

    void on_changeworkbutton_clicked();

    void on_changeeducationbutton_clicked();

    void on_changeliveinbutton_clicked();

private:
    Ui::MainWindow *ui;

    int activeuserindex;
    int activepostindex;
    string savecommentcontent;
    QWidget*pointer;
    QString buttonstyle="QPushButton {"
                   "background-color: rgb(47, 116, 251);"
                   "border:2px solid rgb(47, 116, 251);"
                   "border-radius:10px;"
                   "color:#fff;" "}"
                   "QPushButton:hover {"
                   "background-color: rgb(88, 144, 255);""}";
   QWidget *pointerToTimeLinePosts[1000];
   int NumberOfIndexOfTimeLinePosts=-1;

   QWidget *pointerToNewsFeedPosts[1000];
   int NumberOfIndexOfNewsFeedPosts=-1;

   QWidget *pointerToComments[1000];
   int NumberOfIndexOfComments=-1;

   QWidget *pointerToComments2[1000];
   int NumberOfIndexOfComments2=-1;


   QWidget *pointerToFriendsSuggestion[1000];
   int NumberOfIndexOfFriendsSuggestion=-1;

   QWidget *pointerToFriendsList[1000];
   int NumberOfIndexOfFriendsList=-1;




};
#endif // MAINWINDOW_H
