//
// Created by Carlos R. Arias on 3/3/23.
//

#include "hourly_worker.h"
#include <sstream>

using std::stringstream;

HourlyWorker::HourlyWorker(const string &name, double base, double rate): Employee(name,base), _rate(rate), _hours(0) {

}

HourlyWorker::HourlyWorker(const HourlyWorker &hourlyWorker): Employee(hourlyWorker), _hours(hourlyWorker._hours), _rate(hourlyWorker._rate) {

}

HourlyWorker::~HourlyWorker() {

}

const HourlyWorker &HourlyWorker::operator=(const HourlyWorker &rhs) {
    return *this;
}
// TODO make it pretty
string HourlyWorker::ToString() const {
    stringstream ss;
    ss << "Hourly Rate: " << _rate << ", Hours: " << _hours;
    return ss.str();
}

void HourlyWorker::SetHours(double hours) {
    _hours = hours;
}

double HourlyWorker::GetHours() const {
    return _hours;
}

double HourlyWorker::GetPayment() const {
    return Employee::GetPayment() + _hours * _rate;
}
