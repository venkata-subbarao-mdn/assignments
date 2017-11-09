#include "MovieBase.h"

MovieBase::MovieBase()
{
    //ctor
}

MovieBase::~MovieBase()
{
    //dtor
}

int MovieBase::getCharge(int daysRented)
{
    int charge = 0;

    if (daysRented > premiumDays) {
        charge =  premiumDays * premiumCharges;
    }
    charge += daysRented * normalCharges;

    return charge;
}

void MovieBase::setCharges(int pCharges, int pDays, int nCharges)
{
    premiumCharges = pCharges;
    premiumDays = pDays;
    normalCharges = nCharges;
}
