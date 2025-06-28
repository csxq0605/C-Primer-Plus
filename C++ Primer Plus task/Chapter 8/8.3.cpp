#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void change(string & str){
    int n = str.size();
    for (int i = 0; i < n; i++){
        if (isalpha(str[i])){
            str[i] = toupper(str[i]);
        }
    }
}

int main(){
    while (1){
        string str;
        cout << "Enter a string (q to quit): ";
        getline(cin, str);
        if (str == "q") break;
        change(str);
        cout << str << endl;
    }
    return 0;
}