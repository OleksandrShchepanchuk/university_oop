#include "book.h"
#include <string>
using namespace std;




Book::Book(string author_, string publish_org_, int year_) {
    _author = author_;
    _publish_org = publish_org_;
    _year = year_;
}


std::string Book::get_author(){
    return _author;
}
std::string Book::get_publish_org(){
    return _publish_org;
}
int Book::get_year() {
    return _year;
}
void Book::set_author(std::string author){
    _author = author;
}
void Book::set_publish_org(std::string publish_org){
    _publish_org = publish_org;
}
void Book::set_year(int year) {
   _year = year;
}
