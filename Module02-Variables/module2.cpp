#include <iostream>
#include <string>
using namespace std;

void addStudent() {
    cout << "Add Student selected." << endl;
}

void viewStudents() {
    cout << "View Students selected." << endl;
}

void searchStudent() {
    cout << "Search Student selected." << endl;
}

void deleteStudent() {
    cout << "Delete Student selected." << endl;
}

int main() {
    int choice = 0;

    while (choice != 5) {

        cout << "\n===== STUDENT RECORD SYSTEM =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Delete Student" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an option: ";

        cin >> choice;

        switch (choice) {

            case 1:
                addStudent();
                break;

            case 2:
                viewStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}