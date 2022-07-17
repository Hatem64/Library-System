//These are the header files of the codes that contain the classes.
#include "Book.h"
#include <iomanip>
#include <stdlib.h>
using namespace std;

int Book::bCount = 0; // bCount is the number of books used and rCount is the number of ratings recieved.

Book::Book(){
    bCount++;
    Bid = bCount;
}
Book::Book(string Title, string Isbn, string cat){//Constructor that takes title, isbn, and category as parameters
    title = Title;                                //and assign each parameter to its variable in the header file
    isbn = Isbn;
    category = cat;
    bCount++;
    Bid = bCount;
}

Book::Book(const Book& obj){//Copy constructor to initialize "obj" to book
    title = obj.title;
    isbn = obj.isbn;
    Bid = obj.Bid;
    category = obj.category;
    author = obj.author;
    averageRating=obj.averageRating;
}

void Book::setTitle(string Title){//Mutator which will set "Title" to "title"
    title=Title;
}

string Book::getTitle(){//Accessor that will read the "title" variable from the private members from the class, and return it
    return title;
}

void Book::setISBN(string ISBN){//Mutator which will set "ISBN" to "isbn"
    isbn=ISBN;
}

string Book::getISBN(){//Accessor that will read the "isbn" variable from the private members from the class, and return it
    return isbn;
}

void Book::setId(int Id){//Mutator which will set "Id" to "id"
    Bid = Id;
}

int Book::getId(){//Accessor that will read the "id" variable from the private members from the class, and return it
    return Bid;
}

void Book::setCategory(string cat){//Mutator which will set "cat" to "category"
    category = cat;
}

string Book::getCategory(){//Accessor that will read the "category" variable from the private members from the class, and return it
    return category;
}

void Book::setAuthor(User user){//Mutator which will set "user" to "author"
    author=user;
}

User Book::getAuthor(){//Accessor that will read the "author" variable from the private members from the class, and return it
   return author;
}

void Book::rateBook(int rat){//Function responsible for the rating of the books
    rSum += rat;
    rCount++;
    averageRating = rSum/rCount;
}
double Book::getRate(){//Accessor that will read the "averageRating" variable from the private members from the class, and return it
    return averageRating;
}

bool Book::operator==(const Book &bk){//An if condition that checks if the book from the class is similar to the obj book
    if (title == bk.title && isbn == bk.isbn && category == bk.category && Bid == bk.Bid && author == bk.author)
        return true;
    else
        return false;
}

ostream &operator<<(ostream &output, const Book &bk ){//An overload operator "<<" that will print out the variables of the class, excluding the author
    if (bk.author.getName() == " "){
        cout << "ERROR" << endl;
        exit(0);
    }
    else{
        output << endl << "Title: " << bk.title<<endl
        <<"ISBN: " << bk.isbn<<endl
        << "Id: " << bk.Bid<<endl
        << "Category: " << bk.category<<endl
        << "Avg Rating: " << bk.averageRating<<endl;
        return output;
    }
}

istream &operator>>( istream &input, Book &bk )//An overload operator ">>" that will take input and put it in bk
{
    input >> bk.title >> bk.isbn >> bk.category;
    return input;
}



