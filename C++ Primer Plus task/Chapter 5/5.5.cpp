#include <iostream>
#include <string>
using namespace std;

int main(){
    const string months[12] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[12], total = 0;
    for (int i = 0; i < 12; ++i){
        cin >> sales[i];
        cout << "The sales of " << months[i] << " is " << sales[i] << endl;
        total += sales[i];
    };
    cout << "The total sales of the year is " << total << endl;
    return 0;
}