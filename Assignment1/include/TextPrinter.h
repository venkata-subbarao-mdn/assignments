#ifndef TEXTPRINTER_H
#define TEXTPRINTER_H

#include "Printer.h"

class TextPrinter : public Printer
{
    public:
        TextPrinter();
        void printHeader();
        void printFooter();
        void printRecord(string name, string type, int days, int chgs);
};

#endif // TEXTPRINTER_H
