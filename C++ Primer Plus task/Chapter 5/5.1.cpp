#include <iostream>
using namespace std;

int main(){
    int min, max, total = 0;
    cout << "Enter the minimum and maximum values: ";
    cin >> min >> max;
    for (int i = min; i <= max; i++){
        total += i;
    };
    cout << "The sum of all integers between " << min << " and " << max << " is " << total << endl;
    return 0;
}