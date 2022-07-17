#ifndef USERLIST_H_INCLUDED
#define USERLIST_H_INCLUDED
#include "User.h"

class UserList
{
 private:
    User* users;
    int capacity;
    static int objcounter;
 public:
    UserList(int capacity);
    void addUser(User user); // at the end of the array.
    User& searchUser(string name);
    User& searchUser(int id);
    void deleteUser(int id);
    friend ostream &operator<<( ostream &output, UserList &userList );
    ~UserList();

};




#endif // USERLIST_H_INCLUDED
