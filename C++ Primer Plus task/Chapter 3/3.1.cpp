#include <iostream>
using namespace std;

const double mod = 12.0;
int main(){
    int inches;
    cout << "Enter your height in inches:__\b\b";
    cin >> inches;
    double feet = inches / mod;
    cout << "Your height is " << feet << " feet." << endl;
}