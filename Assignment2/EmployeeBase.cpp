#include "EmployeeBase.h"

EmployeeBase::EmployeeBase(const string name,
                   const Role role, const int salary) :
                   mName(name), mRole(role), mSalary(salary)
{
}

EmployeeBase::~EmployeeBase()
{
    list<Address*>::iterator it;

    for (it = addressList.begin(); it != addressList.end(); it++) {
        delete *it;
    }
}

void EmployeeBase::setDesignation(EmpDesig& desig)
{
    mDesig = desig;
}

void EmployeeBase::addAddress(Address *address)
{
    addressList.push_back(address);
}

