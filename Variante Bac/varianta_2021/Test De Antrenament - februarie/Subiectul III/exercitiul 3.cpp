#include <iostream>
#include <fstream>

using namespace std;

ifstream in("bac.in");

bool cautareBinara(unsigned int v[], unsigned int n, int x) {
    int mijloc, stanga = 0, dreapta = n - 1;
    while(stanga < dreapta) {
        mijloc = (stanga + dreapta) / 2;
        if(v[mijloc] == x)
            return true;
        if(v[mijloc] > x)
            dreapta = mijloc - 1;
        else
            stanga = mijloc + 1;
    }
    return false;
}

bool numarDeDouaCifre(unsigned int n) {
    if(n >= 10 && n <= 99)
        return true;
    return false;
}

int main() {
    unsigned int numar;
    unsigned int numereDouaCifre[100], contor = 0;
    int n, nrMareA = 1, nrMareB = -1;

    in >> numar;
    while(!in.eof()) {
        in >> numar;
        if (numarDeDouaCifre(numar)) {
            if(numar > nrMareA || numar > nrMareB) {
                if(nrMareA == -1) {
                    nrMareA = numar;
                    nrMareB = -1;
                } else if(nrMareB == -1) {
                    nrMareB = numar;
                    if(nrMareB > nrMareA) {
                        int aux = nrMareB;
                        nrMareB = nrMareA;
                        nrMareA = aux;
                    }
                } else {
                    int aux = nrMareA;
                    nrMareA = numar;
                    nrMareB = aux;
                }
            }
            numereDouaCifre[contor] = numar;
            contor++;
        }
    }
    contor--;
    in.close();

    bool gasitA = false, gasitB = false;
    for(int i = 1; i <= 4; i++) {
        if((i == 1 || i == 2) && !gasitA) {
            nrMareA = (i == 1) ? (nrMareA + 1) : (nrMareA - 1);
            if(cautareBinara(numereDouaCifre, contor, nrMareA) == false)
                gasitA = true;
        } else if((i == 3 || i == 4) && !gasitB) {
            nrMareB = (i == 3) ? (nrMareB + 1) : (nrMareB - 1);
            if(cautareBinara(numereDouaCifre, contor, nrMareB) == false)
                gasitB = true;
        }
    }

    if (!gasitA || !gasitB)
        cout << "nu exista";
    else {
        if(nrMareB > nrMareA) {
            int aux = nrMareB;
            nrMareB = nrMareA;
            nrMareA = aux;
        }
        cout << nrMareA << ' ' << nrMareB;
    }
    return 0;
}
