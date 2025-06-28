#include <iostream>
#include "10.2.h"
using namespace std;

int main(){
    Person one;
    Person two ("Smythecraft");
    Person three ("Dimwiddy", "Sam");
    one.Show();
    cout << endl;
    one.FormalShow();
    cout << endl;
    two.Show();
    cout << endl;
    two.FormalShow();
    cout << endl;
    three.Show();
    cout << endl;
    three.FormalShow();
    cout << endl;
    std::cout << "Enter q to quit: ";
    while (std::cin.get() != 'q'){
        std::cout << "Enter q to quit: ";
    }
    return 0;
}