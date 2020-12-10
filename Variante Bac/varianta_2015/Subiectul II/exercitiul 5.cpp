#include <iostream>
#include <string.h>

using namespace std;

const char vocaleFaraI[] = "aeou";

int main() {
    char cuvant[100];
    cin >> cuvant;
    int lungimeCuvant = strlen(cuvant);
    bool contineDoarConsoane = true;
    for(int i = 0; i < lungimeCuvant; i++) {
        if (strchr(vocaleFaraI, cuvant[i]))
            contineDoarConsoane = false;
    }

    if (contineDoarConsoane)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
