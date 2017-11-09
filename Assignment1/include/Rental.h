#ifndef RENTAL_H
#define RENTAL_H

#include "MovieBase.h"

class Rental
{
    public:
        Rental(MovieBase *mv, int days);
        ~Rental();

        string getName() { return movie->getName(); }
        string getType() { return movie->getType(); }
        int getDays() { return daysRented; }
        int getCharges();

    private:
        int daysRented;
        MovieBase *movie;
};

#endif // RENTAL_H
