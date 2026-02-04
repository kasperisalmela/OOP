#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include "Seuraaja.h"
#include <string>

class Notifikaattori
{
private:
    Seuraaja* seuraajat;

public:
    Notifikaattori();
    void lisaa(Seuraaja* seuraaja);
    void poista(Seuraaja* seuraaja);
    void tulosta();
    void postita(std::string viesti);
};

#endif // NOTIFIKAATTORI_H
