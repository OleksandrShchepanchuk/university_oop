#include "header_files/book.h"
#include "header_files/library.h"
#include "header_files/fantasy_book.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main(){
    // string a ="rouling";
    // string b = "publish";
    // Book harry = Book(b, b, 123); 
    // Book harry1 = Book(a, b, 123); 
    // cout << "id "  << endl;
    // cout << harry1.get_id() << endl;
    // cout << "second id "  << endl;
    // cout << harry.get_id() << endl;
    // Library library;
    // ofstream f("text2.txt");
    // library.read_from_file("text.txt");
    // library.show();
    // library.remove_books(3);
    // library.add_books(harry);
    // library.add_books(harry1);
    // library.show(f);
    // cout << harry << endl;
    Book *A;
    FantasyBook B("test1", "test2", 3, 123);
    A = &B;
    A->print(cout);
    cout << endl;
    B.print(cout);
    B.read_data(cin);
    B.print(cout);
    // return 0;

}
