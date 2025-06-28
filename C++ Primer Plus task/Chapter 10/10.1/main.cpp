#include <iostream>
#include "10.1.h"

int main(){
    BankAccount account1 ("John Doe", "1234567890", 1000);
    account1.show();
    account1.deposit(500);
    account1.withdraw(2000);
    account1.withdraw(500);
    std::cout << "Enter q to quit: ";
    while (std::cin.get() != 'q'){
        std::cout << "Enter q to quit: ";
    }
    return 0;
}