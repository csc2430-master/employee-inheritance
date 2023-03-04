//
// Created by Carlos R. Arias on 3/3/23.
//

#include "employee.h"
#include <sstream>
#include <cstring>

using std::stringstream;

Employee::Employee(const string &name, double baseSalary): _baseSalary(baseSalary) {
    _name = new char[name.length() + 1];
    strcpy(_name, name.c_str());
}

Employee::Employee(const Employee &employee): _baseSalary(employee._baseSalary) {
    _name = new char[strlen(employee._name) + 1];
    strcpy(_name, employee._name);
}

Employee::~Employee() {
    delete[] _name;
}

const Employee &Employee::operator=(const Employee &rhs) {
    return *this;
}

string Employee::ToString() const {
    stringstream ss;
    ss << "Name: " << _name << ", Base Salary: " << _baseSalary;
    return ss.str();
}

double Employee::GetPayment() const {
    return _baseSalary;
}

void Employee::GiveRaise(double ratio) {
    _baseSalary *= (1 + ratio);
}
