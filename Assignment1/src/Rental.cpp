#include "Rental.h"
#include <iostream>

using namespace std;

Rental::Rental(MovieBase *mv, int days)
{
    //ctor
    movie = mv;
    daysRented = days;
}

Rental::~Rental()
{
    //dtor
}

int Rental::getCharges()
{
    int ch = movie->getCharge(daysRented);
    string name = movie->getName();

    return ch;
}
