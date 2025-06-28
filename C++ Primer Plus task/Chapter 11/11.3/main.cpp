#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int max(int * ar, int n){
    int ans = ar[0];
    for (int i = 1; i < n; i++){
        if (ar[i] > ans){
            ans = ar[i];
        }
    }
    return ans;
}

int min(int * ar, int n){
    int ans = ar[0];
    for (int i = 1; i < n; i++){
        if (ar[i] < ans)
            ans = ar[i];
    }
    return ans;
}

double average(int * ar, int n){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += ar[i];
    }
    return sum / n;
}

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
    int n;
    cout << "Enter target distance (q to quit): ";
    cin >> target;
    cout << "Enter step length: ";
    cin >> dstep;
    cout << "Enter target times: ";
    cin >> n;
    int * Steps = new int[n];
    for (int i = 0; i < n; i++){
        while (result.magval() < target){
            direction = rand() % 360;
            step = Vector(dstep, direction, Vector::POL);
            steps++;
            result = result + step;
        }
        Steps[i] = steps;
        result = Vector(0.0, 0.0);
        steps = 0;
    }
    cout << "Target Distance: " << target << ", Step Length: " << dstep << endl;
    cout << "Max steps: " << max(Steps, n) << endl;
    cout << "Min steps: " << min(Steps, n) << endl;
    cout << "Average steps: " << average(Steps, n) << endl;
    delete [] Steps;
    cout << "Enter q to quit: ";
    while (cin.get() != 'q'){
        continue;
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n'){
        continue;
    }
    return 0;
}