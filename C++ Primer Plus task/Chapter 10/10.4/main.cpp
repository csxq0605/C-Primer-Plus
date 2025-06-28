#include <iostream>
#include "10.4.h"

int main(){
    SALES::Sales sales;
    sales.showSales();
    double ar[4] = {1, 2, 3, 4};
    SALES::Sales sales1 (ar, 4);
    sales1.showSales();
    sales1.setSales();
    sales1.showSales();
    std::cout << "Enter q to quit: ";
    while (std::cin.get() != 'q')
        continue;
    return 0;
}