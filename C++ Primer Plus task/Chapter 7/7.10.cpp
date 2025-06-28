#include <iostream>
using namespace std;

double add(double x, double y){
    return x + y;
}

double divide(double x, double y){
    return x / y;
}

double mutiply(double x, double y){
    return x * y;
}

double calculate(double x, double y, double (*ps)(double, double)){
    return ps(x, y);
}

int main(){
    double x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    double (*ps[3])(double, double) = {add, divide, mutiply};
    for (int i = 0; i < 3; i++){
        cout << calculate(x, y, ps[i]) << endl;
    }
    return 0;
}