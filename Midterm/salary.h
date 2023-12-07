#include "employee.h"

#ifndef SALARY_H
#define SALARY_H

class SalariedEmployee : public Employee {
private:
    double annualSalary;

public:
    SalariedEmployee(const std::string& n, const std::string& d, const std::string& t, double salary)
        : Employee(n, d, t), annualSalary(salary) {}

    void calculatePay() const;
};

#endif // !SALARY_H