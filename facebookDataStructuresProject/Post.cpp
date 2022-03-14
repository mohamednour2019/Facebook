#pragma warning(disable: 4996)
#include "Post.h"
int Post::idgenerator = 0;

Post::Post(string content, string username)
{
    this->cntlikes = 0;
    this->idgenerator++;
    this->postId = idgenerator;
    this->postTime = time(0);
    this->content = content;
    this->userName = username;
    this->triger = false;
}

Post::Post()
{
}

void Post::addLike(int likeid)
{
    bool found = 0;
      for (int i = 0; i < likes.size(); i++)
      {
          if (likeid == likes.at(i))
          {
              likes.erase(likes.begin()+i);
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

void Post::SetPostid()
{
    this->postId = ++idgenerator;
}
int Post::getOldId()
{
    return this->oldId;
}

void Post::writeComment(Comment& comment)
{
    oldId = this->postId;
    this->postId = ++idgenerator;
    comments.push_back(comment);
}

string Post::getDateTime()
{
    return (ctime(&postTime));
}

bool Post::getPostTriger()
{
    return  triger;
}

void Post::setTriger(bool val)
{
    triger = val;
}

int Post::getPostId()
{
    return this->postId;
}

string Post::getContent()
{
    return this->content;
}

int Post::getLikeCount()
{
    return  cntlikes;
}

string Post::getUserName()
{
    return this->userName;
}

void Post::displayComments()
{
    for (int i = 0; i < comments.size(); i++)
    {
        cout << comments.at(i).getContent() << endl;
    }
}

vector<Comment>& Post::getComments()
{
    return this->comments;
}



int Post::getCommentsCounter()
{
    return this->comments.size();
}

bool Post::operator<(const Post& post1)
{
    return this->postId < post1.postId;
}

void Post::editpost(string content)
{
    this->content = content;
}
