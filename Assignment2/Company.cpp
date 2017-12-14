#include "Company.h"

Company::Company(string name) //, Address *addr)
             : compName(name) //,Address(addr)
{
}

Company::~Company()
{
    //delete compAddr;
}

void Company::addManager(Manager *mgr)
{
    // TODO: It is good to use std::map instead of list
    managers.push_back(mgr);
}

// May be following print functions are collaborators and
// hence these needs to be moved to different class
void Company::printNames()
{
    cout << "Manager\t\tEmployees\n";
    cout << "------\t\t---------\n";
    list<Manager*>::iterator it = managers.begin();

    while (it != managers.end()) {
        cout << (*it)->getName() << "\n";
        list<Employee*> eList = (*it)->getEmployees();
        list<Employee*>::iterator eit = eList.begin();
        while (eit != eList.end()) {
            cout << "\t\t" << (*eit)->getName() << "\n";
            ++eit;
        }
        ++it;
        cout << "\n";
    }
}

void Company::printAddressList(list<Address*> addrList)
{
    list<Address*>::iterator it = addrList.begin();

    while (it != addrList.end()) {
        cout << (*it)->getAddress() << "\n";
        ++it;
    }
}


void Company::printAddresses()
{
    cout << "Addresses cards\n";
    cout << "---------------\n";
    list<Manager*>::iterator it = managers.begin();

    while (it != managers.end()) {
        cout << "Name :" << (*it)->getName() << "\n";
        cout << "Designation : " << Designation::getDesignationStr((*it)->getDesignation()) << "\n";
        printAddressList((*it)->getAddressList());

        list<Employee*> eList = (*it)->getEmployees();
        list<Employee*>::iterator eit = eList.begin();
        while (eit != eList.end()) {
            cout << "Name : " << (*eit)->getName() << "\n";
            cout << "Designation : " << Designation::getDesignationStr((*eit)->getDesignation()) << "\n";
            printAddressList((*eit)->getAddressList());
            ++eit;
        }
        ++it;
        cout << "\n";
    }
}
