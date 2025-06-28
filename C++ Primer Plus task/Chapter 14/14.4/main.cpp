#include <iostream>
#include <cstring>
#include "person.h"
using namespace std;

int main(){
    Person * p[5];
    int ct;
    for (ct = 0; ct < 5; ct++){
        char choice;
        cout << "Enter the person category:\n"
             << "g: gunslinger p: poker player\n"
             << "b: bad dude q: quit\n";
        cin >> choice;
        while (strchr("gpbq", choice) == NULL){
            cout << "Please enter a g, p, b, or q: ";
            cin >> choice;
        }
        if (choice == 'q') 
            break;
        switch (choice){
            case 'g': p[ct] = new Gunslinger;
                      break;
            case 'p': p[ct] = new PokerPlayer;
                      break;
            case 'b': p[ct] = new BadDude;
                      break;
        }
        p[ct]->Set();
    }
    cout << endl;
    for (int i = 0; i < ct; i++){
        p[i]->Show();
        cout << endl;
    }
    for (int i = 0; i < ct; i++){
        delete p[i];
    }
    cout << "Enter q to quit: ";
    while (cin.get() != 'q')
        continue;
    cout << "Bye.\n";
    return 0;
}