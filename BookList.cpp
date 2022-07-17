#include <iomanip>
#include "BookList.h"

using namespace std;

int BookList::objcounter = 0;
BookList::BookList(const BookList& anotherList)
{
	for(int i=0;i<capacity;i++)
  	this->books[i] = anotherList.books[i];
  	objcounter=anotherList.objcounter;

}

BookList::BookList (int cap)
{
    capacity = cap;
    books = new Book[cap];
}

void BookList::addBook(Book book)
{
  for(int i=objcounter;i<capacity;i++)
  {
    books[i]=book;
    objcounter++;
    break;
  }
}

Book& BookList::searchBook(string name)
{
    for(int i=0; i<capacity;i++)
    {
        if(books[i].title==name)
        {
            cout<<"\n============Book "<<i+1<<" info============";
            return books[i];
        }
    }
}

Book& BookList::searchBook(int id)
{
	for(int i=0; i<capacity;i++)
  {
    if(books[i].Bid==id)
    {
        cout<<"\n============Book "<<i+1<<" info============";
    	return books[i];
    }
  }
}

void BookList::deleteBook(int id)
{
    int index = 0;
    for(int i=0; i<capacity;i++)
    {
        if(books[i].Bid==id)
        {
            index = i;
            break;
        }
  }
  capacity --;
  for (int i=index;i<capacity;i++)
  {
  	books[i] = books[i+1];
  }
  objcounter--;
}

Book BookList::getTheHighestRatedBook()
{
    Book temp;
    int Max=0;
    for(int i=0;i<capacity;i++)
    {
        if(Max < books[i].getRate()){
            Max = books[i].getRate();
            temp=books[i];
        }
    }
    return temp;
}

Book* BookList::getBooksForUser(User user)
{
    int j = 0;
    int counter = 0;
    for(int i=0;i<capacity;i++)
    {
        if(books[i].getAuthor().getName() == user.getName())
            counter++;
    }
    Book* authorBooks = new Book[counter];
    for(int i=0;i<capacity;i++)
    {
        if(books[i].getAuthor().getName() == user.getName())
        {
            authorBooks[j]=books[i];
            j++;
        }
    }
    return authorBooks;
}

Book& BookList::operator[](int position){
    return this->books[position];
}

ostream &operator<<( ostream &output, BookList &bookList )
{
	for(int i=0;i<bookList.capacity;i++)
  {
    output<<"============Book "<<i+1<<" info============";
  	output<<bookList.books[i]<<endl;
  }
}

BookList::~BookList()
{
	delete [] books;
}
