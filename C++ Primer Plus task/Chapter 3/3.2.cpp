#include <iostream>
using namespace std;
const double feettoinches = 12.0;
const double inchestometers = 0.0254;
const double kologramstofunt = 2.2;

int main(){
    int feet, inches, funt;
    cout << "Enter your height in feet: ";
    cin >> feet;
    cout << "Enter your height in inches: ";
    cin >> inches;
    cout << "Enter your weight in funt: ";
    cin >> funt;
    int heightininches = feet * feettoinches + inches;
    double heightinmeters = heightininches * inchestometers;
    double weightinkolograms = funt / kologramstofunt;
    double BMI = weightinkolograms / (heightinmeters * heightinmeters);
    cout << "Your BMI is " << BMI << endl;
}