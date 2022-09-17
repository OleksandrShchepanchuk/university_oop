#include "header_files/book.h"
#include <iostream>
#include <string>
using namespace std;



int main(){
    string a ="rouling";
    string b = "publish";
    Book harry = Book(a, b, 123); 
    Book harry1 = Book(a, b, 123); 
    cout << "id "  << endl;
    cout << harry1.get_id() << endl;
    cout << "second id "  << endl;
    cout << harry.get_id() << endl;
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



