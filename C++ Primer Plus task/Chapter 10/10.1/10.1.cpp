#include <iostream>
#include "10.1.h"

BankAccount::BankAccount(const std::string & name, const std::string & account, long double balance){
    this->name = name;
    this->account = account;
    this->balance = balance;
}

BankAccount::BankAccount(){
    name = "No name";
    account = "No account";
    balance = 0;
}

void BankAccount::show() const{
    using namespace std;
    cout << "Name: " << name << endl;
    cout << "Account: " << account << endl;
    cout << "Balance: " << balance << endl;
}

void BankAccount::deposit(long double cash){
    using namespace std;
    balance += cash;
    cout << "You have deposited " << cash << " to your account." << endl;
    cout << "Your current balance is " << balance << endl;
}

void BankAccount::withdraw(long double cash){
    using namespace std;
    if (cash <= balance){
        balance -= cash;
        cout << "You have withdrawn " << cash << " from your account." << endl;
        cout << "Your current balance is " << balance << endl;
    }
    else{
        cout << "You don't have enough money in your account." << endl;
    }
}