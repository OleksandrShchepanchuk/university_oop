
#ifndef BOOK_BOOK_H
#define BOOK_BOOK_H
#include <iostream> 
#include <string>



class Book {
        std::string _author, _publish_org;
        int _id;
        int _year;
        static int current_id;
    public:
        Book();
        Book(std::string  author_, std::string  publish_org_, int year_);
        Book(Book& other);
        Book(Book&& other);
        Book& operator=(Book& other);
        Book& operator=(Book&& other);
        std::string get_author();
        std::string get_publish_org();
        int get_year();
        void set_author(std::string author);
        void set_publish_org(std::string publish_org);
        void set_year(int year);
        int get_id();
};


#endif