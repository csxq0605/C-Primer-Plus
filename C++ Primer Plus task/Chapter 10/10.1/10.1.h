#ifndef H_10_1
#define H_10_1
#include <string>

class BankAccount{
    private:
        std::string name;
        std::string account;
        long double balance;
    public:
        BankAccount(const std::string & name, const std::string & account, long double balance = 0);
        BankAccount();
        void show() const;
        void deposit(long double cash);
        void withdraw(long double cash);
};
#endif