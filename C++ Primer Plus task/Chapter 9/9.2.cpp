#include <iostream>
#include <string>
using namespace std;

void strcount(const string & str){
    static int total = 0;
    int count = 0;
    for (int i = 0; i < str.size(); i++){
        if ((str[i] >= 'A' && str[i] <= 'Z') or (str[i] >= 'a' and str[i] <= 'z'))
            count++;
    }
    total += count;
    cout << "\"" << str << "\" contains " << count << " characters\n";
    cout << total << " characters total\n";
}

int main(){
    string input;
    cout << "Enter a line:\n";
    while (getline(cin, input) && input != ""){
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
    }
    cout << "Bye!\n";
    return 0;
}