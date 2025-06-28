#include <iostream>
using namespace std;

long long factorial(int n){
    if (n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int n;
    while (cin >> n and n >= 0){
        cout << factorial(n) << endl;
    }
    return 0;
}