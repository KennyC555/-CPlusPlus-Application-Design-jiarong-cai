
#include "BankAccount.h"
#include <iomanip>

BankAccount::BankAccount() {
    accountID = 0;
    ownerName = "Unknown";
    balance = 0.0;
}

BankAccount::BankAccount(int id, string name, double initialBalance) {
    accountID = id;
    ownerName = name;
    balance = (initialBalance >= 0) ? initialBalance : 0.0;
}

int BankAccount::getAccountID() const {
    return accountID;
}

string BankAccount::getOwnerName() const {
    return ownerName;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposit successful!" << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
}

bool BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawal successful!" << endl;
        return true;
    }

    cout << "Invalid amount or insufficient funds!" << endl;
    return false;
}

void BankAccount::displayAccount() const {
    cout << fixed << setprecision(2);
    cout << "\nAccount ID: " << accountID << endl;
    cout << "Owner: " << ownerName << endl;
    cout << "Balance: $" << balance << endl;
}
