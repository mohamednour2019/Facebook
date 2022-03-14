#include "NewsFeed.h"
#include"Post.h"
#include"User.h"
#include<iostream>
using namespace std;

NewsFeed::NewsFeed()
{
}

void NewsFeed::addPost(int index)
{

    Posts.push_back(index);
    bubbleSort();
}

vector<int> &NewsFeed::getPosts()
{
    bubbleSort();
    return Posts;
}

int NewsFeed::getPostsCount()
{
    return Posts.size();
}

void NewsFeed::swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void NewsFeed::bubbleSort()
{
    int i, j;
    for (i = 0; i < getPostsCount() - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < getPostsCount() - i - 1; j++)
            if (Posts[j] < Posts[j + 1])
                swap(&Posts[j], &Posts[j + 1]);
}

void NewsFeed::setPostId(int id,int index)
{
    this->Posts.at(index) = id;
}

Post& NewsFeed::getActualPosts(int index)
{
    bubbleSort();
    for (int i = 0; i < User::allPosts.size(); i++)
    {
        if (User::allPosts.at(i).getPostId() == this->getPosts().at(index))
        {
            return User::allPosts.at(i);
        }
    }
}

void NewsFeed::deleteOldId(int oldId)
{
    for(int i=0;i<Posts.size();i++)
    {
        if(Posts.at(i)==oldId)
        {
            Posts.erase(Posts.begin()+i);
        }
    }
}


//void NewsFeed::addPost(Post &post)
//{
//    this->Posts.push_back(post);
//}

//void NewsFeed::removePost(int postindex)
//{
//    Posts.erase(Posts.begin()+postindex);
//}

//void NewsFeed::editPost(Post& post, string newcontent)
//{
//    post.editpost(newcontent);
//    post.SetPostid();
//}



/*void NewsFeed::movePostToTop(Post& post)
{
    post.SetPostid();
}*/




