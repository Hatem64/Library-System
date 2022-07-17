#ifndef USER_H
#define USER_H
#include<iostream>

using namespace std;

class User
{
private://Class' declarations or attributes.
    string name;
    int age;
    int Uid;
    string password;
    string email;

public://Class' methods.
    static int uCount;
    User();
    User(int x);
    User(string Name, int Aage, string Mail, string pwd);//Parameterized  constructor.
    User(const User&obj);
    bool operator==(const User& user);
    void setName(string Name);
    string getName() const;
    void setPassword(string pwd);
    string getPassword();
    void setEmail(string Mail);
    string getEmail();
    void setAge(int Aage);
    int getAge();
    void setId(int Id);
    int getId();
    //bool operator==(const User &user);
    friend ostream &operator<<(ostream &output, const User &user );
    friend istream &operator>>( istream &input, User &obj );
    friend class UserList;
};

#endif // USER_H
