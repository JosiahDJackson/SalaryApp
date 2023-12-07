#include "employee.h"
#include "hourly.h"
#include "salary.h"


int main() {
    HourlyEmployee hourlyEmployees[] = {
        HourlyEmployee("John Doe", "IT", "Programmer", 25.0, 45.0),
        HourlyEmployee("Jane Smith", "HR", "Manager", 30.0, 38.0),
        HourlyEmployee("Bob Johnson", "Finance", "Accountant", 20.0, 50.0)
    };

    SalariedEmployee salariedEmployees[] = {
        SalariedEmployee("Alice Brown", "Marketing", "Coordinator", 60000.0),
        SalariedEmployee("Charlie Davis", "Sales", "Representative", 75000.0),
        SalariedEmployee("Eva Wilson", "Operations", "Supervisor", 90000.0)
    };

    std::cout << "Hourly Employees:\n";
    for (const auto& employee : hourlyEmployees) {
        employee.calculatePay();
    }

    std::cout << "Salaried Employees:\n";
    for (const auto& employee : salariedEmployees) {
        employee.calculatePay();
    }

    return 0;
}