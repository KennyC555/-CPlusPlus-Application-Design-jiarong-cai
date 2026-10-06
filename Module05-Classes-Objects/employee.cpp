#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double hourlyRate;

public:
    // Constructor
    Employee(string employeeName, int employeeId, double rate) {
        name = employeeName;
        id = employeeId;
        hourlyRate = rate;
    }

    // Member function 1
    void displayEmployee() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Hourly Rate: $" << hourlyRate << endl;
    }

    // Member function 2
    double calculateWeeklyPay(double hours) {
        return hourlyRate * hours;
    }

    // Getter
    string getName() {
        return name;
    }

    // Setter
    void setHourlyRate(double newRate) {
        hourlyRate = newRate;
    }
};

int main() {
    Employee employee1("Kenny", 101, 20.00);
    Employee employee2("Alex", 102, 22.50);

    cout << "Employee 1:" << endl;
    employee1.displayEmployee();
    cout << "Weekly Pay (40 hours): $"
         << employee1.calculateWeeklyPay(40) << endl;

    cout << endl;

    cout << "Employee 2:" << endl;
    employee2.displayEmployee();
    cout << "Weekly Pay (40 hours): $"
         << employee2.calculateWeeklyPay(40) << endl;

    return 0;
}