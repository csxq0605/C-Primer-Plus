#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius){
    return 1.8 * celsius + 32.0;
}

int main(){
    cout << "Please enter a Celsius value: ";
    double celsius;
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << celsiusToFahrenheit(celsius) << " degrees Fahrenheit." << endl;
    return 0;
}