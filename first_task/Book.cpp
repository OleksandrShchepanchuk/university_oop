#include "header_files/book.h"
#include <string>
#include <fstream>


int Book::current_id = 1;

Book::Book(std::string author_, std::string publish_org_, int year_)
{
    _id = current_id++;
    _author = author_;
    name = publish_org_;
    _year = year_;
}

Book::~Book()
 {

}
Book::Book()
{
    _id = current_id++;
    _author = "";
    name = "";
    _year = 0;
}
// copy constructor
Book::Book(const Book& other)
{
    this->_id = current_id++;
    this->_author = other._author;
    this->name = other.name;
    this->_year = other._year;
}

// move constructor
Book::Book(Book&& other)
{
    this->_id = current_id++;
    this->_author = other._author;
    this->name = other.name;
    this->_year = other._year;
}


// copy assignment
Book& Book::operator=(Book& other)
{
    if (this != &other) {
        this->_id = current_id++;
        this->_author = other._author;
        this->name = other.name;
        this->_year = other._year;
    }
    return *this;
}

// move assignment
Book& Book::operator=(Book&& other) {
    if (this != &other) {
        this->_id = other._id;
        this->_author = other._author;
        this->name = other.name;
        this->_year = other._year;
    }
    return *this;
}


std::string Book::get_author() const
{
    return _author;
}

int Book::get_id() const 
{
    return _id;
}


std::string Book::get_publish_org() const
{
    return name;
}


int Book::get_year() const {
    return _year;
}

void Book::set_author(std::string author)
{
    _author = author;
}


void Book::set_publish_org(std::string publish_org)
{
    name = publish_org;
}


void Book::set_year(int year) 
{
   _year = year;
}




std::istream& operator>>(std::istream& is, Book& book)
{
    is >> book._id;
	is >> book.name;
	is >> book._author;
	is >> book._year;
	return is;
}

void Book::read_data(std::istream& is)
{
    is >> this->_id;
	is >> this->name;
	is >> this->_author;
	is >> this->_year;
}

std::ostream& operator<<(std::ostream& os, Book& book)
{
	os << "id:" << book._id << "name of book: " << book.name << std::endl << "author: " << book._author << std::endl << "year: " << book._year << std::endl;
	return os;
}

void Book::print(std::ostream& os) const
{
  os << "id: " << this->_id << std::endl << "Name: " << this->name << std::endl << "Author: " << this->_author << std::endl << "Year: " << this->_year << std::endl;
}