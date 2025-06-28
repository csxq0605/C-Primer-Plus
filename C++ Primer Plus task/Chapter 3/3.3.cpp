#include <iostream>
using namespace std;
const double mod1 = 60;
const double mod2 = 60 * 60;

int main(){
    double degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes: ";
    cin >> minutes;
    cout << "Finally, enter the seconds: ";
    cin >> seconds;
    double latitude = degrees + minutes / mod1 + seconds / mod2;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << latitude << " degrees" << endl;
    return 0;
}