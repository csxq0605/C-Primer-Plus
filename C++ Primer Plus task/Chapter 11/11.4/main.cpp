#include "time.h"
#include <iostream>

int main(){
    using namespace std;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    cout << "Aida and Tosca:\n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10 * Tosca: " << 10 * tosca << endl;
    cout << "Enter q to quit: ";
    while (cin.get() != 'q'){
        continue;
    }
    cout << "Bye!\n";
    return 0;
}