#ifndef __COMPANY_H__
#define __COMPANY_H__

#include <list>
#include <string>
#include "Manager.h"
#include <iostream>

using namespace std;

class Company {
    public:
        Company(const string name);
        ~Company();
        void addManager(Manager *mgr);
        void printNames();
        void printAddresses();
        void printAddressList(list<Address*> addrList);

    private:
        list<Manager*> managers;
        string compName;

};

#endif
