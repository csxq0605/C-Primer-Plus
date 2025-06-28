#include "stonewt.h"
using namespace std;

int main(){
    Stonewt * Stonewts = new Stonewt[6];
    Stonewts[0] = Stonewt(275);
    Stonewts[1] = Stonewt(285.7);
    Stonewts[2] = Stonewt(21, 8);
    const Stonewt compare = Stonewt(11, 0);
    double pounds;
    for (int i = 3; i < 6; i++){
        cout << "Enter the weight of the " << i + 1 << "th object in pounds: ";
        cin >> pounds;
        Stonewts[i] = Stonewt(pounds);
    }
    int count = 0;
    Stonewt max = Stonewts[0];
    Stonewt min = Stonewts[0];
    for (int i = 0; i < 6; i++){
        if (Stonewts[i] >= compare)
            count++;
        if (Stonewts[i] > max)
            max = Stonewts[i];
        else if (Stonewts[i] < min)
            min = Stonewts[i];
    }
    cout << "The number of objects that weigh more than or equal to 11 stones: " << count << endl;
    cout << "The heaviest object: " << max;
    cout << "The lightest object: " << min;
    delete [] Stonewts;
    cout << "Enter q to quit: ";
    while (cin.get() != 'q'){
        continue;
    }
    cout << "Bye!\n";
    return 0;
}