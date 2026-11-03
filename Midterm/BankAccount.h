
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountID;
    string ownerName;
    double balance;

public:
    BankAccount();
    BankAccount(int id, string name, double initialBalance);

    int getAccountID() const;
    string getOwnerName() const;
    double getBalance() const;

    void deposit(double amount);
    bool withdraw(double amount);
    void displayAccount() const;
};

#endif
