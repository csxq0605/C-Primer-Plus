#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T * arr,const int n = 5){
    T max = arr[0];
    for (int i = 1; i < n; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

template <> char * maxn(char ** arr, const int n){
    char * max = arr[0];
    for (int i = 1; i < n; i++){
        if (strlen(arr[i]) > strlen(max)){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr1[6]= {1, 2, 3, 4, 5, 6};
    double arr2[4] = {1.1, 2.2, 3.3, 4.4};
    cout << "Max int: " << maxn(arr1, 6) << endl;
    cout << "Max double: " << maxn(arr2, 4) << endl;
    const char * arr[5] = {"Hello", "World", "This is a test", "This is a test too", "This is a test three"};
    cout << "Max string: " << maxn(arr, 5) << endl;
    return 0;
}