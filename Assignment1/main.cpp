#include <iostream>
#include <cstdlib>
#include "RegularMovie.h"
#include "NewRelease.h"
#include "ChildrenMovie.h"
#include "Rental.h"
#include "Customer.h"

using namespace std;

int main()
{
    list<MovieBase*> movieList;
    list<MovieBase*>::iterator it;
    MovieBase *movie;
    int days;

    Customer *cust;

    cust = new Customer();

    movie = new NewRelease("Padmavathi");
    movieList.push_back(movie);

    movie = new ChildrenMovie("Ice Age 5");
    movieList.push_back(movie);

    movie = new RegularMovie("Tubelight");
    movieList.push_back(movie);

    it = movieList.begin();
    while (it != movieList.end()) {
        days = (rand() % 10) + 1;
        cust->rentMovie((*it), days);
        ++it;
    }

    cust->printCharges(2);

    return 0;
}
