#include <iostream>
using namespace std;

int input(double arr [], int n){
    double score;
    int i = 0;
    while (i < n && cin >> score && score >= 0){
        arr[i++] = score;
    }
    return i;
}

void output(const double arr [], int n){
    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}
double mean(const double arr [], int n){
    double sum = 0;
    for (int i = 0; i < n; ++i){
        sum += arr[i];
    }
    return sum / n;
}

int main(){
    double arr[10];
    int n = input(arr, 10);
    output(arr, n);
    double meannum = mean(arr, n);
    cout << meannum << endl;
    return 0;
}