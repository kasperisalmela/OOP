#include <iostream>
#include "Notifikaattori.h"
#include "Seuraaja.h"

using namespace std;

int main()
{
    std::cout << "Luodaan notifikaattori" << std::endl;
    Notifikaattori n;

    std::cout << "Luodaan seuraajat A, B ja C" << std::endl;
    Seuraaja a("A");
    Seuraaja b("B");
    Seuraaja c("C");

    std::cout << "Notifikaattori lisaa seuraajan A" << std::endl;
    n.lisaa(&a);

    std::cout << "Notifikaattori lisaa seuraajan B" << std::endl;
    n.lisaa(&b);

    std::cout << "Notifikaattori lisaa seuraajan C" << std::endl;
    n.lisaa(&c);

    std::cout << "Seuraajat:" << std::endl;
    n.tulosta();

    n.postita("Tama on viesti 1");

    std::cout << "Notifikaattori poistaa viestin B" << std::endl;
    n.poista(&b);

    n.postita("Tama on viesti 2");

    return 0;
}
