#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ifstream file;
    string filename;
    cout << "Enter the name of file: ";
    cin >> filename;
    file.open(filename);
    int count = 0;
    char ch;
    while (file >> ch){
        ++count;
    };
    cout << count << " characters in " << filename << endl;
    return 0;
}