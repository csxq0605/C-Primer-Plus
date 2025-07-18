#include <iostream>
using namespace std;

template <typename T>
T SumArray(T * arr, const int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

template <typename T>
double SumArray(T ** arr, const int n){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += *arr[i];
    }
    return sum;
}

struct debts{
    char name[50];
    double amount;
};

int main(){
    int things[6] = {13, 31, 103, 301, 310, 130};
    debts mr_E[3] = {{"Ima Wolfe", 2400.0}, {"Ura Foxe", 1300.0}, {"Iby Stout", 1800.0}};
    double * pd[3];
    for (int i = 0; i < 3; i++){
        pd[i] = &mr_E[i].amount;
    }
    cout << "Sum of things: " << SumArray(things, 6) << endl;
    cout << "Sum of debts: " << SumArray(pd, 3) << endl;
    return 0;
}