#include "TextPrinter.h"

TextPrinter::TextPrinter()
{
    //ctor
}

void TextPrinter::printHeader()
{
    cout << "--------------------------------" << endl;
    cout << "Movie      Type      Days Rented     Charge" << endl;
    cout << "--------------------------------" << endl;
}

void TextPrinter::printFooter()
{
    cout << "--------------------------------" << endl;
    cout << "Total                    " << totalChgs << endl;
    cout << "--------------------------------" << endl;
}

void TextPrinter::printRecord(string name, string type, int days, int chgs)
{
    cout << name << "          " << type << "         " << days << "         " << chgs << endl;
    totalChgs += chgs;
}
