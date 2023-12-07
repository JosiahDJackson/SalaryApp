#include "employee.h"
#include "salary.h"

void SalariedEmployee::calculatePay() const {
    double weeklyPay = annualSalary / 52;
    double taxAmount = 0.3 * weeklyPay;
    double netPay = weeklyPay - taxAmount;

    displayInfo();
    std::cout << "Gross Pay: $" << weeklyPay << "\nTax Amount: $" << taxAmount << "\nNet Pay: $" << netPay << "\n\n";
}