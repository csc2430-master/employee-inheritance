//
// Created by Carlos R. Arias on 3/3/23.
//

#include "commission_employee.h"

#include <sstream>

using std::stringstream;

CommissionEmployee::CommissionEmployee(const string &name, double salary) : Employee(name, salary), _bonus(0) {

}

CommissionEmployee::CommissionEmployee(const CommissionEmployee &commissionEmployee): Employee(commissionEmployee), _bonus(commissionEmployee._bonus) {

}

CommissionEmployee::~CommissionEmployee() {

}

const CommissionEmployee &CommissionEmployee::operator=(const CommissionEmployee &rhs) {
    return *this;
}
// TODO Include the Employee::ToString, make it look good
string CommissionEmployee::ToString() const {
    stringstream ss;
    ss << "Bonus: " << _bonus;
    return ss.str();
}

void CommissionEmployee::GiveCommission(double commission) {
    _bonus = commission;
}

double CommissionEmployee::GetPayment() const {
    return Employee::GetPayment() + _bonus;
}
