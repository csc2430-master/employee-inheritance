//
// Created by Carlos R. Arias on 3/3/23.
//

#ifndef EMPLOYEE_INHERITANCE_HOURLY_WORKER_H
#define EMPLOYEE_INHERITANCE_HOURLY_WORKER_H

#include "employee.h"

class HourlyWorker : public Employee {
private:
    double _rate;
    double _hours;
public:
    HourlyWorker(const string& name, double base, double rate);
    HourlyWorker(const HourlyWorker& hourlyWorker);
    ~HourlyWorker();
    const HourlyWorker& operator=(const HourlyWorker& rhs);
    string ToString()const;
    void SetHours(double hours);
    double GetHours()const;
    double GetPayment()const;
};


#endif //EMPLOYEE_INHERITANCE_HOURLY_WORKER_H
