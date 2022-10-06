
#ifndef BOOK_BOOK_H
#define BOOK_BOOK_H
#include <iostream> 
#include <string>
#include <fstream>



class Book {
    protected:
        std::string _author, name;
        int _id;
        int _year;
        static int current_id;
    public:
        Book();
        Book(std::string  author_, std::string  publish_org_, int year_);
        Book(const Book& other);
        Book(Book&& other);
        Book& operator=(Book& other);
        Book& operator=(Book&& other);
        std::string get_author()const;
        std::string get_publish_org()const;
        int get_year()const;
        void set_author(std::string author);
        void set_publish_org(std::string publish_org);
        void set_year(int year);
        int get_id()const;
        void print()const;
        friend std::istream& operator>>(std::istream& is, Book& book);
        friend std::ostream& operator<<(std::ostream& os, Book& book);
        virtual void print(std::ostream& os) const;
        virtual void read_data(std::istream& is);
        virtual ~Book();
        
};


#endif