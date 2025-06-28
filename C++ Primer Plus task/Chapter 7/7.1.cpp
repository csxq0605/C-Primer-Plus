#include <iostream>
using namespace std;

double HarmonicMean(double x, double y);

int main(){
    double x, y;
    cout << "Enter two numbers: ";
    while (cin >> x >> y && x != 0 && y != 0){
        cout << "The harmonic mean of the two numbers " << x << " and " << y << " is " << HarmonicMean(x, y) << endl;
        cout << "Enter two numers: ";
    };
    return 0;
}

double HarmonicMean(double x, double y){
    return 2.0 * x * y / (x + y);
}