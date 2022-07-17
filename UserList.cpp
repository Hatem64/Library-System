#include <iomanip>
#include "UserList.h"

using namespace std;

int UserList::objcounter = 0;
UserList::UserList (int cap)
{
	capacity = cap;
    users = new User[cap];
}
void UserList::addUser(User user)
{
  for(int i=objcounter;i<capacity;i++)
  {
    users[i]=user;
    objcounter++;
    break;
  }
}
User& UserList::searchUser(string name)
{
    for(int i=0; i<capacity;i++)
    {
        if(users[i].name==name)
        {
            cout<<"\n============User "<<i+1<<" info============";
            return users[i];
        }
    }

}

User& UserList::searchUser(int id)
{
	for(int i=0; i<capacity;i++)
  {
    if(users[i].Uid==id)
    {
        cout<<"\n============User "<<i+1<<" info============";
    	return users[i];
    }

  }

}
void UserList::deleteUser(int id)
{
    int index = 0;
    for(int i=0; i<capacity;i++)
    {
        if(users[i].Uid==id)
        {
            index = i;
            break;
        }
  }
  capacity --;
  for (int i=index;i<capacity;i++)
  {
  	users[i] = users[i+1];
  }
  objcounter--;
}

ostream &operator<<( ostream &output, UserList &userList )
{
	for(int i=0;i<userList.capacity;i++)
  {
    output<<"============User "<<i+1<<" info============";
  	output<<userList.users[i]<<endl;
  }
}

UserList::~UserList()
{
	delete [] users;
}
