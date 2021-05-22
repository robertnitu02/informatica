#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char sir[100];
    char vocale[6] = "aeiou";
    bool exista = false;

    cin.get(sir, 100, '\n');

    char *cuvant;
    cuvant = strtok(sir, " ");

    while(cuvant != NULL) {
        int lungime = strlen(cuvant);
        int cateV = 0;
        char primaVocala;
        bool afiseaza = false;
        for(int i = 0; i < lungime; i++) {
            if (strchr(vocale, cuvant[i])) {
                if(cateV == 0)
                    primaVocala = cuvant[i];
                cateV++;
                if (primaVocala != cuvant[i]) {
                    afiseaza = false;
                } else {
                    afiseaza = true;
                    if(!exista) exista = true;
                }
            }
        }

        if (afiseaza)
            cout << cuvant << endl;
        cuvant = strtok(NULL, " ");
    }

    if (!exista)
        cout << "nu exista";
    return 0;
}
