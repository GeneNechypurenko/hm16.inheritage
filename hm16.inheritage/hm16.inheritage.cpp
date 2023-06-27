#include <iostream>
#include <windows.h>
#include <string>

#include "Aspirant.h"
#include "ForeignPassport.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Aspirant aspirant(25, "John Doe", "0932225359", "ITStep", "Science", "PV-211", "Software", "Dr.Smith", "PhD");

    ForeignPassport fp("HM-2024070", "John Doe", "13.09.1998", "UKRAINE", "USA visa", "XP214509PI");

    aspirant.DisplayInfo();
    fp.DisplayInfo();

    return 0;
}