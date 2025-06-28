#include <iostream>
#include "cow.h"

int main(){
    Cow cow1;
    Cow cow2("Cow2", "Hobby2", 2.0);
    Cow cow3 = cow2;
    cow1 = cow3;
    cow1.ShowCow();
    cow2.ShowCow();
    cow3.ShowCow();
    std::cout << "Enter q to quit: ";
    while (std::cin.get() != 'q'){
        continue;
    }
    std::cout << "Bye!\n";
    return 0;
}