#include "header_files/library.h"
#include <iostream>
#include <string>
using namespace std;
      
      
      
      
Library::Library()
{

}


Library::Library(std::vector<Book>  books) 
{
    for (int i; i < books.size(); i++)
    {
        _books.push_back(books[i]);
    }
}


Library::Library(Library& other) {
    for (int i; i < other._books.size(); i++)
    {
        this->_books.push_back(other._books[i]);
    }
}


Library::Library(Library&& other) 
{
    for (int i; i < other._books.size(); i++) 
    {
        this->_books.push_back(other._books[i]);
    }
}


// Library& Library::operator=(Library& other);


// Library& Library::operator=(Library&& other);


// voidLibrary:: add_books(vector<Book> _books);


// void Library::add_books(Book _books);


// void Library::remove_books(vector<int> id);


// void Library::remove_books(int id);