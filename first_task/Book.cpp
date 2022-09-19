#include "header_files/book.h"
#include <string>
#include <fstream>
using namespace std;


int Book::current_id = 1;

Book::Book(string author_, string publish_org_, int year_)
{
    _id = current_id++;
    _author = author_;
    _publish_org = publish_org_;
    _year = year_;
}


Book::Book()
{
    _id = current_id++;
}
// copy constructor
Book::Book(Book& other)
{
    this->_id = current_id++;
    this->_author = other._author;
    this->_publish_org = other._publish_org;
    this->_year = other._year;
}

// move constructor
Book::Book(Book&& other)
{
    this->_id = current_id++;
    this->_author = other._author;
    this->_publish_org = other._publish_org;
    this->_year = other._year;
}

// copy assignment
Book& Book::operator=(Book& other)
{
    if (this != &other) {
        this->_id = other._id;
        this->_author = other._author;
        this->_publish_org = other._publish_org;
        this->_year = other._year;
    }
    return *this;
}

// move assignment
Book& Book::operator=(Book&& other) {
    if (this != &other) {
        this->_id = other._id;
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

int Book::get_id()
{
    return _id;
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

void Book::print()const
{
	cout << "id: " << _id << " ";
	cout << "Name: " << _publish_org << " ";
	cout << "Author: " << _author <<" ";
	cout << "Year: " << _year << endl << endl;
}
std::istream& operator>>(std::istream& is, Book& book)
{
    is >> book._id;
	is >> book._publish_org;
	is >> book._author;
	is >> book._year;
	return is;
}

std::ostream& operator<<(std::ostream& os, Book& book)
{
	os << "id:" << book._id << "name of book: " << book._publish_org << endl << "author: " << book._author << endl << "year: " << book._year << endl;
	return os;
}

void Book::print(std::ostream& os) const
{
  os << "id: " << this->_id << endl << "Name: " << this->_publish_org << endl << "Author: " << this->_author << endl << "Year: " << this->_year << endl << endl;
}