#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"

using namespace std;

int main()
{
    Chef chef1("Gordon");
    chef1.makeSalad(11);
    chef1.makeSoup(14);

    ItalianChef chef2("Mario");
    chef2.makeSalad(9);
    chef2.askSecret("pizza", 12, 12);
    return 0;
}
