#include <iostream>
#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
protected:
    std::string name;
    std::string department;
    std::string title;

public:
    Employee(const std::string& n, const std::string& d, const std::string& t)
        : name(n), department(d), title(t) {}

    virtual ~Employee() {}

    virtual void displayInfo() const {
        std::cout << "Name: " << name << "\nDepartment: " << department << "\nTitle: " << title << "\n";
    }
};

#endif // !EMPLOYEE_H


