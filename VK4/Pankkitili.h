#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <string>

class Pankkitili {
protected:
    std::string omistaja;
    double saldo;

public:
    Pankkitili(std::string nimi);

    double getBalance() const;

    virtual bool deposit(double summa);
    virtual bool withdraw(double summa);

    virtual ~Pankkitili();
};

#endif
