#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char firstname[20], lastname[20], fullname[20];
    cout << "enter your first name: ";
    cin.getline(firstname, 20);
    cout << "Enter your last name: ";
    cin.getline(lastname, 20);
    strcpy(fullname, lastname);
    strcat(fullname, ", ");
    strcat(fullname, firstname);
    cout << "Here's the information in a single string: " << fullname << endl;
    return 0;
}