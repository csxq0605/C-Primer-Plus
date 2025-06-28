#include <iostream>
using namespace std;

int main(){
    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore p) pianist\n";
    cout << "t) tree g) game\n";
    char choice;
    bool flag = true;
    while (flag){
        cin >> choice;
        switch (choice){
            case 'c':
                cout << "A tiger is a carnivore." << endl;
                flag = false;
                break;
            case 'p':
                cout << "Ludwig van Beethoven was a pianist." << endl;
                flag = false;
                break;
            case 't':
                cout << "A maple is a tree." << endl;
                flag = false;
                break;
            case 'g':
                cout << "Monopoly is a game." << endl;
                flag = false;
                break;
            default:
                cout << "Please enter a c, p, t, or g: ";
                break;
        };
    };
    return 0;
}