#ifndef HTMLPRINTER_H
#define HTMLPRINTER_H

#include "Printer.h"

class HTMLPrinter : public Printer
{
    public:
        HTMLPrinter();
        void printHeader();
        void printFooter();
        void printRecord(string name, string type, int days, int chgs);
};

#endif // HTMLPRINTER_H
