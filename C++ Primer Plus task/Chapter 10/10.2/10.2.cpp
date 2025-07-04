#include <iostream>
#include <cstring>
#include "10.2.h"

Person::Person(const std::string & ln, const char * fn){
    lname = ln;
    std::strcpy(fname, fn);
}

void Person::Show() const{
    std::cout << fname << " " << lname << std::endl;
}

void Person::FormalShow() const{
    std::cout << lname << ", " << fname << std::endl;
}