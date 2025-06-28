#include <iostream>
using namespace std;

long double probability(unsigned int numbers, unsigned int picks){
    long double result = 1.0;
    for (unsigned int n = numbers, p = picks; p > 0; n--, p--){
        result = result / n * p;
    }
    return result;
}

int main(){
    cout << "You have one chance in " << probability(47, 5) * probability(27, 1) << " of winning." << endl;
}