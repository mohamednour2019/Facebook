#include "User.h"
int User::idgenerator = 0;
vector<Post> User::allPosts;
vector<User> User::allusers;

User::User()
{
    this->idgenerator += 1;
    this->userId = idgenerator;
}

User::User(string name, string email, string password, string gender, string birthdate, string workin, string education, string lives_in)
{
    this->idgenerator += 1;
    this->userId = idgenerator;
    this->name = name;
    this->email = email;
    this->password = password;
    this->gender = gender;
    this->birthdate = birthdate;
    this->lives_in = lives_in;
    this->work = workin;
    this->education = education;

    this->userNewsFeed = NewsFeed();
    this->userTimeLine = TimeLine();
    setSuggestions();
}

void User::addPost(Post post)
{
    allPosts.push_back(post);
    this->userTimeLine.addPost(post.getPostId());
    this->userNewsFeed.addPost(post.getPostId());

}

void User::displayTimeline()
{
    for (int i = userTimeLine.getPostsCount() - 1; i >= 0; i--)
    {
        for (int j = 0; j < allPosts.size(); j++)
        {
            if (userTimeLine.getPost().at(i) == allPosts.at(j).getPostId())
            {
                cout << "User Name: " << allPosts.at(j).getUserName() << endl;
                cout << "Date: " << allPosts.at(j).getDateTime() << endl;
                cout << "ID: " << allPosts.at(j).getPostId() << endl;
                cout << allPosts.at(j).getContent() << endl;
                cout << "Like: " << allPosts.at(j).getLikeCount() << endl;
                cout << "----------------------------------------------------" << endl;
            }
        }
    }
}

void User::displayNewsfeed()
{
    for (int i = 0; i < userNewsFeed.getPostsCount(); i++)
    {
        for (int j = 0; j < allPosts.size(); j++)
        {
            if (userNewsFeed.getPosts().at(i) == allPosts.at(j).getPostId())
            {
                cout << "User Name: " << allPosts.at(j).getUserName() << endl;
                cout << "Date: " << allPosts.at(j).getDateTime() << endl;
                cout << "ID: " << allPosts.at(j).getPostId() << endl;
                cout << allPosts.at(j).getContent() << endl;
                cout << "Like: " << allPosts.at(j).getLikeCount() << endl;
                cout << "----------------------------------------------------" << endl;
            }
        }
    }
}



void User::displayComments(int postId)
{
    for (int i = 0; i < allPosts.size(); i++)
    {
        if (postId == allPosts.at(i).getPostId())
        {
            allPosts.at(i).displayComments();
        }
    }

}





void User::addComment(int idPost, Comment& comment)
{
    int index;
    for (int i = 0; i < allPosts.size(); i++)
    {

        if (idPost == allPosts.at(i).getPostId()) {
            allPosts.at(i).writeComment(comment);
            break;
        }
    }

    for (int i = 0; i < allusers.size(); i++)
    {

        for (int j = 0; j < allusers.at(i).getUserNewsFeed().getPostsCount(); j++)
        {
            for(int k=0;k<allPosts.size();k++)
            {

                if (allusers.at(i).getUserNewsFeed().getPosts().at(j) == allPosts.at(k).getOldId())
                {
                    allusers.at(i).getUserNewsFeed().getPosts().erase(allusers.at(i).getUserNewsFeed().getPosts().begin() + j);
                    allusers.at(i).getUserNewsFeed().getPosts().push_back(allPosts.at(k).getPostId());

                }
            }
        }

        for (int l = 0; l < allusers.at(i).getUserTimeLine().getPostsCount(); l++)
        {
            for (int m = 0; m < allPosts.size(); m++)
            {
                if (allusers.at(i).getUserTimeLine().getPost().at(l) == allPosts.at(m).getOldId())
                {
                    allusers.at(i).getUserTimeLine().getPost().at(l)= allPosts.at(m).getPostId();
                }
            }
        }
}
}




void User::addLike(int idPost)
{
    for (int i = 0; i < allPosts.size(); i++)
    {
        if (idPost == allPosts.at(i).getPostId()) {
            allPosts.at(i).addLike(this->userId);
        }
    }
}


void User::setName(string name)
{
    this->name = name;
}

void User::setGender(string gender)
{
    this->gender = gender;
}

