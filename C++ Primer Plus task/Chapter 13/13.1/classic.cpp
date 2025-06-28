#include <iostream>
#include <cstring>
#include "classic.h"

Cd::Cd(const char * s1, const char * s2, const int n, const double x){
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d){
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(){
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}

Cd::~Cd(){
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
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char * s1, const char * s2, const char * s3, const int n, const double x) : Cd(s2, s3, n, x){
    std::strcpy(main_work, s1);
}

Classic::Classic(const Classic & c) : Cd(c){
    std::strcpy(main_work, c.main_work);
}

Classic::Classic() : Cd(){
    main_work[0] = '\0';
}

Classic::~Classic(){
}

void Classic::Report() const{
    using namespace std;
    Cd::Report();
    cout << "Main work: " << main_work << endl;
}

Classic & Classic::operator =(const Classic & c){
    if (this == &c)
        return *this;
    std::strcpy(main_work, c.main_work);
    Cd::operator =(c);
    return *this;
}