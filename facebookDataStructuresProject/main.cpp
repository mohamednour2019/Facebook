#include "mainwindow.h"
#include"User.h"
#include <QApplication>
void generatorUsers() {
    User::allusers.push_back(User("Mohammed", "m", "123", "male", "7/8/2001", "photographer","stuent","Egypt"));
    User::allusers.at(0).addPost(Post("hellow", "Mohammed"));
    User::allusers.at(0).addPost(Post("he",  "Mohammed"));
    User::allusers.at(0).addPost(Post("she", "Mohammed"));
    User::allusers.at(0).addPost(Post("low", "Mohammed"));
    User::allusers.push_back(User("Ahmed", "a", "123", "male", "9/2/2000","engineer","computer_science", "Egypt"));
    User::allusers.at(1).addPost(Post("AAAAAAA", "Ahmed"));
    User::allusers.at(1).addPost(Post("ZZZZZZZ", "Ahmed"));
    User::allusers.at(1).addPost(Post("YYYYYY", "Ahmed"));
    User::allusers.at(1).addPost(Post("UUUUUU", "Ahmed"));
    User::allusers.push_back(User("Ali", "b", "123", "male", "5/6/2001","teacher","unversity", "Egypt"));
    User::allusers.at(2).addPost(Post("Hello", "Ali"));
    User::allusers.at(2).addPost(Post("HI_Dear", "Ali"));
    User::allusers.at(2).addPost(Post("thank_you", "Ali"));
    User::allusers.push_back(User("Salah", "d", "123", "male", "1/1/2000","prof","Ain_Shams_university", "Egypt"));
    User::allusers.at(3).addPost(Post("Hello_world", "Salah"));
    User::allusers.at(3).addPost(Post("Happy_new_year", "Salah"));
    User::allusers.at(3).addPost(Post("can_you_see_me?", "Salah"));
    User::allusers.at(3).addFriend(User::allusers.at(2));
    User::allusers.at(3).addFriend(User::allusers.at(0));
    User::allusers.push_back(User("Husin", "e", "123", "male", "15/5/2000","doctor","cairo_university", "Egypt"));
    User::allusers.push_back(User("Reham", "f", "123", "female", "12/5/2000","engineer","cairo_university", "Egypt"));
    User::allusers.push_back(User("Refat", "g", "123", "male", "6/8/2000","programer","cairo_university", "Egypt"));
    User::allusers.push_back(User("Nour", "h", "123", "female", "2/2/2000","sales","cairo_university", "Egypt"));
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    generatorUsers();
    MainWindow w;
    w.show();
    return a.exec();
}
