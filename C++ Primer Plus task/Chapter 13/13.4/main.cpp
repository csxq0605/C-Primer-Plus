#include "port.h"
using namespace std;

int main(){
    Port p1("Gallo", "tawny", 20);
    Port p2 = p1;
    Port p3;
    p3 = p1;
    p1.Show();
    p2.Show();
    p3.Show();
    p1 += 5;
    p1.Show();
    p1 -= 10;
    p1.Show();
    cout << p1 << endl;
    VintagePort vp1("Gallo", 20, "The Noble", 1990);
    VintagePort vp2 = vp1;
    VintagePort vp3;
    vp3 = vp1;
    vp1.Show();
    vp2.Show();
    vp3.Show();
    vp1 += 5;
    vp1.Show();
    vp1 -= 10;
    vp1.Show();
    cout << vp1 << endl;
    std::cout << "Enter q to quit: ";
    while (std::cin.get() != 'q'){
        continue;
    }
    std::cout << "Bye!\n";
    return 0;
}