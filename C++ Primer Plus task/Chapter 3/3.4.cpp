#include <iostream>
using namespace std;

int main(){
    long long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    const int day = seconds / 86400;
    const int hours = (seconds % 86400) / 3600;
    const int minutes = (seconds % 3600) / 60;
    const int sec = seconds % 60;
    cout << seconds << " seconds = " << day << " days, " << hours << " hours, " << minutes << " minutes, " << sec << " seconds" << endl;
}