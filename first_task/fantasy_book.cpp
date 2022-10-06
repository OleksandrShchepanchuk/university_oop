#include <iostream>
#include <string>
#include "header_files/fantasy_book.h"




int FantasyBook::get_size_of_book()const
{
    return size_of_book;
}

void FantasyBook::set_size_of_book(int size_of_book_)
{
    size_of_book = size_of_book_;
}

FantasyBook::FantasyBook(std::string  author_, std::string  publish_org_, int year_, int size_of_book_)
: Book(author_, publish_org_,year_)
{
    size_of_book = size_of_book_;
}

FantasyBook::FantasyBook(const FantasyBook& other)
:   Book(other),
    size_of_book(other.size_of_book)
{
    
}
FantasyBook::FantasyBook(): Book()
{

}
FantasyBook::~FantasyBook() 
{

}

void FantasyBook::print(std::ostream& os) const
{       
    Book::print(os);
    os <<"number of pages: " <<this->size_of_book << std::endl;

}

void FantasyBook::read_data(std::istream& is)
{
    Book::read_data(is);
    is >> size_of_book;
}
