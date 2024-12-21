#include <iostream>
#include <string>
using namespace std;

// Base class for Employee
class Employee {
protected:
    string name;
    int id;
    int salary;

public:
    Employee(string n, int i, int s) : name(n), id(i), salary(s) {}
    virtual void displayEarnings() = 0; // Pure virtual function
};

// Derived class for Manager
class Manager : public Employee {
private:
    int rating;

public:
    Manager(string n, int i, int s, int r) : Employee(n, i, s), rating(r) {}

    void displayEarnings() override {
        int bonus = (rating * 0.1 * salary);
        int totalEarnings = salary + bonus;
        cout << "Employee: " << name << " (ID: " << id << ")\n";
        cout << "Role: Manager\n";
        cout << "Base Salary: " << salary << "\n";
        cout << "Bonus: " << bonus << "\n";
        cout << "Total Earnings: " << totalEarnings << "\n";
    }
};

// Derived class for Developer
class Developer : public Employee {
private:
    int extraHours;

public:
    Developer(string n, int i, int s, int h) : Employee(n, i, s), extraHours(h) {}

    void displayEarnings() override {
        int overtimeCompensation = extraHours * 500;
        int totalEarnings = salary + overtimeCompensation;
        cout << "Employee: " << name << " (ID: " << id << ")\n";
        cout << "Role: Developer\n";
        cout << "Base Salary: " << salary << "\n";
        cout << "Overtime Compensation: " << overtimeCompensation << "\n";
        cout << "Total Earnings: " << totalEarnings << "\n";
    }
};

int main() {
    int employeeType;
    cout << "Enter Employee Type (1 for Manager, 2 for Developer): ";
    cin >> employeeType;

    if (employeeType == 1) {
        string name;
        int id, salary, rating;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Rating (1-5): ";
        cin >> rating;

        if (rating < 1 || rating > 5) {
            cout << "Invalid rating.\n";
            return 0;
        }

        Manager manager(name, id, salary, rating);
        manager.displayEarnings();

    } else if (employeeType == 2) {
        string name;
        int id, salary, extraHours;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
        cout << "Enter Extra Hours Worked: ";
        cin >> extraHours;

        if (extraHours < 0 || extraHours > 100) {
            cout << "Invalid extra hours.\n";
            return 0;
        }

        Developer developer(name, id, salary, extraHours);
        developer.displayEarnings();

    } else {
        cout << "Invalid employee type.\n";
    }

    return 0;
}
