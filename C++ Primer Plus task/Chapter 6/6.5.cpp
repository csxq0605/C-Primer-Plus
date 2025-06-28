#include <iostream>
using namespace std;

int main(){
    int trarps;
    cout << "Enter the number of trarps: ";
    while (cin >> trarps && trarps >= 0){
        if (trarps <= 5000){
            cout << "Do not need to pay tax." << endl; 
        }
        else if (trarps <= 15000){
            cout << "You need to pay " << 0.10 * (trarps - 5000) << " tax.\n";
        }
        else if (trarps <= 35000){
            cout << "You need to pay " << 0.10 * 10000 + 0.15 * (trarps - 15000) << " tax.\n";
        }
        else{
            cout << "You need to pay " << 0.10 * 10000 + 0.15 * 20000 + 0.20 * (trarps - 35000) << " tax.\n";
        };
        cout << "Enter the number of trarps: ";
    };
    return 0;
}