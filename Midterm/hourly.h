#include "employee.h"


#ifndef HOURLY_H
#define HOURLY_H

class HourlyEmployee : public Employee {
private:
    double hourlyRate;
    double hoursWorked;

public:
    HourlyEmployee(const std::string& n, const std::string& d, const std::string& t, double rate, double hours)
        : Employee(n, d, t), hourlyRate(rate), hoursWorked(hours) {}

    void calculatePay() const;
};

#endif // !HOURLY_H