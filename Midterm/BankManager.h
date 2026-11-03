
#ifndef BANKMANAGER_H
#define BANKMANAGER_H

#include "BankAccount.h"

class BankManager {
private:
    static const int MAX_ACCOUNTS = 100;

    BankAccount accounts[MAX_ACCOUNTS];
    int accountCount;

public:
    BankManager();

    void addAccount(int id, string name, double balance);

    BankAccount* findAccount(int id);

    void displayAllAccounts() const;

    void transfer(int fromID, int toID, double amount);

    void saveToFile() const;

    void loadFromFile();
};

#endif
