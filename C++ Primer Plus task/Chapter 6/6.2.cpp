#include <iostream>
using namespace std;

int main(){
    double donations[10];
    int count = 0;
    double average = 0, sum = 0;
    cout << "Enter donation amount (q to quit):" << endl;
    while (count < 10 && (cin >> donations[count])){
        sum += donations[count];
        ++count;
    };
    average = sum / count;
    int num = 0;
    for (int i = 0; i < count; ++i){
        if (donations[i] > average)
            ++num;
    };
    cout << "Average donation: " << average << endl;
    cout << "Number of donations greater than average: " << num << endl;
    return 0;
}