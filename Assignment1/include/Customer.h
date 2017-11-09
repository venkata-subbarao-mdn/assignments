#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <list>
#include "Rental.h"

using namespace std;

class Customer
{
    public:
        Customer();
        ~Customer();

        void rentMovie(MovieBase *movie, int mDays);
        void printCharges(int pType);

    private:
        std::list<Rental*> rental;
};

#endif // CUSTOMER_H
