#include <iostream>
#include "10.6.h"

int main(){
    Move move1(1, 2);
    Move move2(3, 4);
    Move move3;
    move1.showmove();
    move2.showmove();
    move3 = move1.add(move2);
    move3.showmove();
    move3.reset();
    move3.showmove();
    std::cout << "Enter q to quit: ";
    while (std::cin.get() != 'q'){
        std::cout << "Enter q to quit: ";
    }
    return 0;
    return 0;
}