#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g){
    using namespace std;
    cout << "Enter the name of the player: ";
    cin.getline(g.fullname, Len);
    if (strlen(g.fullname) == 0){
        return 0;
    }
    cout << "Enter the handicap of the player: ";
    cin >> g.handicap;
    cin.get();
    return 1;
}

void handicap(golf & g, int hc){
    g.handicap = hc;
}

void showgolf(const golf & g){
    using namespace std;
    cout << "Name: " << g.fullname << endl;
    cout << "Handicap: " << g.handicap << endl;
}