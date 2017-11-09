#ifndef MOVIEBASE_H
#define MOVIEBASE_H

#include <iostream>

using namespace std;

class MovieBase
{
    public:
        MovieBase();
        virtual ~MovieBase();
        int getCharge(int daysRented);
        string getName() const { return mName; }
        string getType() const { return mType; }

    protected:
        void setCharges(int pCharges, int pDays, int nCharges);

    protected:
        int premiumCharges;
        int premiumDays;
        int normalCharges;
        string mName;
        string mType;
};

#endif // MOVIEBASE_H
