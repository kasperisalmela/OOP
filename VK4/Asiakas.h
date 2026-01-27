#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "Pankkitili.h"
#include "Luottotili.h"
#include <string>

class Asiakas {
private:
    std::string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;

public:
    Asiakas(std::string nimi, double luottoraja);

    void showSaldo() const;

    bool talletus(double summa);
    bool nosto(double summa);

    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);

    bool tilisiirto(double summa, Asiakas &vastaanottaja);
};

#endif
