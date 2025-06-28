#include <cstring>
#include <cctype>
#include "String1.h"

int String::num_strings = 0;

int String::HowMany(){
    return num_strings;
}

String::String(){
    len = 0;
    str = nullptr;
    num_strings++;
}

String::String(const char * s){
    len = std::strlen(s);
    str = new char [len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String(const String & s){
    len = s.len;
    str = new char [len + 1];
    std::strcpy(str, s.str);
    num_strings++;
}

String::~String(){
    --num_strings;
    delete [] str;
}

void String::Stringlow(){
    for (int i = 0; i < len; i++){
        if (std::isalpha(str[i]))
            str[i] = std::tolower(str[i]);
    }
}

void String::Stringup(){
    for (int i = 0; i < len; i++){
        if (std::isalpha(str[i]))
            str[i] = std::toupper(str[i]);
    }
}

int String::count(char c) const{
    int count = 0;
    for (int i = 0; i < len; i++){
        if (str[i] == c)
            count++;
    }
    return count;
}

String operator +(const String & s1, const String & s2){
    String temp;
    temp.len = s1.len + s2.len;
    temp.str = new char [temp.len + 1];
    std::strcpy(temp.str, s1.str);
    std::strcat(temp.str, s2.str);
    return temp;
}

String & String::operator =(const String & s){
    if (this == &s)
        return *this;
    delete [] str;
    len = s.len;
    str = new char [len + 1];
    std::strcpy(str, s.str);
    return *this;
}

String & String::operator =(const char * s){
    delete [] str;
    len = std::strlen(s);
    str = new char [len + 1];
    std::strcpy(str, s);
    return *this;
}

char & String::operator [](int i){
    return str[i];
}

const char & String::operator[](int i) const{
    return str[i];
}

bool operator <(const String & st1, const String & st2){
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator >(const String & st1, const String & st2){
    return st2 < st1;
}

bool operator ==(const String & st1, const String & st2){
    return (std::strcmp(st1.str, st2.str) == 0);
}

std::ostream & operator <<(std::ostream & os, const String & st){
    os << st.str;
    return os;
}

std::istream & operator >>(std::istream & is, String & st){
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is;
}