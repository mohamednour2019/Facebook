#ifndef POST_H
#define POST_H


#pragma once
#include<iostream>
#include <ctime>
#include"Comment.h"
using namespace std;
class Post
{
private:

    int postId;
    static int idgenerator;
    string userName;
    string content;
    time_t postTime;
    bool triger;
    vector<Comment> comments;
    int cntlikes;
    int oldId;
    vector<int> likes;

public:
    Post(string content, string username);
    Post();
    void writeComment(Comment&);
    void addLike(int likeid);
    void editpost(string);
    void SetPostid();
    int getCommentsCounter();
    bool operator< (const Post& post1);
    int getOldId();
    string getDateTime();
    bool getPostTriger();
    void setTriger(bool val);
    int getPostId();
    string getContent();
    int getLikeCount();
    string getUserName();
    void displayComments();
    vector<Comment>& getComments();


};
#endif // POST_H
