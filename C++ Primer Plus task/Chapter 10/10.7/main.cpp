#include <iostream>
#include "10.7.h"

int main(){
    Plorg plorg1;
    plorg1.show();
    Plorg plorg2 ("wang");
    plorg2.show();
    plorg2.setCI(100);
    plorg2.show();
    std::cout << "Enter q to quit: ";
    while (std::cin.get() != 'q'){
        std::cout << "Enter q to quit: ";
    }
    return 0;
}