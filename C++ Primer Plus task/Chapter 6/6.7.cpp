#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string ch;
    int vowels = 0, consonants = 0, others = 0;
    cout << "Enter eords (q to quit):" << endl;
    while (cin >> ch && ch != "q"){
        if (isalpha(ch[0])){
            switch (ch[0]){
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    ++vowels;
                    break;
                default:
                    ++consonants;
            };
        }
        else{
            ++others;
        };
    };
    cout << vowels << " words beginning with vowels\n";
    cout << consonants << " words beginning with consonants\n";
    cout << others << " others\n";
    return 0;
}