#include "ChildrenMovie.h"

ChildrenMovie::ChildrenMovie(string name)
{
    //ctor
    setCharges(0, 0, 5);
    mName = name;
    mType = "Children";
}

ChildrenMovie::~ChildrenMovie()
{
    //dtor
}
