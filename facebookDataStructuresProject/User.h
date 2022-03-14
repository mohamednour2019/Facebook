#ifndef USER_H
#pragma once
#include <iostream>
#include "NewsFeed.h"
#include "TimeLine.h"
#include "Post.h"
#include <vector>
#include<QDebug>
using namespace std;
class User
{
private:
    int userId;
    static int idgenerator;
    string name;
    string email;
    string password;
    string gender;
    string birthdate;
    string work;
    int index;
    string education;
    string lives_in;
    TimeLine userTimeLine;
    NewsFeed userNewsFeed;
    vector<User>friends;
    vector<int>followers;

public:
    static vector <User>allusers;
    static vector<Post>allPosts;
    vector<User>suggestions;
    User();
    User(string name, string email, string password, string gender, string birthdate, string workin, string education, string lives_in);
    void addPost(Post post);
    void displayTimeline();
    void displayNewsfeed();
    void displayComments(int);
    void addComment(int idPost, Comment& comment);
    void addLike(int idPost);
    void bubbleSort();
    void swap(int* xp, int* yp);
    void setSuggestions();
    User getActualUserFromList(int index);
    void unFriend(int);





















    //friend ostream& operator<<(ostream& os, const User& obj);//operator overloading
    void setName(string name);
    void setGender(string gender);
    void setBirthdate(string birthdate);
    void setWork(string newWork);
    void setEducation(string newEdu);
    void setPassword(string password);
    void setLievIn(string newplace);
    string getEmail();
    string getPassword();
    string getName();
    string getGender();
    string getWork();
    string getEducation();
    string getLives_in();
    string getBirhtdate();
    NewsFeed& getUserNewsFeed();
    TimeLine& getUserTimeLine();
    vector<User>getFriends();
    int getUserId();
    int getFriendsCount();
    void addFriend(User newfriend);
    void updateNewsFeed();
    void Register();
    bool Login();

};





#endif // USER_H
