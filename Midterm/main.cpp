
#include "BankManager.h"
#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main() {
    BankManager bank;
    bank.loadFromFile();

    int choice;
    int id;
    int fromID;
    int toID;
    double amount;
    string name;

    cout << fixed << setprecision(2);

    cout << "\n====================================\n";
    cout << "       BANK ACCOUNT SIMULATOR       \n";
    cout << "====================================\n";

    // Demonstrate data types and sizes
    cout << "\n--- Data Type Sizes ---\n";
    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Size of double: " << sizeof(double) << " bytes\n";
    cout << "Size of char: " << sizeof(char) << " bytes\n";
    cout << "Size of string object: " << sizeof(string) << " bytes\n";

    do {
        cout << "\n========== MAIN MENU ==========\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Account\n";
        cout << "5. Display All Accounts\n";
        cout << "6. Transfer Money\n";
        cout << "7. Save Data\n";
        cout << "8. Exit\n";
        cout << "===============================\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {

        case 1:
            cout << "Enter Account ID: ";
            cin >> id;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter Owner Name: ";
            getline(cin, name);

            cout << "Enter Initial Balance: $";
            cin >> amount;

            if (cin.fail()) {
                cout << "Invalid balance input!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }

            bank.addAccount(id, name, amount);
            break;

        case 2:
            cout << "Enter Account ID: ";
            cin >> id;

            cout << "Enter Deposit Amount: $";
            cin >> amount;

            if (cin.fail()) {
                cout << "Invalid amount!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }

            {
                BankAccount* account = bank.findAccount(id);

                if (account != nullptr) {
                    account->deposit(amount);
                } else {
                    cout << "Account not found!\n";
                }
            }
            break;

        case 3:
            cout << "Enter Account ID: ";
            cin >> id;

            cout << "Enter Withdrawal Amount: $";
            cin >> amount;

            if (cin.fail()) {
                cout << "Invalid amount!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }

            {
                BankAccount* account = bank.findAccount(id);

                if (account != nullptr) {
                    account->withdraw(amount);
                } else {
                    cout << "Account not found!\n";
                }
            }
            break;

        case 4:
            cout << "Enter Account ID: ";
            cin >> id;

            {
                BankAccount* account = bank.findAccount(id);

                if (account != nullptr) {
                    account->displayAccount();
                } else {
                    cout << "Account not found!\n";
                }
            }
            break;

        case 5:
            bank.displayAllAccounts();
            break;

        case 6:
            cout << "Enter Sender ID: ";
            cin >> fromID;

            cout << "Enter Receiver ID: ";
            cin >> toID;

            cout << "Enter Transfer Amount: $";
            cin >> amount;

            if (cin.fail()) {
                cout << "Invalid amount!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }

            bank.transfer(fromID, toID, amount);
            break;

        case 7:
            bank.saveToFile();
            break;

        case 8:
            bank.saveToFile();
            cout << "Thank you for using our bank system!\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 8);

    return 0;
}
