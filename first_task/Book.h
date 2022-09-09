
#ifndef BOOK_BOOK_H
#define BOOK_BOOK_H
#include <iostream> 
#include <string>



class Book {
    public:
        std::string author, publish_org;
        int year;
        Book(std::string  author_, std::string  publish_org_, int year_);
};

#endif