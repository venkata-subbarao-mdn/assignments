#include "RegularMovie.h"

RegularMovie::RegularMovie(string name)
{
    //ctor
    setCharges(5, 2, 5);
    mName = name;
    mType = "Regular";
}

RegularMovie::~RegularMovie()
{
    //dtor
}
