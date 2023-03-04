cmake_minimum_required(VERSION 3.24)
project(employee_inheritance)

set(CMAKE_CXX_STANDARD 17)

add_executable(employee_inheritance main.cpp employee.cpp employee.h commission_employee.cpp commission_employee.h hourly_worker.cpp hourly_worker.h)
