#include "header_files/library.h"
#include <iostream>
#include <string>
#include <fstream>
      
void BubbleSort(Book *arr, int size, int number) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 1; j > i; j--) {
            if(number == 1)
            {
                if (arr[j].get_author() < arr[j - 1].get_author()) {
                    std::swap(arr[j], arr[j - 1]);
                }
            }
            else if (number == 2)
            {
                if (arr[j].get_publish_org() < arr[j - 1].get_publish_org()) {
                    std::swap(arr[j], arr[j - 1]);
                }
            }
            else if (number== 3) 
            {
                if (arr[j].get_year() < arr[j - 1].get_year()) {
                    std::swap(arr[j], arr[j - 1]);
                }  
            }
            else if (number== 4) 
            {
                if (arr[j].get_id() < arr[j - 1].get_id()) {
                    std::swap(arr[j], arr[j - 1]);
                }  
            }
        }
    }
}

void Library::sort_library(std::string param) 
{
    if(param == "name")
    {
        BubbleSort(_books, quant, 2);
    }

    if(param == "author")
    {
        BubbleSort(_books, quant, 1);
    }
    if (param == "year")
    {
        BubbleSort(_books, quant, 3);

    }
    if (param == "id")
    {
        BubbleSort(_books, quant, 4);
    }

}



void remove (Book* books, int j, int n)
{
    for (int i = j; i < n; i++)
    {
        books[i] = books[i+1];
    }
}


Library::Library()
{
    this->_books = new Book[MAX_QUANT];
    quant = 0;
}

Library::~Library()
{ 
    delete[] this->_books;
}

Library::Library(Book* books, int quant_) 
{
    _books = new Book[MAX_QUANT];
    quant = quant_;
    for (int i; i < quant; i++)
    {
        _books[i] = books[i];
    }
}


Library::Library(Library& other) {
    this->_books = new Book[MAX_QUANT];
    for (int i; i < other.quant; i++)
    {
        this->_books[i] = other._books[i];
    }
}


Library::Library(Library&& other) 
{
    for (int i; i < other.quant; i++) 
    {
        this->_books[i] = other._books[i];
    }
    other._books = nullptr;
}


Library& Library::operator=(Library& other)
{
    if (this != &other) 
    {
        if (this->_books) {
                delete[] this->_books;
            }
        this->_books = new Book[MAX_QUANT];
        for (int i = 0; i < this->quant; i++) 
        {
            this->_books[i] = other._books[i];
        }
    }
    return *this;
}


Library& Library::operator=(Library&& other) 
{
        if (this != &other) 
        {
            if (this->_books) {
                delete[] this->_books;
            }
            for (int i = 0; i < this->quant; i++) 
            {
                this->_books[i] = other._books[i];
            }
            other._books = nullptr;
        }
        return *this;
}


void Library::add_books(Book* books_, int quant_)
{
    for (int i = 0; i < quant_; i++)
    {
        _books[quant] = books_[i]; 
        quant++;
    }
}


void Library::add_books(Book books_) 
{
    _books[quant] = books_;
    quant++;
}


void Library::search_by_author(std::string author) 
{
    for (int i = 0; i < quant; i++) 
    {
        // if (!strcmp(author, books[i].getAuthor()))
        if (author == _books[i].get_author()) 
        {   
            _books[i].print();
        }
    }
}
void Library::search_by_year(int year) 
{
    
    for (int i = 0; i < quant; i++) 
    {
        // if (!strcmp(author, books[i].getAuthor()))
        if (year == _books[i].get_year()) 
        {   
            _books[i].print();
        }
    }
}

void Library::search_by_name(std::string name) 
{
    
    for (int i = 0; i < quant; i++) 
    {
        // if (!strcmp(author, books[i].getAuthor()))
        if (name == _books[i].get_publish_org()) 
        {   
            _books[i].print();
        }
    }
}

void Library::search_by_id(int id) 
{
    
    for (int i = 0; i < quant; i++) 
    {
        // if (!strcmp(author, books[i].getAuthor()))
        if (id == _books[i].get_id()) 
        {   
            _books[i].print();
        }
    }
}

void Library::remove_books(int* id, int quant_)
{
    for (int i = 0; i < quant_; i++)
    {
        for (int j = 0; j < quant; j++)
        {
            if (id[i] == _books[j].get_id())
            {
                remove(_books, j, quant);
                quant--;
                break;
            }
        }
    }
}



void Library::remove_books(int id)
{
        for (int j = 0; j < quant; j++)
        {
            if (id == _books[j].get_id())
            {
                 remove(_books, j, quant);
                 quant--;
                 break;
            }
        }
 }

 void Library::show(std::ostream& os)const
{  
    for (int i = 0; i < quant; i++) {
        _books[i].print(os);
    }
}

void Library::show()const
{  
    for (int i = 0; i < quant; i++) {
        _books[i].print();
    }
}


void Library::read_from_file(std::string file_name)
{
    std::ifstream f(file_name);
    while (!f.eof()) {
        // int id;
        std::string name;
        std::string author;
        // string publishing;
        int year;
        f >> name >> author >> year;
        if (!name.length()) {
            break;
        }
        this->_books[quant].set_publish_org(name);
        this->_books[quant].set_author(author);
        this->_books[quant].set_year(year);
        quant++;
    }
    f.close();
}