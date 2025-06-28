#include <iostream>
#include <cstring>
using namespace std;
#define Brand "Millennium Munch"

struct CandyBar{
    char brand[20];
    double weight;
    int calories;
};

void set(CandyBar & cb, const char * const brand = Brand, const double weight = 2.85, const int calories = 350){
    strcpy(cb.brand, brand);
    cb.weight = weight;
    cb.calories = calories;
}

void show(const CandyBar & cb){
    cout << "Brand: " << cb.brand << endl;
    cout << "Weight: " << cb.weight << endl;
    cout << "Calories: " << cb.calories << endl;
}

int main(){
    CandyBar cb;
    set(cb);
    show(cb);
    set(cb, "Mars", 3.5, 400);
    show(cb);
    return 0;
}