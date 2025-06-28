#include <iostream>
#include <cstring>
#include "10.3.h"

Golf::Golf(){
    fullname[0] = '\0';
    handicap = 0;
}

Golf::Golf(const char * name, int hc){
    std::strcpy(fullname, name);
    handicap = hc;
}

void Golf::setgolf(){
    using namespace std;
    char fn[Len];
    cout << "Enter the name of the player: ";
    cin.getline(fn, Len);
    cout << "Enter the handicap of the player: ";
    int hc;
    cin >> hc;
    cin.get();
    *this = Golf(fn, hc);
}

void Golf::setHandicap(int hc){
    handicap = hc;
}

void Golf::showgolf() const{
    using namespace std;
    cout << "Name: " << fullname << endl;
    cout << "Handicap: " << handicap << endl;
}