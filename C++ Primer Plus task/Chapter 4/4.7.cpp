#include <iostream>
#include <string>
using namespace std;

int main(){
    struct Pizza{
        string brand;
        int diameter;
        double weight;
    };
    Pizza pizza {};
    cout << "Enter the brand of the pizza: ";
    getline(cin, pizza.brand);
    cout << "Enter the diameter of the pizza: ";
    cin >> pizza.diameter;
    cout << "Enter the weight of the pizza: ";
    cin >> pizza.weight;
    cout << "Brand: " << pizza.brand << endl;
    cout << "Diameter: " << pizza.diameter << endl;
    cout << "Weight: " << pizza.weight << endl;
    return 0;
}