#include <iostream>
#include "10.4.h"

SALES::Sales::Sales(){
    for (int i = 0; i < QUARTERS; i++){
        sales[i] = 0;
    }
    average = max = min = 0;
}

SALES::Sales::Sales(const double ar[], int n){
    double sum = 0;
    max = min = ar[0];
    for (int i = 0; i < n; i++){
        sales[i] = ar[i];
        sum += ar[i];
        if (max < sales[i])
            max = sales[i];
        if (min > sales[i])
            min = sales[i];
    }
    average = sum / n;
}

void SALES::Sales::setSales(){
    using namespace std;
    double ar[QUARTERS];
    for (int i = 0; i < QUARTERS; i++){
        cout << "Enter the sales for the " << i + 1 << " quarter: ";
        cin >> ar[i];
    }
    *this = Sales(ar, QUARTERS);
}

void SALES::Sales::showSales() const{
    using namespace std;
    cout << "Sales: ";
    for (int i = 0; i < QUARTERS; i++){
        cout << sales[i] << " ";
    }
    cout << endl;
    cout << "Average: " << average << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}