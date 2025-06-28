#include <iostream>
using namespace std;

const char * Snames[4] = {"Spring", "Summer", "Fall", "Winter"};

struct expences{
    double expences[4];
};

void fill(expences * expence){
    for (int i = 0; i < 4; i++){
        cout << "Enter " << Snames[i] << " expences: ";
        cin >> expence->expences[i];
    }
}

void show(expences expence){
    double total = 0;
    cout << "\nEXPENCES\n";
    for (int i = 0; i < 4; i++){
        cout << Snames[i] << ": $" << expence.expences[i] << endl;
        total += expence.expences[i];
    }
    cout << "Total: $" << total << endl;
}

int main(){
    expences expence;
    fill(&expence);
    show(expence);
    return 0;
}
