#include "employee.h"
#include "hourly.h"

void HourlyEmployee::calculatePay() const {
    double overtimePay = 0.0;
    double regularPay;

    if (hoursWorked > 40) {
        overtimePay = (hoursWorked - 40) * 1.5 * hourlyRate;
        regularPay = 40 * hourlyRate;
    }
    else {
        regularPay = hoursWorked * hourlyRate;
    }

    double grossPay = regularPay + overtimePay;
    double taxAmount = 0.3 * grossPay;
    double netPay = grossPay - taxAmount;

    displayInfo();
    std::cout << "Hours Worked: " << hoursWorked << "\nHourly Rate: $" << hourlyRate << "\nOvertime Pay: $" << overtimePay
        << "\nRegular (Gross) Pay: $" << grossPay << "\nTax Amount: $" << taxAmount << "\nNet Pay: $" << netPay << "\n\n";
}