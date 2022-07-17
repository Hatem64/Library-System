#ifndef BOOKLIST_H_INCLUDED
#define BOOKLIST_H_INCLUDED
#include "Book.h"

class BookList{
private:
    Book* books;
    int capacity;
    static int objcounter;
public:
    BookList(const BookList& anotherList);
    BookList(int capacity);
    void addBook(Book book);
    Book& searchBook(string name);
    Book& searchBook(int id);
    void deleteBook(int id); //delete a book
    Book getTheHighestRatedBook();
    Book* getBooksForUser(User); // get all books of this author
    Book& operator[](int position);
    friend ostream &operator<<( ostream &output, BookList &booklist ); //to display all books
    ~BookList();
};

#endif // BOOKLIST_H_INCLUDED
