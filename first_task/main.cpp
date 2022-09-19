#include "header_files/book.h"
#include "header_files/library.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;



int main(){
    string a ="rouling";
    string b = "publish";
    Book harry = Book(a, b, 123); 
    Book harry1 = Book(a, b, 123); 
    // cout << "id "  << endl;
    // cout << harry1.get_id() << endl;
    // cout << "second id "  << endl;
    // cout << harry.get_id() << endl;
    Library library;
    ofstream f("text2.txt");
    library.read_from_file("text.txt");
    library.remove_books(3);
    library.show(f);
    // cout << harry << endl;
    
    return 0;
}

// int main(){

//     Book harry = Book("rouling", "publish", 123); 
//     return 0;
// }


// class Book {
//     public:
//         string author, publish_org;
//         int year;
//         Book(string author_, string publish_org_, int year_) {
//                 author = author_;
//                 publish_org = publish_org_;
//                 year = year_;
//         }
// };



