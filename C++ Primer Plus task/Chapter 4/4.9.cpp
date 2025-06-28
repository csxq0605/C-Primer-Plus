#include <iostream>
#include <string>
using namespace std;

int main(){
    struct CandyBar{
        string brand;
        double weight;
        int calories;
    };
    CandyBar * snack = new CandyBar[3];
    snack[0] = {"Mocha Munch", 2.3, 350};
    snack[1] = {"Choco Munch", 2.5, 400};
    snack[2] = {"Vanilla Munch", 2.7, 450};
    for (int i = 0; i<3; i++){
        cout << "Snack " << i+1 << endl;
        cout << "Brand: " << snack[i].brand << endl;
        cout << "Weight: " << snack[i].weight << endl;
        cout << "Calories: " << snack[i].calories << endl;
    }
    delete [] snack;
    return 0;
}