#ifndef PRINTER_H
#define PRINTER_H

#include <iostream>

using namespace std;

class Printer
{
    public:
        Printer();
        virtual ~Printer();

        virtual void printHeader() = 0;
        virtual void printFooter() = 0;
        virtual void printRecord(string name, string type, int days, int chgs) = 0;

    protected:
        int totalChgs;
};

#endif // PRINTER_H
