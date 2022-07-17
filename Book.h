#ifndef BOOK_H
#define BOOK_H
using namespace std;
#include <iostream>
#include "User.h"
class Book
{
private://Class' declarations or attributes.
    string title;
    string isbn;
    int rCount{0}; //we initialized the rCount(number of ratings on a certain book) to 0.
    int Bid;
    string category;
    double averageRating{0},rSum{0}; //we initialized the average rating and the rSum(sum of ratings on a certain book) to 0.
    User author;
public://Class' methods.
    static int bCount;
    Book();
    Book(string Title, string Isbn, string cat);//Parameterized  constructor.
    Book(const Book& obj);
    void setTitle(string Title);
    string getTitle();
    void setISBN(string ISBN);
    string getISBN();
    void setId(int Id);
    int getId();
    void setCategory(string cat);
    string getCategory();
    void setAuthor(User user);
    User getAuthor();
    void rateBook(int rat);
    double getRate();
    bool operator==(const Book& bk);
    friend ostream &operator<<(ostream &output, const Book &bk );
    friend istream &operator>>( istream &input, Book &bk );
    friend class BookList;

};


#endif // BOOK_H
