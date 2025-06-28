#include <iostream>
#include <cstring>
#include "10.7.h"

Plorg::Plorg(const char * n, int c){
    std::strcpy(name, n);
    CI = c;
}

void Plorg::show() const{
    std::cout << "Name: " << name << std::endl;
    std::cout << "CI: " << CI << std::endl;
}

void Plorg::setCI(int c){
    CI = c;
}