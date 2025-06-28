#include <iostream>
using namespace std;
#include <cstring>

struct stringy {
    char * str;
    int ct;
};

void set(stringy & beany, const char * str){
    beany.str = new char[strlen(str) + 1];
    strcpy(beany.str, str);
    beany.ct = strlen(str);
}

void show(const stringy & beany, const int n = 1){
    for (int i = 0; i < n; i++){
        cout << beany.str << endl;
    }
}

void show(const char * str, const int n = 1){
    for (int i = 0; i < n; ++i){
        cout << str << endl;
    }
}

int main(){
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    delete [] beany.str;
    return 0;
}