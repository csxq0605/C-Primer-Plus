#include <iostream>
using namespace std;

double lightyearstoAstronomicalUnits(double lightyears){
    return lightyears * 63240;
}

int main(){
    cout << "Enter the number of light years: ";
    double lightyears;
    cin >> lightyears;
    cout << lightyears << " light years = " << lightyearstoAstronomicalUnits(lightyears) << " astronomical units." << endl;
    return 0;
}