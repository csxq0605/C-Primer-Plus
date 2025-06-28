#include <iostream>
using namespace std;

int main(){
    int num, total = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num) {
        total += num;
        cout << "The total is " << total << " now." << endl;
        cout << "Enter a number: ";
        cin >> num;
    };
    cout << "The final total is " << total << endl;
    return 0;
}