#include "TimeLine.h"
#include"User.h"
TimeLine::TimeLine()
{
}

//void TimeLine::addPost(Post &post)
//{
//    this->Posts.push_back(post);
//}

int TimeLine::getPostsCount()
{
    return myPosts.size();
}

void TimeLine::addPost(int index)
{
    myPosts.push_back(index);
    bubbleSort();
}

vector<int> &TimeLine::getPost()
{
    return myPosts;
}

Post& TimeLine::getActualPosts(int index)
{

    for (int i = 0; i < User::allPosts.size(); i++)
    {
        if (User::allPosts.at(i).getPostId() == this->getPost().at(index))
        {
            return User::allPosts.at(i);
        }
    }
}

void TimeLine::swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void TimeLine::bubbleSort()
{
    int i, j;
    for (i = 0; i < getPostsCount() - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < getPostsCount() - i - 1; j++)
            if (myPosts[j] < myPosts[j + 1])
                swap(&myPosts[j], &myPosts[j + 1]);
}

//vector<Post>&TimeLine::getTimeLinePosts()
//{
//    return this->myPosts;
//}

