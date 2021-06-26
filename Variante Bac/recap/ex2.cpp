#include <iostream>
#include <string.h>

using namespace std;


int main() {
    char text[101], rezultat[101] = "";
    int contor = 0;

    cin.get(text, 101, '\n');

    char *cuvant = strtok(text, " ");
    while(cuvant != NULL) {
        char cuvAux[101], primaLit;
        strcpy(cuvAux, cuvant);
        if(strlen(cuvAux) >= 3) {
            primaLit = cuvAux[0];
            for(int i = 0; i < strlen(cuvAux); i++) {
                cuvAux[i] = cuvAux[i + 1];
            }
            cuvAux[strlen(cuvant) - 1] = primaLit;
            contor++;
        }
        strcat(rezultat, cuvAux);
        strcat(rezultat, " ");
        cuvant = strtok(NULL, " ");
    }

    if(contor != 0)
        cout << rezultat;
    else
        cout << "nu exista";
    return 0;
}
