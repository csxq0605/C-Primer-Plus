#include <iostream>
#include <fstream>
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
    ifstream file;
    int n;
    string filename;
    cout << "Enter the name of file: ";
    cin >> filename;
    file.open(filename);
    file >> n;
    donation * donations = new donation[n];
    int GrandPatrons[n] = {0}, Patrons[n] = {0};
    file.get();
    for (int i = 0; i < n; ++i){
        getline(file, donations[i].name);
        file >> donations[i].money;
        file.get();
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