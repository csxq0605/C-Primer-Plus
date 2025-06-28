#include <iostream>
#include <string>
using namespace std;

struct car{
    string make;
    int year;
};

int main(){
    int n;
    cout << "How many cars do you wish to catalog? ";
    cin >> n;
    cin.get();
    car * cars = new car[n];
    for (int i = 1; i <= n; ++i){
        cout << "Car #" << i <<" :\n";
        cout << "Please enter the make: ";
        getline(cin, cars[i - 1].make);
        cout << "Please enter the year make: ";
        cin >> cars[i - 1].year;
        cin.get();
    };
    cout << "Here is your collection: \n";
    for (int i = 0; i < n; ++i){
        cout << cars[i].year << " " << cars[i].make << endl;
    };
    return 0;
}