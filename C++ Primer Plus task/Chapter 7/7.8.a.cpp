#include <iostream>
using namespace std;

const char * Snames[4] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double * expences){
    for (int i = 0; i < 4; i++){
        cout << "Enter " << Snames[i] << " expences: ";
        cin >> expences[i];
    }
}

void show(double * expences){
    double total = 0;
    cout << "\nEXPENCES\n";
    for (int i = 0; i < 4; i++){
        cout << Snames[i] << ": $" << expences[i] << endl;
        total += expences[i];
    }
    cout << "Total: $" << total << endl;
}

int main(){
    double expences[4];
    fill(expences);
    show(expences);
    return 0;
}
