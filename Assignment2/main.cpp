#include "Address.h"
#include "Company.h"
#include "Designation.h"
#include "Employee.h"
#include <iostream>

using namespace std;

int main()
{
    Address *addr1, *addr2, *addr3;

    Company *cmp = new Company("XYZ");

    // Company wide designations
    EmpDesig manager = EmpDesig::MANAGER;
    EmpDesig associate = EmpDesig::ASSOCIATE;
    EmpDesig developer = EmpDesig::DEVELOPER;
    EmpDesig srdeveloper = EmpDesig::SR_DEVELOPER;

    const Role javaProg = Role::JAVA_PROG;
    const Role sqlProg = Role::SQL_PROG;
    const Role cProg = Role::C_PROG;

    const AddressType permanent = AddressType::PERMANENT;
    const AddressType current = AddressType::CURRENT;
    const AddressType office = AddressType::OFFICE;

    // Managers of the Company
    Manager *mng = new Manager("Vighnesh", cProg, 30000);
    addr1 = new Address(current, "4-221", "Rajiv Nagar", "manipal", "Udupi", 576104);
    addr2 = new Address(office, "981/1", "Industrial Area", "Manipal", "Udupi", 576102);
    mng->addAddress(addr1);
    mng->addAddress(addr2);
    cmp->addManager(mng);

    // Employees of the company
    Employee *emp = new Employee("Rajesh", cProg, 10000);
    emp->setDesignation(srdeveloper);
    addr1 = new Address(permanent, "1-141(c)", "Dasharath Nagar", "manipal", "Udupi", 576104);
    addr2 = new Address(office, "981/1", "Industrial Area", "Manipal", "Udupi", 576102);
    emp->addAddress(addr1);
    emp->addAddress(addr2);
    mng->addEmployee(emp);

    mng = new Manager("Anirudh", sqlProg, 30000);
    addr1 = new Address(permanent, "7-21(a)", "Thilak Nagar", "manipal", "Udupi", 576104);
    addr2 = new Address(office, "981/2", "Industrial Area", "Manipal", "Udupi", 576102);
    mng->addAddress(addr1);
    mng->addAddress(addr2);
    cmp->addManager(mng);

    emp = new Employee("Bhuvan", sqlProg, 10000);
    emp->setDesignation(associate);
    addr1 = new Address(permanent, "441(d)", "Indrali", "", "Udupi", 576104);
    addr2 = new Address(office, "981/2", "Industrial Area", "Manipal", "Udupi", 576102);
    emp->addAddress(addr1);
    emp->addAddress(addr2);
    mng->addEmployee(emp);

    mng = new Manager("Pranesh Prabhu", javaProg, 30000);
    addr1 = new Address(permanent, "Ganesh Nilaya", "", "Puttur", "Dakshina Kannada", 572104);
    addr2 = new Address(current, "7/741", "V.P. Nagar", "Udupi", "Udupi", 576102);
    addr3 = new Address(office, "981/3", "Industrial Area", "Manipal", "Udupi", 576102);
    mng->addAddress(addr1);
    mng->addAddress(addr2);
    mng->addAddress(addr3);
    cmp->addManager(mng);

    emp = new Employee("Sathvik", javaProg, 10000);
    emp->setDesignation(associate);
    addr1 = new Address(permanent, "5-234", "", "Srinivasa Nagar", "Udupi", 576102);
    addr2 = new Address(office, "981/3", "Industrial Area", "Manipal", "Udupi", 576102);
    emp->addAddress(addr1);
    emp->addAddress(addr2);
    mng->addEmployee(emp);

    emp = new Employee("Kathik", javaProg, 10000);
    emp->setDesignation(developer);
    addr1 = new Address(permanent, "1-234", "K.P. Nagar", "Doddannagudde", "Udupi", 576102);
    addr2 = new Address(office, "981/3", "Industrial Area", "Manipal", "Udupi", 576102);
    emp->addAddress(addr1);
    emp->addAddress(addr2);
    mng->addEmployee(emp);

    cmp->printNames();
    cmp->printAddresses();
}
