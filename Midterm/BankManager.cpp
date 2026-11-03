
#include "BankManager.h"
#include <fstream>
#include <sstream>
#include <iomanip>

BankManager::BankManager() {
    accountCount = 0;
}

// Add accounts in sorted order by account ID
void BankManager::addAccount(int id, string name, double balance) {
    if (accountCount >= MAX_ACCOUNTS) {
        cout << "Maximum account limit reached!" << endl;
        return;
    }

    if (id <= 0 || balance < 0 || findAccount(id) != nullptr) {
        cout << "Invalid or duplicate account!" << endl;
        return;
    }

    int position = accountCount;

    while (position > 0 &&
           accounts[position - 1].getAccountID() > id) {
        accounts[position] = accounts[position - 1];
        position--;
    }

    accounts[position] = BankAccount(id, name, balance);
    accountCount++;

    cout << "Account created successfully!" << endl;
}

// Binary Search
BankAccount* BankManager::findAccount(int id) {
    int left = 0;
    int right = accountCount - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (accounts[middle].getAccountID() == id) {
            return &accounts[middle];
        }

        if (accounts[middle].getAccountID() < id) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return nullptr;
}

void BankManager::displayAllAccounts() const {
    if (accountCount == 0) {
        cout << "No accounts available." << endl;
        return;
    }

    for (int i = 0; i < accountCount; i++) {
        accounts[i].displayAccount();
    }
}

void BankManager::transfer(int fromID, int toID, double amount) {
    if (fromID == toID || amount <= 0) {
        cout << "Invalid transfer!" << endl;
        return;
    }

    BankAccount* sender = findAccount(fromID);
    BankAccount* receiver = findAccount(toID);

    if (sender == nullptr || receiver == nullptr) {
        cout << "Account not found!" << endl;
        return;
    }

    if (sender->withdraw(amount)) {
        receiver->deposit(amount);
        cout << "Transfer completed successfully!" << endl;
    }
}

void BankManager::saveToFile() const {
    ofstream outFile("bank_data.txt");

    if (!outFile) {
        cout << "Unable to save data!" << endl;
        return;
    }

    for (int i = 0; i < accountCount; i++) {
        outFile << accounts[i].getAccountID() << "|"
                << accounts[i].getOwnerName() << "|"
                << fixed << setprecision(2)
                << accounts[i].getBalance() << endl;
    }

    outFile.close();
    cout << "Data saved successfully!" << endl;
}

void BankManager::loadFromFile() {
    ifstream inFile("bank_data.txt");

    if (!inFile) {
        cout << "No saved data found. Starting fresh." << endl;
        return;
    }

    accountCount = 0;
    string line;

    while (getline(inFile, line)) {
        stringstream ss(line);
        int id;
        double balance;
        string name;
        char separator;

        if (ss >> id >> separator &&
            separator == '|' &&
            getline(ss, name, '|') &&
            ss >> balance) {

            addAccount(id, name, balance);
        }
    }

    inFile.close();
    cout << "Account data loaded!" << endl;
}
