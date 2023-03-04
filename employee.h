//
// Created by Carlos R. Arias on 3/3/23.
//

#ifndef EMPLOYEE_INHERITANCE_EMPLOYEE_H
#define EMPLOYEE_INHERITANCE_EMPLOYEE_H

#include <string>

using std::string;


class Employee {
private:
    char* _name;
    double _baseSalary;
public:
    Employee(const string& name, double baseSalary = 0.0);
    Employee(const Employee& employee);
    ~Employee();
    const Employee& operator=(const Employee& rhs);
    string ToString()const;
    double GetPayment()const;
    void GiveRaise(double ratio);
};


#endif //EMPLOYEE_INHERITANCE_EMPLOYEE_H
