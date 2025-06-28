#include <iostream>
using namespace std;

int main(){
    double Daphne = 100, Cleo = 100;
    int year = 0;
    while (Daphne >= Cleo) {
        Daphne += 10;
        Cleo *= 1.05;
        ++year;
    };
    cout << "After " << year << " years, Cleo's investment exceeds Daphne's investment." << endl;
    cout << "Daphne's investment: " << Daphne << endl;
    cout << "Cleo's investment: " << Cleo << endl;
    return 0;
}