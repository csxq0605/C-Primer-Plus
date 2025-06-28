#include <iostream>
using namespace std;
 
int main(){
    long long world, us;
    cout << "Enter the world's population: ";
    cin >> world;
    cout << "Enter the population of the US: ";
    cin >> us;
    double percent = double(us) / world * 100;
    cout << "The population of the US is " << percent << "% of the world population" << endl;
    return 0;
}