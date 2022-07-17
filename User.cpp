//These are the header files of the codes that contain the classes.
#include "User.h"
using namespace std;
int User::uCount = 0; //The counter that increments every time an object is called.

User::User(){
    name = "";//initializing the user name to an empty string.
    Uid=0;
    age = 0;
    email = "";
    password = "";
} //this is not the default constructor but this is a constructor that is used to take in authors from the book class.

//this is the default constructor with a dummy parameter so that if the user author is called in the header of book class it doesn't cause
//an error with the counter and id of the user class.
User::User(int x) {
    uCount ++; //The u
    Uid = uCount; //The id will be increased by 1 with every new user.
    name = "";//initializing the user name to an empty string.
    age = 0;
    email = "";
    password = "";
}

User::User(string Name, int Aage, string Mail, string pwd){//Parameterized constructor to be used as the default in the main code.
    name=Name;
    age=Aage;
    email=Mail;
    password=pwd;
    uCount ++;
    Uid = uCount;
}

User::User(const User&obj){//Copy constructor to in initialize the user by using obj.user.
    name = obj.name;
    age = obj.age;
    Uid = obj.Uid;
    password = obj.password;
    email = obj.email;

}

bool User::operator==(const User &user)//An if condition that checks if the User from the class is similar to the obj user
{
    if (name == user.name && age == user.age && Uid == user.Uid && email == user.email)
        return true;
    else
        return false;
}

void User::setName(string Name){//Mutator which will set "Name" to "name"
    name = Name;
}

string User::getName() const{//Accessor that will read the "name" variable from the private members from the class, and return it
    return name;
}

void User::setPassword(string pwd){//Mutator which will set "pwd" to "password"
    password = pwd;
}

string User::getPassword(){//Accessor that will read the "password" variable from the private members from the class, and return it
    return password;
}

void User::setEmail(string Mail){//Mutator which will set "Mail" to "email"
    email=Mail;
}

string User::getEmail(){//Accessor that will read the "email" variable from the private members from the class, and return it
    return email;
}

void User::setAge(int Aage){//Mutator which will set "Aage" to "age"
    age=Aage;
}

int User::getAge(){//Accessor that will read the "age" variable from the private members from the class, and return it
    return age;
}

void User::setId(int Id){//Mutator which will set "Id" to "id"
    Uid = Id;
}

int User::getId(){//Accessor that will read the "id" variable from the private members from the class, and return it
    return Uid;
}

// the next function is used to overload the output operator so that we can easily print out the whole object
// without specifying a member variable of that object.
ostream &operator<<(ostream &output, const User &user ){
    output << endl << "Name: " << user.name<<endl
    << "Age: " << user.age<<endl
    << "Id: " << user.Uid<<endl
    << "E-mail: " << user.email<<endl;
    return output;
}

// the next function is used to overload the input operator so that we can easily input all the data of the object
// without specifying a certain member variable of that object.
istream &operator>>( istream &input, User &obj ){
    input >> obj.name >> obj.age >> obj.email >> obj.password;
    return input;
}
