//
// Created by Carlos R. Arias on 3/3/23.
//

#ifndef EMPLOYEE_INHERITANCE_COMMISSION_EMPLOYEE_H
#define EMPLOYEE_INHERITANCE_COMMISSION_EMPLOYEE_H

#include "employee.h"

class CommissionEmployee: public Employee {
private:
    double _bonus;
public:
    CommissionEmployee(const string& name, double salary);
    CommissionEmployee(const CommissionEmployee& commissionEmployee);
    ~CommissionEmployee();
    const CommissionEmployee& operator=(const CommissionEmployee& rhs);
    string ToString()const;
    void GiveCommission(double commission);
    double GetPayment()const;
};


#endif //EMPLOYEE_INHERITANCE_COMMISSION_EMPLOYEE_H
