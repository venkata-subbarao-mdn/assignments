#include "Customer.h"
#include "Printer.h"
#include "HTMLPrinter.h"
#include "TextPrinter.h"

Customer::Customer()
{
    //ctor
}

Customer::~Customer()
{
    //dtor
    list<Rental*>::iterator it;

    if (rental.size() > 0) {
        it = rental.begin();
        while (it != rental.end()) {
            rental.erase(it);
            delete(*it);
        }
    }
}

void Customer::rentMovie(MovieBase *movie, int mDays)
{
    Rental *mRent;

    mRent = new Rental(movie, mDays);
    rental.push_back(mRent);
}

void Customer::printCharges(int pType)
{
    list<Rental*>::iterator it;
    Printer *p;

    if (pType == 1) {
        p = new HTMLPrinter();
    } else {
        p = new TextPrinter();
    }

    p->printHeader();
    if (rental.size() > 0) {
        it = rental.begin();
        while (it != rental.end()) {
            //(*it)->printCharges();
            p->printRecord((*it)->getName(),
                           (*it)->getType(),
                           (*it)->getDays(),
                           (*it)->getCharges());
            ++it;
        }
    }
    p->printFooter();
}
