
#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H
#include <bits/stdc++.h>
#include <string>
#include "Book.h"
#include <fstream>

const int MAX_QUANT = 1000;

class Library {
private:
    Book *_books;
    int quant;
public:
        Library();
        Library(Book* books, int quant_);
        Library(Library& other);
        Library(Library&& other);
        ~Library();
        Library& operator=(Library& other);
        Library& operator=(Library&& other);
        void add_books(Book* books_, int quant_);
        void add_books(Book books_);
        void remove_books(int *id, int quant_);
        void remove_books(int id);
        void search_by_author(std::string author); 
        void search_by_year(int year) ;
        void search_by_name(std::string name) ;
        void search_by_id(int id);
        void show(std::ostream& os)const;
        void read_from_file(std::string file_name); 
        void sort_library(std::string param);
        void show()const;

};


#endif