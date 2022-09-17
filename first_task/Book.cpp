#include "header_files/book.h"
#include <string>
using namespace std;




Book::Book(string author_, string publish_org_, int year_) 
{
    _author = author_;
    _publish_org = publish_org_;
    _year = year_;
}


Book::Book() 
{
    
}
// copy constructor
Book::Book(Book& other)
{
    this->_author = other._author;
    this->_publish_org = other._publish_org;
    this->_year = other._year;
}

// move constructor
Book::Book(Book&& other)
{
    this->_author = other._author;
    this->_publish_org = other._publish_org;
    this->_year = other._year;
}

// copy assignment
Book& Book::operator=(Book& other) {
    if (this != &other) {
        this->_author = other._author;
        this->_publish_org = other._publish_org;
        this->_year = other._year;
    }
    return *this;
}

// move assignment
Book& Book::operator=(Book&& other) {
    if (this != &other) {
        this->_author = other._author;
        this->_publish_org = other._publish_org;
        this->_year = other._year;
    }
    return *this;
}


std::string Book::get_author()
{
    return _author;
}


std::string Book::get_publish_org()
{
    return _publish_org;
}


int Book::get_year() {
    return _year;
}


void Book::set_author(std::string author)
{
    _author = author;
}


void Book::set_publish_org(std::string publish_org)
{
    _publish_org = publish_org;
}


void Book::set_year(int year) 
{
   _year = year;
}
