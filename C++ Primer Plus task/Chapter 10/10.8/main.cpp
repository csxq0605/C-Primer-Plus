#include <iostream>
#include "list.h"

int main(){
    List list;
    int n = 0;
    while (n < 10){
        list.add(n);
        n++;
    }
    list.visit(visitItem);
    std::cout << "Enter q to quit: ";
    while (std::cin.get() != 'q'){
        std::cout << "Enter q to quit: ";
    }
    return 0;
}