#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    this->setGeometry(700,50,550,950);
          QObject::connect(
          ui->publishbuttontimeline_2, &QPushButton::clicked,
          this, &MainWindow::onAddPostTimeline);
          QObject::connect(
          ui->publishbuttonnewsfeed, &QPushButton::clicked,
          this, &MainWindow::onAddPostNewsFeed);

          QObject::connect(
          ui->publishbuttoncomment, &QPushButton::clicked,
          this, &MainWindow::onAddPostCommentTimeLine);
          QObject::connect(
          ui->publishbuttoncomment_2, &QPushButton::clicked,
          this, &MainWindow::onAddPostCommentNewFeed);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_signupbuttonsignupwidget_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

}


void MainWindow::on_loginbuttonsignupform_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_timelinebutton_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);

}

void MainWindow::on_signupbuttonsignupform_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QString email=ui->emailtextsignupform->text();
    QString password=ui->passwordtextsignupform->text();
    QString username=ui->usernametextboxsignupform->text();
    QString education=ui->educationtextboxsignupform->text();
    QString birthdate=ui->birthdatetextboxsignupform->text();
    QString work=ui->worktextboxsignupform->text();
    QString livein= ui->liveintextboxsignupform->text();
    QString gender=ui->gendertextboxsignupform->text();

    ui->usernamedisplaytimeline_2->setText(username);
    ui->educationdisplaytimeline_2->setText(education);
    ui->birthdaydisplaytimeline_2->setText(birthdate);
    ui->workdisplaytimeline_5->setText(work);
    ui->liveindisplaytimeline_6->setText(livein);
    ui->genderdisplaytimeline_2->setText(gender);

    User::allusers.push_back(User (username.toStdString(),email.toStdString(),
             password.toStdString(),gender.toStdString(),birthdate.toStdString(),
             work.toStdString(),education.toStdString(),livein.toStdString()));
    activeuserindex=User::allusers.size()-1;
    displayFriendsSuggestions();
    ui->stackedWidget_2->setCurrentIndex(0);
    //getdata(username,email,password,gender,birthdate,work,education,livein);




}





//timeline********************************************************************************************************
void MainWindow::onAddPostTimeline()
{
   User::allusers.at(activeuserindex).addPost(Post(ui->posttextareatimeline_2->text().toStdString(),User::allusers.at(activeuserindex).getName()));

   int lastpostindexTimeLine=User::allusers.at(activeuserindex).getUserTimeLine().getPostsCount()-1;
   int lastpostindexNewsFeed=User::allusers.at(activeuserindex).getUserNewsFeed().getPostsCount()-1;

   for(int i=0;i<=NumberOfIndexOfTimeLinePosts;i++)
   {
    delete pointerToTimeLinePosts[i];
   }
   NumberOfIndexOfTimeLinePosts=-1;

   for(int k=0;k<User::allusers.at(activeuserindex).getUserTimeLine().getPostsCount();k++)
   {

       createTimeLinePostBlock(User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getContent(),
                               User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getDateTime(),
                               User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getUserName(),
                               User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getLikeCount());

   }


   for(int i=0;i<=NumberOfIndexOfNewsFeedPosts;i++)
   {
    delete pointerToNewsFeedPosts[i];
   }
   NumberOfIndexOfNewsFeedPosts=-1;

   for(int j=0;j<User::allusers.at(activeuserindex).getUserNewsFeed().getPostsCount();j++)
   {

       createNewsFeedPostBlock(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getContent(),
                               User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getDateTime(),
                               User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getUserName(),
                               User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getLikeCount());
   }
}


