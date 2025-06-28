#include <iostream>
using namespace std;

const int strsize = 30;

struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main(){
    bop bops[5] = {"Wimp Macho", "Junior Programmer", "Wimp", 0,
                   "Raki Rhodes", "Senior Programmer", "Raki", 1,
                   "Celia Laiter", "Junior Programmer", "MIPS", 2,
                   "Hoppy Hipman", "Analyst Trainee", "Hipman", 1,
                   "Pat Hand", "Analyst Trainee", "LOOPY", 2};
    cout << "Benevolent Order of Programmer Report\n";
    cout << "a. display by name    b. display by title\n";
    cout << "c. display by bopname d. display by preference\n";
    cout << "q. quit\n";
    char choice;
    bool flag = true;
    cout << "Enter your choice:";
    while (flag){
        cin >> choice;
        switch (choice){
            case 'a':
                for (int i = 0; i < 5; ++i){
                    cout << bops[i].fullname << endl;
                };
                cout << "Next choice:";
                break;
            case 'b':
                for (int i = 0; i < 5; ++i){
                    cout << bops[i].title << endl;
                };
                cout << "Next choice:";
                break;
            case 'c':
                for (int i = 0; i < 5; ++i){
                    cout << bops[i].bopname << endl;
                };
                cout << "Next choice:";
                break;
            case 'd':
                for (int i = 0; i < 5; ++i){
                    switch (bops[i].preference){
                        case 0:
                            cout << bops[i].fullname << endl;
                            break;
                        case 1:
                            cout << bops[i].title << endl;
                            break;
                        case 2:
                            cout << bops[i].bopname << endl;
                            break;
                    };
                };
                cout << "Next choice:";
                break;
            case 'q':
                flag = false;
                cout << "Bye!" << endl;
        };
    };
    return 0;
}