#include <iostream>

using namespace std;

class Book{ //This is a class called Book
   public:
       string title;
       string author;
       int pages;
};

int main()
{
    Book book1; // This is an object called book1 of class Book
    book1.title= "Harry Potter";
    book1.author= "JK Rowling";
    book1.pages= 500;

    Book book2;
    book2.title= "Lord of the rings";
    book2.author= "Tolkien";
    book2.pages=700;



    cout << book2.title;

}
