#ifndef NEWSFEED_H
#define NEWSFEED_H


#pragma once
#include<iostream>
#include<vector>
#include"Post.h"
using namespace std;
class NewsFeed
{
private:
    vector<int> Posts;
public:
    NewsFeed();
    void addPost(int);
    vector<int> &getPosts();
    int getPostsCount();
    void swap(int* xp, int* yp);
    void bubbleSort();
    void setPostId(int id, int index);
    Post& getActualPosts(int);
    void deleteOldId(int);
    //void movePostToTop(Post& post);
    //void editPost(Post& post, string newcontent);
    //void removePost(int index);


};








#endif // NEWSFEED_H
