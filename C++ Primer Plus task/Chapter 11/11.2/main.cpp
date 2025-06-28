#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main(){
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    double target;
    double dstep;
    int steps = 0;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target){
        cout << "Enter step length: ";
        if (!(cin >> dstep)){
            break;
        }
        cout << "Target Distance: " << target << ", Step Length: " << dstep << endl;
        while (result.magval() < target){
            direction = rand() % 360;
            step = Vector(dstep, direction, Vector::POL);
            steps++;
            result = result + step;
        }
        cout << "After " << steps << " steps, the subject has the following location:\n";
        result.rect_mode();
        cout << result << endl;
        cout << "or\n";
        result.polar_mode();
        cout << result << endl;
        cout << "Average outward distance per step = " << result.magval() / steps << endl;
        cout << endl;
        result = Vector(0.0, 0.0);
        steps = 0;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n'){
        continue;
    }
    return 0;
}