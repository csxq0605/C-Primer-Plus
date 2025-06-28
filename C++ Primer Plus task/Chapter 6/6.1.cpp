#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char ch;
    cout << "Enter characters; enter @ to quit:" << endl;
    while (cin.get(ch) and ch != '@'){
        if (isupper(ch))
            cout << (char)tolower(ch);
        else if (islower(ch))
            cout << (char)toupper(ch);
        else
            cout << ch;
    };
    return 0;
}