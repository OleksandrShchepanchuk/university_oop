
#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H
#include <bits/stdc++.h>
#include <string>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;
public:
        Library();
        Library(std::vector<Book>  books);
        Library(Library& other);
        Library(Library&& other);
        Library& operator=(Library& other);
        Library& operator=(Library&& other);
        ~Library();
};


#endif