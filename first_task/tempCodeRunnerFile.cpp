#include "book.h"
#include <iostream>
#include <string>
using namespace std;



int main(){
    string a ="rouling";
    string b = "publish";
    Book harry = Book(a, b, 123); 
    cout << harry.author << endl;
    return 0;
}
