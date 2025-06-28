#include <iostream>
using namespace std;

int main(){
    double litersper100km, mpg;
    cout << "Enter the number of liters per 100 kilometers: ";
    cin >> litersper100km;
    mpg = 62.41 / (litersper100km / 3.785);
    cout << litersper100km << " liters per 100 kilometers = " << mpg << " miles per gallon" << endl;
}