void User::setBirthdate(string birthdate)
{
    this->birthdate = birthdate;
}

void User::setWork(string newWork)
{
    this->work = newWork;
}

void User::setEducation(string newEdu)
{
    this->education = newEdu;
}

void User::setPassword(string password)
{
    this->password=password;
}

void User::setLievIn(string newplace)
{
    this->lives_in=newplace;
}

string User::getName()
{
    return this->name;
}

string User::getGender()
{
    return this->gender;
}

string User::getBirhtdate()
{
    return this->birthdate;
}

string User::getWork()
{
    return this->work;
}

string User::getEducation()
{
    return this->education;
}

string User::getLives_in()
{
    return this->lives_in;
}

NewsFeed& User::getUserNewsFeed()
{
    updateNewsFeed();
    return this->userNewsFeed;
}

TimeLine& User::getUserTimeLine()
{
    return this->userTimeLine;
}

vector<User> User::getFriends()
{
    return friends;
}


int User::getUserId()
{
    return userId;
}

int User::getFriendsCount()
{
    return friends.size();
}

string User::getEmail()
{
    return this->email;
}

string User::getPassword()
{
    return this->password;
}
void User::addFriend(User newfriend)
{
    friends.push_back(newfriend);
       for (int i = 0; i < newfriend.getUserTimeLine().getPostsCount(); i++) {
           this->userNewsFeed.addPost(newfriend.getUserTimeLine().getPost().at(i));
       }
       for(int i=0;i<suggestions.size();i++)
       {
           if(newfriend.getUserId()==suggestions.at(i).getUserId())
           {
               suggestions.erase(suggestions.begin()+i);
               break;
           }
       }
    setSuggestions();
}

void User::Register()
{
    string name, email, password, gender, birthdate, lives_in;
    cout << "Enter: (name - email - password - gender - birthdate - lives_in)" << endl;
    cin >> name >> email >> password >> gender >> birthdate >> lives_in;
    this->name = name;
    this->email = email;
    this->password = password;
    this->gender = gender;
    this->birthdate = birthdate;
    this->lives_in = lives_in;
}

//ostream& operator<<(ostream& os, const User& obj)
//{
//    os << obj.name;
//    return os;
//}

void User::swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void User::setSuggestions()
{
    suggestions.clear();
    for(int i=0;i<allusers.size();i++)
    {
        bool notFriend=true;
        for(int j=0;j<friends.size();j++)
        {
            if(friends.at(j).getUserId()==allusers.at(i).getUserId())
            {
                notFriend=false;
                break;
            }
        }
        if(notFriend==true)
        {
            suggestions.push_back(allusers.at(i));
        }
    }
    for(int i=0;i<suggestions.size();i++)
    {
        if(this->getUserId()==suggestions.at(i).getUserId())
        {
            suggestions.erase(suggestions.begin()+i);
            break;
        }
    }
}


User User::getActualUserFromList(int index)
{
    return suggestions.at(index);
}

void User::unFriend(int index)
{
    friends.erase(friends.begin()+index);
}


/*void User::updateNewsFeed() {
    for (int i = 0; i < this->friends.size(); i++) {
        for (int j = 0; j < friends.at(i).getUserTimeLine().getPostsCount(); j++) {
            bool NewPost = true;
            for (int k = 0; k < this->userNewsFeed.getPostsCount(); k++) {
                if (this->userNewsFeed.getPosts().at(k) == friends.at(i).getUserTimeLine().getPost().at(j)) {
                    NewPost = false;
                    break;
                }
            }
            if (NewPost==true) {
                this->userNewsFeed.addPost(friends.at(i).getUserTimeLine().getPost().at(j));
            }
        }
    }
}*/


void User::updateNewsFeed() {
    for (int i = 0; i < this->friends.size(); i++) {
        for (int j = 0; j < allusers.at(this->friends.at(i).getUserId()-1).userTimeLine.getPostsCount(); j++) {
            bool flag = false;
            for (int k = 0; k < this->userNewsFeed.getPostsCount(); k++) {
                if (this->userNewsFeed.getPosts().at(k) == allusers.at(this->friends.at(i).getUserId()-1).userTimeLine.getPost().at(j)) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                this->userNewsFeed.addPost(allusers.at(this->friends.at(i).getUserId()-1).userTimeLine.getPost().at(j));
            }
        }
    }
}


