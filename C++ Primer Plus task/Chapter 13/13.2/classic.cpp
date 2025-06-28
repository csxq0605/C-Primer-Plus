#include <iostream>
#include <cstring>
#include "classic.h"

Cd::Cd(const char * s1, const char * s2, const int n, const double x){
    performers = new char [std::strlen(s1) + 1];
    std::strcpy(performers, s1);
    label = new char [std::strlen(s2) + 1];
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d){
    performers = new char [std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);
    label = new char [std::strlen(d.label) + 1];
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(){
    performers = nullptr;
    label = nullptr;
    selections = 0;
    playtime = 0;
}

Cd::~Cd(){
    delete [] performers;
    delete [] label;
}

void Cd::Report() const{
    using namespace std;
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}

Cd & Cd::operator =(const Cd & d){
    if (this == &d)
        return *this;
    delete [] performers;
    performers = new char [std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);
    delete [] label;
    label = new char [std::strlen(d.label) + 1];
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char * s1, const char * s2, const char * s3, const int n, const double x) : Cd(s2, s3, n, x){
    main_work = new char [std::strlen(s1) + 1];
    std::strcpy(main_work, s1);
}

Classic::Classic(const Classic & c) : Cd(c){
    main_work = new char [std::strlen(c.main_work) + 1];
    std::strcpy(main_work, c.main_work);
}

Classic::Classic() : Cd(){
    main_work = nullptr;
}

Classic::~Classic(){
    delete [] main_work;
}

void Classic::Report() const{
    using namespace std;
    Cd::Report();
    cout << "Main work: " << main_work << endl;
}

Classic & Classic::operator =(const Classic & c){
    if (this == &c)
        return *this;
    delete [] main_work;
    main_work = new char [std::strlen(c.main_work) + 1];
    std::strcpy(main_work, c.main_work);
    Cd::operator =(c);
    return *this;
}