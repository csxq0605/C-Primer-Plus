#include <iostream>
#include <array>
using namespace std;

int main(){
    array<long double, 101> factorials;
    factorials[1] = factorials[0] = 1.0L;
    for (int i = 2; i < 101; i++){
        factorials[i] = factorials[i-1] * i;
    };
    cout << "100! = " << factorials[100] << endl;
    return 0;
}