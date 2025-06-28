#include <iostream>
#include "wine.h"
using namespace std;

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : PairArray(ArrayInt(yr, y), ArrayInt(bot, y)){
    name = l;
    years_count = y;
}

Wine::Wine(const char * l, int y) : PairArray(ArrayInt(y), ArrayInt(y)){
    name = l;
    years_count = y;
}

Wine::Wine() : PairArray(ArrayInt(0), ArrayInt(0)){
    name = "none";
    years_count = 0;
}

Wine::~Wine(){}

void Wine::GetBottles(){
    cout << "Enter " << name << " data for " << years_count << " year(s):" << endl;
    for (int i = 0; i < years_count; i++){
        cout << "Enter years: ";
        cin >> (*this).first[i];
        cout << "Enter bottles for that year: ";
        cin >> (*this).second[i];
    }
}

void Wine::Show() const{
    cout << "Wine: " << name << endl;
    cout << "        Year    Bottles" << endl;
    for (int i = 0; i < years_count; i++){
        cout << "        " << (*this).first[i] << "    " << (*this).second[i] << endl;
    }
}