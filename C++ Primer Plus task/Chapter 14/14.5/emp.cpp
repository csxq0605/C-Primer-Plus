#include "emp.h"
using namespace std;

abstr_emp::~abstr_emp(){}

void abstr_emp::ShowAll() const{
    cout << "First name: " << fname << endl;
    cout << "Last name: " << lname << endl;
    cout << "Job: " << job << endl;
}

void abstr_emp::SetAll(){
    cout << "Enter first name: ";
    getline(cin, fname);
    cout << "Enter last name: ";
    getline(cin, lname);
    cout << "Enter job: ";
    getline(cin, job);
}

ostream & operator <<(ostream & os, const abstr_emp & e){
    os << e.fname << ", " << e.lname << ": " << e.job;
    return os;
}

void manager::SetAll(){
    abstr_emp::SetAll();
    cout << "Enter in charge of: ";
    cin >> inchargeof;
    while(cin.get() != '\n')
        continue;
}

void fink::SetAll(){
    abstr_emp::SetAll();
    cout << "Enter who reports to: ";
    getline(cin, reportsto);
}

void highfink::ShowAll() const{
    abstr_emp::ShowAll();
    cout << "In charge of: " << manager::InChargeOf() << endl;
    cout << "Reports to: " << fink::ReportsTo() <<endl;
}

void highfink::SetAll(){
    abstr_emp::SetAll();
    cout << "Enter in charge of: ";
    cin >> manager::InChargeOf();
    while (cin.get() != '\n')
        continue;
    cout << "Enter who reports to: ";
    getline(cin, fink::ReportsTo());
}