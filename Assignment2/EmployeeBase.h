#ifndef __EMPLOYEEBASE_H__
#define __EMPLOYEEBASE_H__

#include <cstdlib>
#include <string>
#include <list>
#include "Address.h"
#include "Designation.h"

using namespace std;

enum class Role { JAVA_PROG, SQL_PROG, C_PROG };

class EmployeeBase {
    public:
        EmployeeBase(const string name,
                     const Role role, int salary);
        ~EmployeeBase();
        void setDesignation(EmpDesig& desig);
        void addAddress(Address *address);
        string getName() const { return mName; }
        EmpDesig getDesignation() { return mDesig; }
        list<Address*> getAddressList() const { return addressList; }

    protected:
        string mName;
        Role mRole;
        int mSalary;
        EmpDesig mDesig;
        list<Address*> addressList;
};

#endif
