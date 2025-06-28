#include <iostream>
#include "wine.h"
using namespace std;

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : PairArray(ArrayInt(yr, y), ArrayInt(bot, y)), string(l){
    years_count = y;
}

Wine::Wine(const char * l, int y) : PairArray(ArrayInt(y), ArrayInt(y)), string(l){
    years_count = y;
}

Wine::Wine() : PairArray(ArrayInt(0), ArrayInt(0)), string("none"){
    years_count = 0;
}

Wine::~Wine(){}

void Wine::GetBottles(){
    cout << "Enter " << (const string &)*this << " data for " << years_count << " year(s):" << endl;
    for (int i = 0; i < years_count; i++){
        cout << "Enter years: ";
        cin >> (*this).first[i];
        cout << "Enter bottles for that year: ";
        cin >> (*this).second[i];
    }
}

void Wine::Show() const{
    cout << "Wine: " << (const string &)*this << endl;
    cout << "        Year    Bottles" << endl;
    for (int i = 0; i < years_count; i++){
        cout << "        " << (*this).first[i] << "    " << (*this).second[i] << endl;
    }
}