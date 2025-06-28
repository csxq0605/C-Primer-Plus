#include <iostream>
using namespace std;

int Fill_array(double * arr, int n){
    double temp;
    int count = 0;
    while (cin >> temp && count < n){
        arr[count++] = temp;
    }
    return count;
}

void Show_array(double * arr, int n){
    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Reverse_array(double * arr, int n){
    for (int i = 0; i < n / 2; ++i){
        swap(arr[i], arr[n-i-1]);
    }
}

int main(){
    const int size = 10;
    double arr[size];
    int count = Fill_array(arr, size);
    Show_array(arr, count);
    Reverse_array(arr, count);
    Show_array(arr, count);
    Reverse_array(arr + 1, count - 2);
    Show_array(arr, count);
    return 0;
}