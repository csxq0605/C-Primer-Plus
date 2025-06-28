#include <iostream>
#include <string>
using namespace std;

int main(){
    struct person{
        string firstname;
        string lastname;
        char grade;
        int age;
    };
    person p1;
    cout << "What is your first name? ";
    getline(cin, p1.firstname);
    cout << "What is your last name? ";
    cin >> p1.lastname;
    cout << "What letter grade do you deserve? ";
    cin >> p1.grade;
    cout << "What is your age? ";
    cin >> p1.age;
    cout << "Name: " << p1.lastname << ", " << p1.firstname << endl;
    cout << "Grade: " << char(p1.grade+1) << endl;
    cout << "Age: " << p1.age << endl;
    return 0;
}