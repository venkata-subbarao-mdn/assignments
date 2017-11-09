#include "NewRelease.h"

NewRelease::NewRelease(string name)
{
    //ctor
    setCharges(5, 2, 25);
    mName = name;
    mType = "New Release";
}

NewRelease::~NewRelease()
{
    //dtor
}
