#include<iostream>
#include<string.h>
#include "UserList.h"
#include "BookList.h"
using namespace std;

int main()
{
    cout<<"\nNow, the UserList Test will begin..."<<endl<<endl;

    UserList userlist(3);
    User user1("Ahmed",20,"ahmedhatem@yahoo.com","123456"),user2("Kareem",20,"kareemmostafa@yahoo.com","1234qwer"),user3("Amr",20,"amrawad@yahoo.com","1234zxca");
    userlist.addUser(user1);
    userlist.addUser(user2);
    userlist.addUser(user3);
    cout<<userlist;
    string name;
    cout<<"Please enter the name of the user you want to search for!"<<endl;
    cin>>name;
    cout<<userlist.searchUser(name);
    int id;
    cout<<"\nPlease enter the ID of the name you want to search for!"<<endl;
    cin>>id;
    cout<<userlist.searchUser(id);
    cout<<"\nPlease enter the ID of the name you want to Delete!"<<endl;
    cin>>id;
    userlist.deleteUser(id);
    cout<<endl<<userlist;


    cout<<"========================================================";


    cout << "\n\nNow, the BookList test will begin...\n" << endl;
    Book book1("Mathematics","1234","Action");
    Book book2("Programming","2345","Horror");
    Book book3("Network","3456","Comedy");
    int x;
    cout << "\nPlease enter the rating of the first book!"<<endl;
    cin >> x;
    book1.rateBook(x);
    cout<< "\nPlease enter the rating of the second book!"<<endl;
    cin >> x;
    book2.rateBook(x);
    cout<< "\nPlease enter the rating of the third book!"<<endl;
    cin >> x;
    book3.rateBook(x);
    BookList newBooks(3);
    newBooks.addBook(book1);
    newBooks.addBook(book2);
    newBooks.addBook(book3);
    cout<< newBooks;
    cout << "\nwe will print the highest rated book" << endl;
    cout << newBooks.getTheHighestRatedBook() << endl;
    cout << "\nPlease enter the name of the book you want to search for"<< endl;
    cin>>name;
    cout << newBooks.searchBook(name);
    cout << "\nPlease enter the ID of the book you want to search for"<< endl;
    cin>>id;
    cout << newBooks.searchBook(id)<< endl;
    cout << "\nwe will use subscript operator to access and print book2 (newBooks[1])" << endl;
    cout << newBooks[1] << endl;
    cout<<"\nPlease enter the ID of the Book you want to Delete!"<<endl;
    cin>>id;
    newBooks.deleteBook(id);
    cout << newBooks;
}
