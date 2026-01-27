#include "Asiakas.h"
#include <iostream>

using namespace std;

Asiakas::Asiakas(string nimi, double luottoraja)
    : nimi(nimi),
    kayttotili(nimi),
    luottotili(nimi, luottoraja)
{
}

void Asiakas::showSaldo() const
{
    cout << nimi << endl;
    cout << "Kayttotilin saldo " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double summa)
{
    return kayttotili.deposit(summa);
}

bool Asiakas::nosto(double summa)
{
    return kayttotili.withdraw(summa);
}

bool Asiakas::luotonMaksu(double summa)
{
    return luottotili.deposit(summa);
}

bool Asiakas::luotonNosto(double summa)
{
    return luottotili.withdraw(summa);
}

bool Asiakas::tilisiirto(double summa, Asiakas &vastaanottaja)
{
    if (summa <= 0) return false;
    if (!kayttotili.withdraw(summa)) return false;
    vastaanottaja.kayttotili.deposit(summa);
    return true;
}
