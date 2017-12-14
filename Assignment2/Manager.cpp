#include "Manager.h"

Manager::Manager(const string name, const Role role,
                 const int salary) : EmployeeBase (name, role, salary)
{
    EmpDesig mng = EmpDesig::MANAGER;
    setDesignation(mng);
}

void Manager::addEmployee(Employee *emp)
{
    employeeList.push_back(emp);
}

