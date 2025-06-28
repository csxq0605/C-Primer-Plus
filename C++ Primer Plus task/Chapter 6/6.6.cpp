#include <iostream>
#include <string>
using namespace std;

struct donation{
    string name;
    double money;
};

bool sum(int * arr, int n){
    int sum = 0;
    for (int i = 0; i < n; ++i){
        sum += arr[i];
    };
    return sum == 0;
};

int main(){
    int n;
    cout << "Enter the number of donations: ";
    cin >> n;
    donation * donations = new donation[n];
    int GrandPatrons[n] = {0}, Patrons[n] = {0};
    cin.get();
    for (int i = 0; i < n; ++i){
        cout << "Enter the name of donation :";
        getline(cin, donations[i].name);
        cout << "Enter the number of money: ";
        cin >> donations[i].money;
        cin.get();
        if (donations[i].money > 10000){
            GrandPatrons[i] = 1;
        } else {
            Patrons[i] = 1;
        };
    };
    cout << "Grand Patrons: " << endl;
    if (sum(GrandPatrons, n)){
        cout << "none" << endl;
    }
    else{
        for (int i = 0; i < n; ++i){
            if (GrandPatrons[i]){
                cout << donations[i].name << " : " << donations[i].money << endl;
            };
        };
    };
    cout << "Patrons: " << endl;
    if (sum(Patrons, n)){
        cout << "none" << endl;
    }
    else{
        for (int i = 0; i < n; ++i){
            if (Patrons[i]){
                cout << donations[i].name << endl;
            };
        };
    };
    delete [] donations;
}