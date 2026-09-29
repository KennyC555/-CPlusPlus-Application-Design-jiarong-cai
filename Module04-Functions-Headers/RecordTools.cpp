#include <iostream>
#include "RecordTools.h"

using namespace std;

void addRecord(Student students[], int& count)
{
    cout << "Enter student name: ";
    cin >> students[count].name;

    cout << "Enter grade: ";
    cin >> students[count].grade;

    count++;

    cout << "Record added successfully!" << endl;
}

void displayRecords(const Student students[], int count)
{
    cout << "\nStudent Records:" << endl;

    for (int i = 0; i < count; i++)
    {
        cout << "Name: " << students[i].name
             << " | Grade: " << students[i].grade
             << endl;
    }
}

double calculateAverage(const Student students[], int count)
{
    if (count == 0)
    {
        return 0;
    }

    double total = 0;

    for (int i = 0; i < count; i++)
    {
        total += students[i].grade;
    }

    return total / count;
}