#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#include <cstdlib>
#include <string>
#include <list>
#include "EmployeeBase.h"
#include "Address.h"
#include "Designation.h"

using namespace std;

class Employee : public EmployeeBase {
    public:
        Employee(const string name,
                 const Role role, int salary);
        ~Employee();
};

#endif
