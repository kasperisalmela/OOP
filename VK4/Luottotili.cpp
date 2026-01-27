#include "Luottotili.h"

Luottotili::Luottotili(std::string nimi, double raja)
    : Pankkitili(nimi), luottoRaja(-raja)
{
}

bool Luottotili::deposit(double summa)
{
    if (summa <= 0) return false;
    saldo += summa;
    return true;
}

bool Luottotili::withdraw(double summa)
{
    if (summa <= 0) return false;
    if (saldo - summa < luottoRaja) return false;
    saldo -= summa;
    return true;
}
