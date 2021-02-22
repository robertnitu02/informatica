#include <iostream>
#include <fstream>

using namespace std;

ifstream in("cheltuieli.in");

struct Cheltuieli {
    int tipProdus;
    int cantitateProdus;
    int pretProdus;
};
Cheltuieli DateAchizite[101];
unsigned int RaportCheltuieli[101];
unsigned int MaximTip;

int main() {
    int contor = 0;
    while(!in.eof()) {
        in >> DateAchizite[contor].tipProdus;
        in >> DateAchizite[contor].cantitateProdus;
        in >> DateAchizite[contor].pretProdus;
        RaportCheltuieli[DateAchizite[contor].tipProdus] +=
            DateAchizite[contor].cantitateProdus * DateAchizite[contor].pretProdus;
        if(DateAchizite[contor].tipProdus > MaximTip)
            MaximTip = DateAchizite[contor].tipProdus;
        contor++;
    }
    contor--;
    unsigned int CifraMaximPret = 0;
    unsigned int CifraMaximTip = 0;
    for(int i = 1; i <= MaximTip; i++) {
        if(RaportCheltuieli[i] > CifraMaximPret) {
            CifraMaximPret = RaportCheltuieli[i];
        }
    }
    for(int i = 1; i <= MaximTip; i++) {
        if(RaportCheltuieli[i] == CifraMaximPret)
            CifraMaximTip += 1;
    }
    cout << CifraMaximPret << " " << CifraMaximTip;
    in.close();
    return 0;
}
