#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Enter words (to stop, type the word done):\n";
    string word;
    cin >> word;
    int count = 0;
    while (word != "done"){
        count += 1;
        cin >> word;
    };
    cout << "You entered a total of " << count << " words.\n";
    return 0;
}