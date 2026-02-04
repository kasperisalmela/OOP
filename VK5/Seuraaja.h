#ifndef SEURAAJA_H
#define SEURAAJA_H

#include <string>

class Seuraaja
{
private:
    std::string nimi;

public:
    Seuraaja* next;

    Seuraaja(std::string nimi);
    std::string getNimi();
    void paivitys(std::string viesti);
};

#endif // SEURAAJA_H
