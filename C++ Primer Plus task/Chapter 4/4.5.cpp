#include <iostream>
#include <string>
using namespace std;

int main(){
    struct CandyBar{
        string brand;
        double weight;
        int calories;
    };
    CandyBar snack {"Mocha Munch", 2.3, 350};
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calories: " << snack.calories << endl;
    return 0;
}