#include <iostream>
#include "sales.h"

void SALES::setSales(Sales & s, const double ar[], int n){
    double sum = 0;
    s.max = s.min = ar[0];
    for (int i = 0; i < n; i++){
        s.sales[i] = ar[i];
        sum += ar[i];
        if (ar[i] > s.max)
            s.max = ar[i];
        if (ar[i] < s.min)
            s.min = ar[i];
    }
    s.average = sum / n;
}

void SALES::setSales(Sales & s){
    using namespace std;
    double sum = 0;
    s.max = 0;
    s.min = 1e9;
    for (int i = 0; i < QUARTERS; i++){
        cout << "enter the sales for quarter " << i + 1 << ": ";
        cin >> s.sales[i];
        sum += s.sales[i];
        if (s.sales[i] > s.max)
            s.max = s.sales[i];
        if (s.sales[i] < s.min)
            s.min = s.sales[i];
    }
    s.average = sum / QUARTERS;
}

void SALES::showSales(const Sales & s){
    using namespace std;
    cout << "Sales: ";
    for (int i = 0; i < QUARTERS; i++)
        cout << s.sales[i] << " ";
    cout << endl;
    cout << "Average: " << s.average << endl;
    cout << "Max: " << s.max << endl;
    cout << "Min: " << s.min << endl;
}