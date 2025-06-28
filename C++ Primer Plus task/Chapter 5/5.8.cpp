#include <iostream>
#include <cstring>
using namespace std;

int main(){
    cout << "Enter words (to stop, type the word done):\n";
    char word[20];
    cin >> word;
    int count = 0;
    while (strcmp(word, "done")){
        count += 1;
        cin >> word;
    };
    cout << "You entered a total of " << count << " words.\n";
    return 0;
}