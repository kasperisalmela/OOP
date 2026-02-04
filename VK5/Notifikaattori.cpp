#include "Notifikaattori.h"
#include <iostream>

Notifikaattori::Notifikaattori()
{
    seuraajat = nullptr;
}

void Notifikaattori::lisaa(Seuraaja* seuraaja)
{
    seuraaja->next = seuraajat;
    seuraajat = seuraaja;
}

void Notifikaattori::poista(Seuraaja* seuraaja)
{
    if (seuraajat == nullptr) return;

    if (seuraajat == seuraaja) {
        seuraajat = seuraajat->next;
        return;
    }

    Seuraaja* nykyinen = seuraajat;
    while (nykyinen->next != nullptr)
    {
        if (nykyinen->next == seuraaja)
        {
            nykyinen->next = seuraaja->next;
            return;
        }
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr)
    {
        std::cout << nykyinen->getNimi() << std::endl;
        nykyinen = nykyinen->next;
    }
}

void Notifikaattori::postita(std::string viesti)
{
    Seuraaja* nykyinen = seuraajat;
    while (nykyinen != nullptr)
    {
        nykyinen->paivitys(viesti);
        nykyinen = nykyinen->next;
    }
}
