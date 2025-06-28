#include <iostream>
#include <array>
using namespace std;

int main(){
    array<double, 3>score;
    for (int i = 0; i < 3; i++){
        cout << "Enter the score of 40m running: ";
        cin >> score[i];
    }
    cout << "The average score of 40m running is: " << (score[0] + score[1] + score[2]) / 3 << endl;
}