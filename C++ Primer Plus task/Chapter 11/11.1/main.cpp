#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "vect.h"

int main(){
    using namespace std;
    using VECTOR::Vector;
    ofstream fout;
    fout.open("vect.txt");
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
        fout << "Target Distance: " << target << ", Step Length: " << dstep << endl;
        fout << steps << ": " << result << endl;
        while (result.magval() < target){
            direction = rand() % 360;
            step = Vector(dstep, direction, Vector::POL);
            steps++;
            result = result + step;
            fout << steps << ": " << result << endl;
        }
        fout << "After " << steps << " steps, the subject has the following location:\n";
        result.rect_mode();
        fout << result << endl;
        fout << "or\n";
        result.polar_mode();
        fout << result << endl;
        fout << "Average outward distance per step = " << result.magval() / steps << endl;
        fout << endl;
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