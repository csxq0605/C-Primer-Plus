#include <iostream>
#include <string>
using namespace std;

void print(const string * str, int & count, int n = 0){
    ++count;
    if (!n){
        cout << *str << endl;
    }
    else{
        for (int i = 0; i < count; ++i){
            cout << *str << endl;
        }
    }
}

int main(){
    string str;
    cin >> str;
    int count = 0;
    print(&str, count);
    print(&str, count, 1);
    return 0;
}