void MainWindow::createTimeLinePostBlock(string content, string datetime, string username, int numberoflikes)
{
    //define BoxLayout and each post block
    QVBoxLayout*Layout=qobject_cast<QVBoxLayout*>(ui->scrollareapoststimeline->layout());
    QWidget*postblock=new QWidget();
    pointer=postblock;
    QBoxLayout*boxlayout=new QBoxLayout(QBoxLayout::TopToBottom,postblock);
    postblock->setMaximumHeight(265);
    postblock->setMinimumHeight(265);
    postblock->setStyleSheet("background-color: rgb(48, 49, 52);border-radius:20px;");

    //post owner and post content
    QLabel *postcontent=new QLabel(postblock);
    QLabel *postOwner=new QLabel(postblock);
    QLabel *postTime=new QLabel(postblock);
    QLabel *numOfLikes=new QLabel(postblock);
    numOfLikes->setText("LIKES: "+QString::fromStdString(to_string(numberoflikes)));
    pointerToTimeLinePosts[Layout->count()]=postblock;
    this->NumberOfIndexOfTimeLinePosts=Layout->count();
    postTime->setText(QString::fromStdString(datetime));
    postOwner->setText(QString::fromStdString(username));
    postOwner->setStyleSheet("color:rgb(228, 230, 235);font-size:20px");
    postTime->setStyleSheet("color:rgb(228, 230, 235);font-size:15px");
    numOfLikes->setStyleSheet("color:rgb(7, 118, 232);font-size:17px");
    postcontent->setStyleSheet("color:rgb(228, 230, 235);font-size:26px");
    postcontent->setMargin(11);
    postcontent->setText(QString::fromStdString(content));
    ui->posttextareatimeline_2->setText(NULL);

    //button add comment

    QPushButton *commentbutton=new QPushButton("Comments",postblock);
    QPushButton *likebutoon=new QPushButton("Like",postblock);
    QPushButton *sharebutton=new QPushButton("Share",postblock);
    boxlayout->insertWidget(0,postOwner);
    boxlayout->insertWidget(1,postTime);
    boxlayout->insertWidget(2,postcontent);
    boxlayout->insertWidget(3,numOfLikes);
    boxlayout->insertWidget(4,likebutoon);
    boxlayout->insertWidget(5,commentbutton);
    boxlayout->insertWidget(6,sharebutton);
    commentbutton->setStyleSheet(buttonstyle);
     likebutoon->setStyleSheet(buttonstyle);
     sharebutton->setStyleSheet(buttonstyle);

    //add the widgets labels into it

       postblock->setLayout(boxlayout);

    //push the boxlayout which have the post components to the QVBox of the scrollview
       Layout->addWidget(postblock);
       // ui->posttextareatimeline_2->setText(QString::fromStdString(to_string(Layout->indexOf(postblock))));
         mButtonToLayoutMap.insert(commentbutton,Layout);
         mButtonToWidgetMap.insert(commentbutton,postblock);
         mButtonToLayoutMap.insert(likebutoon,Layout);
         mButtonToWidgetMap.insert(likebutoon,postblock);
         mButtonToLayoutMap.insert(sharebutton,Layout);
         mButtonToWidgetMap.insert(sharebutton,postblock);


         QObject::connect(
                     commentbutton, &QPushButton::clicked,this, &MainWindow::goToTimelineComments
                     );
         QObject::connect(
                     likebutoon, &QPushButton::clicked,this, &MainWindow::AddLikeForPost
                     );
         QObject::connect(
                     sharebutton, &QPushButton::clicked,this, &MainWindow::sharePostTiemLine
                     );



}
void MainWindow::sharePostTiemLine()
{
    QPushButton*button=qobject_cast<QPushButton*>(sender());
    QBoxLayout *layout=mButtonToLayoutMap.value(button);
    QWidget*widg=mButtonToWidgetMap.value(button);
    activepostindex=layout->indexOf(widg);


    User::allusers.at(activeuserindex).addPost(Post(User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(activepostindex).getContent()
                                                    ,User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(activepostindex).getUserName()));


    for(int i=0;i<=NumberOfIndexOfTimeLinePosts;i++)
    {
     delete pointerToTimeLinePosts[i];
    }
    NumberOfIndexOfTimeLinePosts=-1;

    for(int k=0;k<User::allusers.at(activeuserindex).getUserTimeLine().getPostsCount();k++)
    {

        createTimeLinePostBlock(User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getContent(),
                                User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getDateTime(),
                                User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getUserName(),
                                User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getLikeCount());

    }


    for(int i=0;i<=NumberOfIndexOfNewsFeedPosts;i++)
    {
     delete pointerToNewsFeedPosts[i];
    }
    NumberOfIndexOfNewsFeedPosts=-1;

    for(int j=0;j<User::allusers.at(activeuserindex).getUserNewsFeed().getPostsCount();j++)
    {

        createNewsFeedPostBlock(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getContent(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getDateTime(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getUserName(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getLikeCount());
    }
}

void MainWindow::AddLikeForPost()
{
    QPushButton*button=qobject_cast<QPushButton*>(sender());
    QBoxLayout *layout=mButtonToLayoutMap.value(button);
    QWidget*widg=mButtonToWidgetMap.value(button);
    activepostindex=layout->indexOf(widg);
    User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(activepostindex).addLike(User::allusers.at(activeuserindex).getUserId());

    for(int i=0;i<=NumberOfIndexOfTimeLinePosts;i++)
    {
     delete pointerToTimeLinePosts[i];
    }
    NumberOfIndexOfTimeLinePosts=-1;

    for(int k=0;k<User::allusers.at(activeuserindex).getUserTimeLine().getPostsCount();k++)
    {

        createTimeLinePostBlock(User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getContent(),
                                User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getDateTime(),
                                User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getUserName(),
                                User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getLikeCount());

    }


    for(int i=0;i<=NumberOfIndexOfNewsFeedPosts;i++)
    {
     delete pointerToNewsFeedPosts[i];
    }
    NumberOfIndexOfNewsFeedPosts=-1;

    for(int j=0;j<User::allusers.at(activeuserindex).getUserNewsFeed().getPostsCount();j++)
    {

        createNewsFeedPostBlock(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getContent(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getDateTime(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getUserName(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getLikeCount());
    }

}

void MainWindow::goToTimelineComments()
{
    QPushButton*button=qobject_cast<QPushButton*>(sender());
    QBoxLayout *layout=mButtonToLayoutMap.value(button);
    QWidget*widg=mButtonToWidgetMap.value(button);
    activepostindex=layout->indexOf(widg);

    for(int i=0;i<=NumberOfIndexOfComments;i++)
    {
     delete pointerToComments[i];
    }
    NumberOfIndexOfComments=-1;

    for(int i=0;i<User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(activepostindex).getCommentsCounter();i++)
    {
        createCommentBlock(User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(activepostindex).getComments().at(i).getContent(),
                           User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(activepostindex).getComments().at(i).getDateTime(),
                           User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(activepostindex).getComments().at(i).getCommentOwner());

    }
    ui->stackedWidget->setCurrentIndex(3);
}




void MainWindow::onAddPostCommentTimeLine()
{

    int postId=User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(activepostindex).getPostId();
     Comment c(ui->commenttextbox->text().toStdString(),User::allusers.at(activeuserindex).getName());
     User::allusers.at(activeuserindex).addComment(postId,c);

     for(int i=0;i<=NumberOfIndexOfComments;i++)
     {
      delete pointerToComments[i];
     }
     NumberOfIndexOfComments=-1;
     //ui->posttextareatimeline_2->setText(QString::fromStdString(to_string(activepostindex)));
     for(int i=0;i<User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(activepostindex).getCommentsCounter();i++)
     {
         createCommentBlock(User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(activepostindex).getComments().at(i).getContent(),
                            User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(activepostindex).getComments().at(i).getDateTime(),
                            User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(activepostindex).getComments().at(i).getCommentOwner());

     }

     for(int i=0;i<=NumberOfIndexOfNewsFeedPosts;i++)
     {
      delete pointerToNewsFeedPosts[i];
     }
     NumberOfIndexOfNewsFeedPosts=-1;

     for(int j=0;j<User::allusers.at(activeuserindex).getUserNewsFeed().getPostsCount();j++)
     {

         createNewsFeedPostBlock(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getContent(),
                                 User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getDateTime(),
                                 User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getUserName(),
                                 User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getLikeCount());}






}

void MainWindow::createCommentBlock(string content, string datetime, string username)
{
    //define BoxLayout and each post block
    QVBoxLayout* Layout3 = qobject_cast<QVBoxLayout*>(ui->scrollareapostscomments->layout());
    QWidget* commentblock = new QWidget();
    QBoxLayout* boxlayout = new QBoxLayout(QBoxLayout::TopToBottom, commentblock);
    commentblock->setMaximumHeight(170);
    commentblock->setMinimumHeight(170);
    commentblock->setStyleSheet("background-color: rgb(48, 49, 52);border-radius:18px;");

    //post owner and post content
    QLabel* commentcontent = new QLabel();
    QLabel* commentowner = new QLabel();
    QLabel* commenttime = new QLabel();
    commenttime->setText(QString::fromStdString(datetime));
    commenttime->setStyleSheet("color:rgb(228, 230, 235);font-size:15px");
    commentowner->setText(QString::fromStdString(username));
    pointerToComments[Layout3->count()] = commentblock;
    this->NumberOfIndexOfComments = Layout3->count();
    commentcontent->setStyleSheet("color:rgb(228, 230, 235);font-size:26px");
    commentcontent->setMargin(20);
    commentowner->setStyleSheet("color:rgb(228, 230, 235);font-size:20px");
    commentcontent->setText(QString::fromStdString(content));
    ui->commenttextbox->setText(NULL);

    //button add comment
    boxlayout->insertWidget(0, commentowner);
    boxlayout->insertWidget(1, commenttime);
    boxlayout->insertWidget(2, commentcontent);


    commentblock->setLayout(boxlayout);

    //push the boxlayout which have the post components to the QVBox of the scrollview

    Layout3->addWidget(commentblock);
}
//timeline********************************************************************************************************


//news Feed methods************************************************************************************************
void MainWindow::createNewsFeedPostBlock(string content,string datetime,string username,int numberoflikes)
{
    //define BoxLayout and each post block
    QVBoxLayout*Layout=qobject_cast<QVBoxLayout*>(ui->scrollareapostsnewsfeed->layout());
    QWidget*postblock=new QWidget();
    pointer=postblock;
    QBoxLayout*boxlayout=new QBoxLayout(QBoxLayout::TopToBottom,postblock);
    postblock->setMaximumHeight(265);
    postblock->setMinimumHeight(265);
    postblock->setStyleSheet("background-color: rgb(48, 49, 52);border-radius:20px;");

    //post owner and post content
    QLabel *postcontent=new QLabel(postblock);
    QLabel *postOwner=new QLabel(postblock);
    QLabel *postTime=new QLabel(postblock);
    QLabel *numOfLikes=new QLabel(postblock);
    numOfLikes->setText("LIKES: "+QString::fromStdString(to_string(numberoflikes)));
    pointerToNewsFeedPosts[Layout->count()]=postblock;
    this->NumberOfIndexOfNewsFeedPosts=Layout->count();
    postTime->setText(QString::fromStdString(datetime));
    postOwner->setText(QString::fromStdString(username));
    postOwner->setStyleSheet("color:rgb(228, 230, 235);font-size:20px");
    postTime->setStyleSheet("color:rgb(228, 230, 235);font-size:15px");
    numOfLikes->setStyleSheet("color:rgb(7, 118, 232);font-size:17px");
    postcontent->setStyleSheet("color:rgb(228, 230, 235);font-size:26px");
    postcontent->setMargin(11);
    postcontent->setText(QString::fromStdString(content));
    ui->posttextnewsfeed->setText(NULL);

    //button add comment

    QPushButton *commentbutton=new QPushButton("Comments",postblock);
    QPushButton *likebutoon=new QPushButton("Like",postblock);
    QPushButton *sharebutton=new QPushButton("Share",postblock);
    boxlayout->insertWidget(0,postOwner);
    boxlayout->insertWidget(1,postTime);
    boxlayout->insertWidget(2,postcontent);
    boxlayout->insertWidget(3,numOfLikes);
    boxlayout->insertWidget(4,likebutoon);
    boxlayout->insertWidget(5,commentbutton);
    boxlayout->insertWidget(6,sharebutton);
    commentbutton->setStyleSheet(buttonstyle);
     likebutoon->setStyleSheet(buttonstyle);
     sharebutton->setStyleSheet(buttonstyle);

    //add the widgets labels into it

       postblock->setLayout(boxlayout);

    //push the boxlayout which have the post components to the QVBox of the scrollview
       Layout->addWidget(postblock);
       // ui->posttextareatimeline_2->setText(QString::fromStdString(to_string(Layout->indexOf(postblock))));
         mButtonToLayoutMap.insert(commentbutton,Layout);
         mButtonToWidgetMap.insert(commentbutton,postblock);
         mButtonToLayoutMap.insert(likebutoon,Layout);
         mButtonToWidgetMap.insert(likebutoon,postblock);
         mButtonToLayoutMap.insert(sharebutton,Layout);
         mButtonToWidgetMap.insert(sharebutton,postblock);


         QObject::connect(
                     commentbutton, &QPushButton::clicked,this, &MainWindow::goToNewsFeedComments
                     );
         QObject::connect(
                     likebutoon, &QPushButton::clicked,this, &MainWindow::AddLikeForPost2
                     );
         QObject::connect(
                     sharebutton, &QPushButton::clicked,this, &MainWindow::sharePostNewsFeed
                     );
}
void MainWindow::sharePostNewsFeed()
{
    QPushButton*button=qobject_cast<QPushButton*>(sender());
    QBoxLayout *layout=mButtonToLayoutMap.value(button);
    QWidget*widg=mButtonToWidgetMap.value(button);
    activepostindex=layout->indexOf(widg);


    User::allusers.at(activeuserindex).addPost(Post(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(activepostindex).getContent()
                                                    ,User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(activepostindex).getUserName()));


    for(int i=0;i<=NumberOfIndexOfTimeLinePosts;i++)
    {
     delete pointerToTimeLinePosts[i];
    }
    NumberOfIndexOfTimeLinePosts=-1;

    for(int k=0;k<User::allusers.at(activeuserindex).getUserTimeLine().getPostsCount();k++)
    {

        createTimeLinePostBlock(User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getContent(),
                                User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getDateTime(),
                                User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getUserName(),
                                User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getLikeCount());

    }


    for(int i=0;i<=NumberOfIndexOfNewsFeedPosts;i++)
    {
     delete pointerToNewsFeedPosts[i];
    }
    NumberOfIndexOfNewsFeedPosts=-1;

    for(int j=0;j<User::allusers.at(activeuserindex).getUserNewsFeed().getPostsCount();j++)
    {

        createNewsFeedPostBlock(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getContent(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getDateTime(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getUserName(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getLikeCount());
    }
}
void MainWindow::onAddPostNewsFeed()
{
    User::allusers.at(activeuserindex).addPost(Post(ui->posttextnewsfeed->text().toStdString(),User::allusers.at(activeuserindex).getName()));

     for(int i=0;i<=NumberOfIndexOfTimeLinePosts;i++)
     {
      delete pointerToTimeLinePosts[i];
     }
     NumberOfIndexOfTimeLinePosts=-1;

     for(int k=0;k<User::allusers.at(activeuserindex).getUserTimeLine().getPostsCount();k++)
     {

         createTimeLinePostBlock(User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getContent(),
                                 User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getDateTime(),
                                 User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getUserName(),
                                 User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getLikeCount());

     }


     for(int i=0;i<=NumberOfIndexOfNewsFeedPosts;i++)
     {
      delete pointerToNewsFeedPosts[i];
     }
     NumberOfIndexOfNewsFeedPosts=-1;

     for(int j=0;j<User::allusers.at(activeuserindex).getUserNewsFeed().getPostsCount();j++)
     {

         createNewsFeedPostBlock(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getContent(),
                                 User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getDateTime(),
                                 User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getUserName(),
                                 User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getLikeCount());
     }

}

void MainWindow::goToNewsFeedComments()
{
    QPushButton*button=qobject_cast<QPushButton*>(sender());
    QBoxLayout *layout=mButtonToLayoutMap.value(button);
    QWidget*widg=mButtonToWidgetMap.value(button);
    activepostindex=layout->indexOf(widg);

    for(int i=0;i<=NumberOfIndexOfComments2;i++)
    {
     delete pointerToComments2[i];
    }
    NumberOfIndexOfComments2=-1;

    for(int i=0;i<User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(activepostindex).getCommentsCounter();i++)
    {
        createCommentBlock2(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(activepostindex).getComments().at(i).getContent(),
                           User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(activepostindex).getComments().at(i).getDateTime(),
                           User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(activepostindex).getComments().at(i).getCommentOwner());

    }
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::AddLikeForPost2()
{
    QPushButton*button=qobject_cast<QPushButton*>(sender());
    QBoxLayout *layout=mButtonToLayoutMap.value(button);
    QWidget*widg=mButtonToWidgetMap.value(button);
    activepostindex=layout->indexOf(widg);
    User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(activepostindex).addLike(User::allusers.at(activeuserindex).getUserId());


    for(int i=0;i<=NumberOfIndexOfTimeLinePosts;i++)
    {
     delete pointerToTimeLinePosts[i];
    }
    NumberOfIndexOfTimeLinePosts=-1;

    for(int k=0;k<User::allusers.at(activeuserindex).getUserTimeLine().getPostsCount();k++)
    {

        createTimeLinePostBlock(User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getContent(),
                                User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getDateTime(),
                                User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getUserName(),
                                User::allusers.at(activeuserindex).getUserTimeLine().getActualPosts(k).getLikeCount());

    }


    for(int i=0;i<=NumberOfIndexOfNewsFeedPosts;i++)
    {
     delete pointerToNewsFeedPosts[i];
    }
    NumberOfIndexOfNewsFeedPosts=-1;

    for(int j=0;j<User::allusers.at(activeuserindex).getUserNewsFeed().getPostsCount();j++)
    {

        createNewsFeedPostBlock(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getContent(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getDateTime(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getUserName(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getLikeCount());
    }
}



void MainWindow::createCommentBlock2(string content, string datetime, string username)
{
    //define BoxLayout and each post block
    QVBoxLayout* Layout3 = qobject_cast<QVBoxLayout*>(ui->scrollareapostscomments_2->layout());
    QWidget* commentblock = new QWidget();
    QBoxLayout* boxlayout = new QBoxLayout(QBoxLayout::TopToBottom, commentblock);
    commentblock->setMaximumHeight(170);
    commentblock->setMinimumHeight(170);
    commentblock->setStyleSheet("background-color: rgb(48, 49, 52);border-radius:18px;");

    //post owner and post content
    QLabel* commentcontent = new QLabel();
    QLabel* commentowner = new QLabel();
    QLabel* commenttime = new QLabel();
    commenttime->setText(QString::fromStdString(datetime));
    commenttime->setStyleSheet("color:rgb(228,230,235);font-size:15px");
    commentowner->setText(QString::fromStdString(username));
    pointerToComments2[Layout3->count()] = commentblock;
    this->NumberOfIndexOfComments2 = Layout3->count();
    commentcontent->setStyleSheet("color:rgb(228,230,235);font-size:26px");
    commentcontent->setMargin(20);
    commentowner->setStyleSheet("color:rgb(228,230,235);font-size:20px");
    commentcontent->setText(QString::fromStdString(content));
    ui->commenttextbox_2->setText(NULL);

    //button add comment
    boxlayout->insertWidget(0, commentowner);
    boxlayout->insertWidget(1, commenttime);
    boxlayout->insertWidget(2, commentcontent);


    commentblock->setLayout(boxlayout);

    //push the boxlayout which have the post components to the QVBox of the scrollview

    Layout3->addWidget(commentblock);
}

void MainWindow::onAddPostCommentNewFeed()
{



     int postId=User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(activepostindex).getPostId();
     Comment c(ui->commenttextbox_2->text().toStdString(),User::allusers.at(activeuserindex).getName());
     User::allusers.at(activeuserindex).addComment(postId,c);
     /**/
    //
    /* int lastcommentindex=User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(activepostindex).getCommentsCounter()-1;
     createCommentBlock2(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(0).getComments().at(lastcommentindex).getContent(),
                        User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(0).getComments().at(lastcommentindex).getDateTime(),
                        User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(0).getComments().at(lastcommentindex).getCommentOwner());*/
     //ui->posttextareatimeline_2->setText(QString::fromStdString(to_string(activepostindex)));
     for(int i=0;i<=NumberOfIndexOfComments2;i++)
          {
           delete pointerToComments2[i];
          }
          NumberOfIndexOfComments2=-1;

     for(int i=0;i<User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(0).getCommentsCounter();i++)
     {
         createCommentBlock2(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(0).getComments().at(i).getContent(),
                            User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(0).getComments().at(i).getDateTime(),
                            User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(0).getComments().at(i).getCommentOwner());
     }

     for(int i=0;i<=NumberOfIndexOfNewsFeedPosts;i++)
     {
      delete pointerToNewsFeedPosts[i];
     }
     NumberOfIndexOfNewsFeedPosts=-1;

     for(int j=0;j<User::allusers.at(activeuserindex).getUserNewsFeed().getPostsCount();j++)
     {

         createNewsFeedPostBlock(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getContent(),
                                 User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getDateTime(),
                                 User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getUserName(),
                                 User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getLikeCount());}
     activepostindex=0;






}
//news Feed methods************************************************************************************************





void MainWindow::createFriendSuggestionBlock(string username)
{
    //define BoxLayout and each post block
    QVBoxLayout*Layout=qobject_cast<QVBoxLayout*>(ui->scrollareasuggestionfriends->layout());
    QWidget*friendblock=new QWidget();
    QHBoxLayout*boxlayout=new QHBoxLayout(friendblock);
    friendblock->setMaximumHeight(80);
    friendblock->setMinimumHeight(80);
    friendblock->setStyleSheet("background-color: rgb(48, 49, 52);border-radius:20px;");
    //post owner and post content
    QLabel *friendname=new QLabel();
    friendname->setStyleSheet("color:rgb(228,230,235);font-size:26px");
    friendname->setMargin(11);
    friendname->setText(QString::fromStdString(username));
    pointerToFriendsSuggestion[Layout->count()]=friendblock;
    this->NumberOfIndexOfFriendsSuggestion=Layout->count();
    //button add comment
    QPushButton *addbutton=new QPushButton("Add");
    boxlayout->addWidget(friendname);
    boxlayout->addWidget(addbutton);
    addbutton->setStyleSheet(buttonstyle);
    addbutton->setMaximumWidth(50);
    addbutton->setMaximumHeight(50);

    //add the widgets labels into it

     friendblock->setLayout(boxlayout);

    //push the boxlayout which have the post components to the QVBox of the scrollview
     mButtonToLayoutMap.insert(addbutton,Layout);
     mButtonToWidgetMap.insert(addbutton,friendblock);
    Layout->addWidget(friendblock);
    connect(addbutton, &QPushButton::clicked,this,&MainWindow::addFromSuggestion);


}
void MainWindow::addFromSuggestion()
{

    QPushButton*button=qobject_cast<QPushButton*>(sender());
    QBoxLayout *layout=mButtonToLayoutMap.value(button);
    QWidget*widg=mButtonToWidgetMap.value(button);
    int suggestionIndex=layout->indexOf(widg);
    User u=User::allusers.at(activeuserindex).getActualUserFromList(suggestionIndex);
    User::allusers.at(activeuserindex).addFriend(u);
    User::allusers.at(activeuserindex).setSuggestions();


    for(int i=0;i<=NumberOfIndexOfFriendsSuggestion;i++)
    {
     delete pointerToFriendsSuggestion[i];
    }
    NumberOfIndexOfFriendsSuggestion=-1;

    for(int i=0;i<User::allusers.at(activeuserindex).suggestions.size();i++)
    {

        createFriendSuggestionBlock(User::allusers.at(activeuserindex).getActualUserFromList(i).getName());
    }


    for(int i=0;i<=NumberOfIndexOfFriendsList;i++)
    {
     delete pointerToFriendsList[i];
    }
    NumberOfIndexOfFriendsList=-1;

    for(int i=0;i<User::allusers.at(activeuserindex).getFriendsCount();i++)
    {

        createFriendListBlock(User::allusers.at(activeuserindex).getFriends().at(i).getName());
    }





    for(int i=0;i<=NumberOfIndexOfNewsFeedPosts;i++)
    {
     delete pointerToNewsFeedPosts[i];
    }
    NumberOfIndexOfNewsFeedPosts=-1;

    for(int j=0;j<User::allusers.at(activeuserindex).getUserNewsFeed().getPostsCount();j++)
    {

        createNewsFeedPostBlock(User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getContent(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getDateTime(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getUserName(),
                                User::allusers.at(activeuserindex).getUserNewsFeed().getActualPosts(j).getLikeCount());
    }
}

void MainWindow::displayFriendsSuggestions()
{

   for(int i=0;i<User::allusers.at(activeuserindex).suggestions.size();i++)
   {

       createFriendSuggestionBlock(User::allusers.at(activeuserindex).getActualUserFromList(i).getName());
   }
}


//****************************************************friendsList**************************************************************
void MainWindow::createFriendListBlock(string username)
{
    //define BoxLayout and each post block
    QVBoxLayout*Layout=qobject_cast<QVBoxLayout*>(ui->scrollareafriendslist->layout());
    QWidget*friendblock=new QWidget();
    QHBoxLayout*boxlayout=new QHBoxLayout(friendblock);
    friendblock->setMaximumHeight(80);
    friendblock->setMinimumHeight(80);
    friendblock->setStyleSheet("background-color: rgb(48, 49, 52);border-radius:20px;");
    //post owner and post content
    QLabel *friendname=new QLabel();
    friendname->setStyleSheet("color:rgb(228, 230, 235);font-size:26px");
    friendname->setMargin(11);
    friendname->setText(QString::fromStdString(username));
    pointerToFriendsList[Layout->count()]=friendblock;
    this->NumberOfIndexOfFriendsList=Layout->count();
    //button add comment
    QPushButton *unfriendbutton=new QPushButton("Un Friend");
        boxlayout->addWidget(friendname);
    boxlayout->addWidget(unfriendbutton);

    unfriendbutton->setStyleSheet("QPushButton {"
                   "background-color: rgb(157, 32, 32);"
                   "border:2px solid rgb(157, 32, 32);"
                   "border-radius:10px;"
                   "color:#fff;" "}"
                   "QPushButton:hover {"
                   "background-color: rgb(138, 18, 18);""}");
    unfriendbutton->setMaximumWidth(70);
    unfriendbutton->setMaximumHeight(70);
    //add the widgets labels into it

     friendblock->setLayout(boxlayout);

    //push the boxlayout which have the post components to the QVBox of the scrollview
    Layout->addWidget(friendblock);


    mButtonToLayoutMap.insert(unfriendbutton,Layout);
    mButtonToWidgetMap.insert(unfriendbutton,friendblock);
   Layout->addWidget(friendblock);
   connect(unfriendbutton, &QPushButton::clicked,this,&MainWindow::unFriend);
}

void MainWindow::unFriend()
{
    QPushButton*button=qobject_cast<QPushButton*>(sender());
    QBoxLayout *layout=mButtonToLayoutMap.value(button);
    QWidget*widg=mButtonToWidgetMap.value(button);
    int deletedFriend=layout->indexOf(widg);
    User::allusers.at(activeuserindex).unFriend(deletedFriend);
    User::allusers.at(activeuserindex).setSuggestions();

    for(int i=0;i<=NumberOfIndexOfFriendsSuggestion;i++)
    {
     delete pointerToFriendsSuggestion[i];
    }
    NumberOfIndexOfFriendsSuggestion=-1;

    for(int i=0;i<User::allusers.at(activeuserindex).suggestions.size();i++)
    {

        createFriendSuggestionBlock(User::allusers.at(activeuserindex).getActualUserFromList(i).getName());
    }


    for(int i=0;i<=NumberOfIndexOfFriendsList;i++)
    {
     delete pointerToFriendsList[i];
    }
    NumberOfIndexOfFriendsList=-1;

    for(int i=0;i<User::allusers.at(activeuserindex).getFriendsCount();i++)
    {

        createFriendListBlock(User::allusers.at(activeuserindex).getFriends().at(i).getName());
    }
}


void MainWindow::displayFriendsList()
{

   for(int i=0;i<User::allusers.at(activeuserindex).getFriendsCount();i++)
   {

       createFriendListBlock(User::allusers.at(activeuserindex).getFriends().at(i).getName());
   }
}
//****************************************************friendsList**************************************************************




void MainWindow::on_logoutbutton_clicked()
{

//go to login page
ui->stackedWidget->setCurrentIndex(0);
 //delete all posts and comments
for(int i=0;i<=NumberOfIndexOfTimeLinePosts;i++)
{
 delete pointerToTimeLinePosts[i];
}
NumberOfIndexOfTimeLinePosts=-1;
for(int i=0;i<=NumberOfIndexOfNewsFeedPosts;i++)
{
 delete pointerToNewsFeedPosts[i];
}
NumberOfIndexOfNewsFeedPosts=-1;



for(int i=0;i<=NumberOfIndexOfFriendsSuggestion;i++)
{
 delete pointerToFriendsSuggestion[i];
}
NumberOfIndexOfFriendsSuggestion=-1;


for(int i=0;i<=NumberOfIndexOfFriendsList;i++)
{
 delete pointerToFriendsList[i];
}
NumberOfIndexOfFriendsList=-1;


for(int i=0;i<=NumberOfIndexOfNewsFeedPosts;i++)
{
 delete pointerToNewsFeedPosts[i];
}
NumberOfIndexOfNewsFeedPosts=-1;

for(int i=0;i<=NumberOfIndexOfComments;i++)
{
 delete pointerToComments[i];
}
NumberOfIndexOfComments=-1;

for(int i=0;i<=NumberOfIndexOfComments2;i++)
{
 delete pointerToComments2[i];
}
NumberOfIndexOfComments2=-1;

//delete the old user data
ui->emailtextsignupform->setText(NULL);
ui->passwordtextsignupform->setText(NULL);
ui->usernametextboxsignupform->setText(NULL);
ui->educationtextboxsignupform->setText(NULL);
ui->birthdatetextboxsignupform->setText(NULL);
ui->worktextboxsignupform->setText(NULL);
ui->liveintextboxsignupform->setText(NULL);
ui->gendertextboxsignupform->setText(NULL);
ui->emailtextlogin->setText(NULL);
ui->passwordtextlogin->setText(NULL);
ui->posttextareatimeline_2->setText(NULL);
ui->posttextnewsfeed->setText(NULL);
ui->commenttextbox->setText(NULL);
ui->usernamedisplaytimeline_2->setText(NULL);
ui->genderdisplaytimeline_2->setText(NULL);
ui->educationdisplaytimeline_2->setText(NULL);
ui->workdisplaytimeline_5->setText(NULL);
ui->liveindisplaytimeline_6->setText(NULL);
ui->birthdaydisplaytimeline_2->setText(NULL);
ui->changeusername->setText(NULL);
ui->changepassword->setText(NULL);
ui->changework->setText(NULL);
ui->changeeducation->setText(NULL);
ui->changelivein->setText(NULL);
}

void MainWindow::on_newsfeedbutton_clicked()
{


     ui->stackedWidget_2->setCurrentIndex(1);
}


void MainWindow::on_backoncommentpage_clicked()
{
    for(int i=0;i<=NumberOfIndexOfComments;i++)
    {
     delete pointerToComments[i];
    }
    NumberOfIndexOfComments=-1;
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_loginbuttonloginwidget_clicked()
{
    for(int i=0;i<User::allusers.size();i++)
    {
        if(ui->emailtextlogin->text().toStdString()==User::allusers.at(i).getEmail()&&ui->passwordtextlogin->text().toStdString()==User::allusers.at(i).getPassword())
        {
            activeuserindex=i;




            ui->usernamedisplaytimeline_2->setText(QString::fromStdString( User::allusers.at(activeuserindex).getName()));
            ui->educationdisplaytimeline_2->setText(QString::fromStdString( User::allusers.at(activeuserindex).getEducation()));
            ui->birthdaydisplaytimeline_2->setText(QString::fromStdString( User::allusers.at(activeuserindex).getBirhtdate()));
            ui->workdisplaytimeline_5->setText(QString::fromStdString( User::allusers.at(activeuserindex).getWork()));
            ui->liveindisplaytimeline_6->setText(QString::fromStdString( User::allusers.at(activeuserindex).getLives_in()));
            ui->genderdisplaytimeline_2->setText(QString::fromStdString( User::allusers.at(activeuserindex).getGender()));





                 User::allusers.at(activeuserindex).setSuggestions();
                 User::allusers.at(activeuserindex).updateNewsFeed();
                 qInfo("%d",User::allusers.at(activeuserindex).getUserNewsFeed().getPostsCount());
                 ui->stackedWidget->setCurrentIndex(2);
                 User::allusers.at(activeuserindex).updateNewsFeed();
                 for(int j=0;j<User::allusers.at(i).getUserNewsFeed().getPostsCount();j++)
                 {

                     createNewsFeedPostBlock(User::allusers.at(i).getUserNewsFeed().getActualPosts(j).getContent(),
                                             User::allusers.at(i).getUserNewsFeed().getActualPosts(j).getDateTime(),
                                             User::allusers.at(i).getUserNewsFeed().getActualPosts(j).getUserName(),
                                             User::allusers.at(i).getUserNewsFeed().getActualPosts(j).getLikeCount());
                 }
                 for(int k=0;k<User::allusers.at(i).getUserTimeLine().getPostsCount();k++)
                 {

                     createTimeLinePostBlock(User::allusers.at(i).getUserTimeLine().getActualPosts(k).getContent(),
                                             User::allusers.at(i).getUserTimeLine().getActualPosts(k).getDateTime(),
                                             User::allusers.at(i).getUserTimeLine().getActualPosts(k).getUserName(),
                                             User::allusers.at(i).getUserTimeLine().getActualPosts(k).getLikeCount());

                 }

                 displayFriendsSuggestions();
                 displayFriendsList();
                 break;
        }
    }
}



void MainWindow::on_friendsbutton_clicked()
{

    ui->stackedWidget_2->setCurrentIndex(2);
}

void MainWindow::on_backoncommentpage_2_clicked()
{
    for(int i=0;i<=NumberOfIndexOfComments2;i++)
    {
     delete pointerToComments2[i];
    }
    NumberOfIndexOfComments2=-1;
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_settingbutton_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(3);
}


void MainWindow::on_changenamebutton_clicked()
{
    User::allusers.at(activeuserindex).setName(ui->changeusername->text().toStdString());
    ui->usernamedisplaytimeline_2->setText(ui->changeusername->text());
    ui->changeusername->setText(NULL);

}


void MainWindow::on_changepasswordbutton_clicked()
{
    User::allusers.at(activeuserindex).setPassword(ui->changepassword->text().toStdString());

    ui->changepassword->setText(NULL);

}


void MainWindow::on_changeworkbutton_clicked()
{
    User::allusers.at(activeuserindex).setWork(ui->changework->text().toStdString());
    ui->workdisplaytimeline_5->setText(ui->changework->text());

    ui->changework->setText(NULL);

}


void MainWindow::on_changeeducationbutton_clicked()
{
    User::allusers.at(activeuserindex).setEducation(ui->changeeducation->text().toStdString());
    ui->educationdisplaytimeline_2->setText(ui->changeeducation->text());
    ui->changeeducation->setText(NULL);
}


void MainWindow::on_changeliveinbutton_clicked()
{
    User::allusers.at(activeuserindex).setLievIn(ui->changelivein->text().toStdString());
    ui->liveindisplaytimeline_6->setText(ui->changelivein->text());
    ui->changelivein->setText(NULL);

}

