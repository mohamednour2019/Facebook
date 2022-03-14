#ifndef TIMELINE_H
#define TIMELINE_H


#pragma once
#include <iostream>
#include <string>
#include"Post.h"
#include<vector>
using namespace std;
class TimeLine
{
private:
    vector<int> myPosts;
public:
    TimeLine();
    //void addPost(Post &post);
    int  getPostsCount();
    void addPost(int);
    vector<int>&getPost();
    Post& getActualPosts(int);
    void swap(int* xp, int* yp);
    void bubbleSort();
    //vector<Post>&getTimeLinePosts();

};







#endif // TIMELINE_H
