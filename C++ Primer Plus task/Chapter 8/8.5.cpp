#include <iostream>
using namespace std;

template <typename T>
T max5(T * arr){
    T maxn = arr[0];
    for (int i = 1; i < 5; i++){
        if (maxn < arr[i]){
            maxn = arr[i];
        }
    }
    return maxn;
}

int main(){
    int arr[5]= {1, 2, 3, 4, 5};
    double arr2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "Max int: " << max5(arr) << endl;
    cout << "Max double: " << max5(arr2) << endl;
    return 0;
}