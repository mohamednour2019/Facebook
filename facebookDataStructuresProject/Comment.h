#ifndef COMMENT_H
#define COMMENT_H


#pragma once
#include<iostream>
#include<ctime>
#include<vector>
using namespace std;
class Comment {
private:
    string userName;
    time_t commentTime;
    string content;
    static int cntlikes;
    vector<int> likes;

public:
    Comment(string content, string username);
    void addLike(int);
    string getDateTime();
    string getContent();
    string getCommentOwner();
    int getCountLike();
    vector<int>& getLikes();

};



#endif // COMMENT_H
