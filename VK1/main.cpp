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
