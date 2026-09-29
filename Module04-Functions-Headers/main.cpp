#include <iostream>
#include "RecordTools.h"

using namespace std;

int main()
{
    Student students[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== Student Record System =====" << endl;
        cout << "1. Add Record" << endl;
        cout << "2. Display Records" << endl;
        cout << "3. Calculate Average" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addRecord(students, count);
            break;

        case 2:
            displayRecords(students, count);
            break;

        case 3:
            cout << "Average grade: "
                 << calculateAverage(students, count)
                 << endl;
            break;

        case 4:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
        }

    } while (choice != 4);

    return 0;
}