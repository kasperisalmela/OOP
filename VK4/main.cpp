#include <iostream>
#include "Asiakas.h"

using namespace std;

int main()
{
    Asiakas aapeli("Aapeli", 1000);
    Asiakas bertta("Bertta", 1000);

    aapeli.talletus(250);
    aapeli.luotonNosto(150);

    aapeli.tilisiirto(50, bertta);

    aapeli.showSaldo();
    bertta.showSaldo();

    return 0;
}
