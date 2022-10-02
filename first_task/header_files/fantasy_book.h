

#include "Book.h"
#include <iostream>
#include <string>

#ifndef FANTASY_BOOK_H
#define FANTASY_BOOK_H

class FantasyBook: public  Book
{
    private:
        int size_of_book;
    public:
        FantasyBook(std::string  author_, std::string  publish_org_, int year_, int size_of_book);
        FantasyBook(const FantasyBook& other);
        FantasyBook();
        ~FantasyBook();
        void set_size_of_book(int size_of_book_);
        int get_size_of_book()const;
        void print(std::ostream& os) const;
        void read_data(std::istream& is);
};

#endif