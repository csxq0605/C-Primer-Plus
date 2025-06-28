#include "stonewt.h"
using namespace std;

int main(){
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);
    cout << "The celebrity weighed ";
    cout << incognito << endl;
    cout << "The detective weighed ";
    cout << wolfe << endl;
    cout << "The President weighed ";
    cout << taft << endl;
    cout << "The celebrity + the detective = ";
    cout << incognito + wolfe << endl;
    cout << "The detective - the President = ";
    cout << wolfe - taft << endl;
    cout << "The President * 2 = ";
    cout << taft * 2 << endl;
    cout << "2 * The President = ";
    cout << 2 * taft << endl;
    cout << "The default mode is now set to LBS_INT\n";
    taft.set_mode(Stonewt::LBS_INT);
    cout << "The President weighed ";
    cout << taft << endl;
    cout << "The default mode is now set to LBS_DOUBLE\n";
    taft.set_mode(Stonewt::LBS_DOUBLE);
    cout << "The President weighed ";
    cout << taft << endl;
    cout << "The default mode is now set to STN\n";
    taft.set_mode(Stonewt::STN);
    cout << "The President weighed ";
    cout << taft << endl;
    cout << "Enter q to quit: ";
    while (cin.get() != 'q'){
        continue;
    }
    cout << "Bye!\n";
    return 0;
}