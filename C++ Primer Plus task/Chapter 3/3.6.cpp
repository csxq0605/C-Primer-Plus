#include <iostream>
using namespace std;

int main(){
    int miles, gallons;
    cout << "Enter the number of miles: ";
    cin >> miles;
    cout << "Enter the number of gallons: ";
    cin >> gallons;
    double mpg = double(miles) / gallons;
    cout << "Your car can drive " << mpg << " miles per gallon" << endl;
}