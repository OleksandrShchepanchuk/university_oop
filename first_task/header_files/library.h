
#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H
#include <bits/stdc++.h>
#include <string>
#include "Book.h"

class Library {
private:
    std::vector<Book> _books;
public:
        Library();
        Library(std::vector<Book>  books);
        Library(Library& other);
        Library(Library&& other);
        Library& operator=(Library& other);
        Library& operator=(Library&& other);
        void add_books(vector<Book> _books);
        void add_books(Book _books);
        void remove_books(vector<int> id);
        void remove_books(int id);
};


#endif