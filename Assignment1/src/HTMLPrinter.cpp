#include "HTMLPrinter.h"

HTMLPrinter::HTMLPrinter()
{
    //ctor
}

void HTMLPrinter::printHeader()
{
    cout << "<html>\n<head>\n<body\n<table>" << endl;
    cout << "<tr>\n";
    cout << "<th>Movie</th><th>Type</th><th>Days Rented</th><th>Charge</th>" << endl;
    cout << "</tr>\n";
}

void HTMLPrinter::printFooter()
{
    cout << "<tr>\n";
    cout << "<th>Total</th><th>                    " << totalChgs << "</th>" << endl;
    cout << "</table>" << endl;
    cout << "</tr>\n";
}

void HTMLPrinter::printRecord(string name, string type, int days, int chgs)
{
    cout << "<tr>\n";
    cout << "<th>" << name << "</th><th>" << type << "</th><th>" << days << "</th><th>" << chgs << "</th>" << endl;
    cout << "</tr>\n";
    totalChgs += chgs;
}
