#include "cow.h"
#include <cstring>
#include <iostream>

Cow::Cow(){
    name[0] = '\0';
    hobby = nullptr;
    weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt){
    std::strcpy(name, nm);
    hobby = new char [std::strlen(ho) + 1];
    std::strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c){
    std::strcpy(name, c.name);
    hobby = new char [std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow(){
    delete [] hobby;
    name[0] = '\0';
    weight = 0;
}

Cow & Cow::operator =(const Cow & c){
    if (this == &c)
        return *this;
    delete [] hobby;
    std::strcpy(name, c.name);
    hobby = new char [std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hobby: " << hobby << std::endl;
    std::cout << "Weight: " << weight << std::endl;
}