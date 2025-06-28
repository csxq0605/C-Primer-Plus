#include <iostream>
#include <string>
using namespace std;

int main(){
    const string months[12] {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[3][12], total[3]{0};
    for (int j = 0; j < 3; ++j){
        for (int i = 0; i < 12; ++i){
            cin >> sales[j][i];
            cout << "The sales of " << months[i] << " of year " << j + 1 << " is " << sales[j][i] << endl;
            total[j] += sales[j][i];
        };
        cout << "The total sales of year " << j + 1 << " is " << total[j] << endl;
    };
    cout << "The total sales of the three years is " << total[0] + total[1] + total[2] << endl;
    return 0;
}