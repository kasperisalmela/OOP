#include "ItalianChef.h"
#include <iostream>
#include <algorithm>

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "Chef Mario konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
  //  cout << "Chef Mario destruktori" << endl;
}

bool ItalianChef::askSecret(string pwd, int f, int w)
{
    if (pwd.compare(password) == 0)
    {
        cout << "Password ok!" << endl;
        flour = f;
        water = w;
        makePizza();
        return true;
    } else {
        cout << "Wrong password!" << endl;
        return false;
    }
}

int ItalianChef::makePizza()
{
    int pizzas = std::min(flour / 5, water / 5);
    cout << "ItalianChef Mario with "
         << flour << " flour and "
         << water << " water can make "
         << pizzas << " pizzas" << endl;
    return pizzas;
}
