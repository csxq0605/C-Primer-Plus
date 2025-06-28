#include <iostream>
#include "sales.h"

int main(){
    using namespace std;
    using namespace SALES;
    Sales s1, s2;
    setSales(s1);
    setSales(s2, new double[QUARTERS]{1, 2, 3, 4}, QUARTERS);
    showSales(s1);
    showSales(s2);
    delete [] s2.sales;
    return 0;
}