#pragma warning(disable: 4996)
#include "Comment.h"
int Comment::cntlikes = 0;

Comment::Comment(string content, string username)
{

    this->commentTime = time(0);
    this->content = content;
    this->userName = username;
}


void Comment::addLike(int likeid)
{
    bool found = 0;
    vector<int>::iterator it;
    int i = 0;
    for (it = likes.begin(); it != likes.end(); it++, i++)
    {
        if (likeid == likes.at(i))
        {
            likes.erase(it);
            found = true;
            cntlikes--;
        }
    }
    if (found == false)
    {
        likes.push_back(likeid);
        cntlikes++;
    }
}

string Comment::getDateTime()
{
    return (ctime(&commentTime));
}

string Comment::getContent()
{
    return content;
}

string Comment::getCommentOwner()
{
    return this->userName;
}

int Comment::getCountLike()
{
    return this->cntlikes;
}

vector<int>& Comment::getLikes()
{
    return this->likes;
}


