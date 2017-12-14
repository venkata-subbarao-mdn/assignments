#ifndef __MANAGER_H__
#define __MANAGER_H__

#include <list>
#include "Employee.h"

using namespace std;

class Manager : public EmployeeBase {
    public:
        Manager(const string name, const Role role, const int salary);
        list<Employee *> getEmployees() const { return employeeList; }
        void addEmployee(Employee *emp);

    private:
        list<Employee *> employeeList;
};

#endif
