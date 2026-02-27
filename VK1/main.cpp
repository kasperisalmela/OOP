#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum);

int main() {
    srand(time(0));

    int maxnum = 40;
    int arvaustenLukumaara = game(maxnum);

    cout << "Arvausten lukumaara: " << arvaustenLukumaara << endl;

    return 0;
}

int game(int maxnum) {
    int etsittavaLuku = rand() % maxnum + 1;
    int arvaus;
    int laskuri = 0;

    while (true) {
        cout << "Arvaa luku (1-" << maxnum << "): ";
        cin >> arvaus;
        laskuri++;

        if (arvaus < etsittavaLuku) {
            cout << "Luku on suurempi." << endl;
        }
        else if (arvaus > etsittavaLuku) {
            cout << "Luku on pienempi." << endl;
        }
        else {
            cout << "Oikea vastaus!" << endl;
            break;
        }
    }

    return laskuri;
}

/*

 #include <iostream>
#include <cstdlib> // rand, srand

void sarja(int sluku) {
    std::srand(sluku); // asetetaan siemenluku

    for (int i = 0; i < 5; i++) {
        int satunnaisluku = std::rand() % 20; // 0-19
        std::cout << satunnaisluku << std::endl;
    }
}

void tarkista_jaollisuus(int jaettava, int jakaja) {
    if (jakaja == 0) {
        std::cout << "Jakaja ei voi olla nolla" << std::endl;
        return;
    }

    if (jaettava % jakaja == 0) {
        std::cout << "jaollinen" << std::endl;
    }
    else {
        std::cout << "ei jaollinen" << std::endl;
    }
}

void tarkista_jaollisuus(int num) {
    if (num % 4 == 0) {
        std::cout << "jaollinen" << std::endl;
    }
    else {
        std::cout << "ei jaollinen" << std::endl;
    }
}

void kertoma(int num) {

    if (num > 10) {
        std::cout << "Luku on liian iso" << std::endl;
    }
    else if (num < 1) {
        std::cout << "Ei voida laskea" << std::endl;
    }
    else {
        long tulos = 1;

        for (int i = 1; i <= num; i++) {
            tulos *= i;
        }

        std::cout << tulos << std::endl;
    }

}

#include <iostream>

int main() {
    int luku;
    std::cin >> luku;
    std::cout << "?" << luku * 2;
    return 0;
}

void terveiset(int num) {

    for (int i = 1; i <= num; i++) {
        std::cout << "Terve " << i << std::endl;
    }

}

void tarkista(int num) {

    if (num > 0) {
        std::cout << "positiivinen" << std::endl;
    }
    else if (num < 0) {
        std::cout << "negatiivinen" << std::endl;
    }
    else {  // num == 0
        std::cout << "nolla" << std::endl;
    }

}

#include <iostream>

int main() {

    int a = 4;
    int b = 5;

    int tulos = a * b;   // 4 * 5 = 20
    tulos = tulos * 2;   // 20 * 2 = 40
    tulos = tulos + 1;   // 40 + 1 = 41

    std::cout << tulos << std::endl;

    return 0;
}


*/
