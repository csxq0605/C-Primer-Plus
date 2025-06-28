#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstname, lastname, fullname;
    cout << "enter your first name: ";
    getline(cin, firstname);
    cout << "Enter your last name: ";
    getline(cin, lastname);
    fullname = lastname + ", " + firstname;
    cout << "Here's the information in a single string: " << fullname << endl;
    return 0;
}