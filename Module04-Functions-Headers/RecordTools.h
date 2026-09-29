#ifndef RECORDTOOLS_H
#define RECORDTOOLS_H

#include <string>
using namespace std;

struct Student
{
    string name;
    double grade;
};

void addRecord(Student students[], int& count);
void displayRecords(const Student students[], int count);
double calculateAverage(const Student students[], int count);

#endif