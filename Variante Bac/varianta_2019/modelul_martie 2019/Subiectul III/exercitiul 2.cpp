#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char sir[51];
    cin.get(sir, 51, '\n');
    cin.get();

    char *cuvant;
    cuvant = strtok(sir, " ");

    while(cuvant != NULL) {
        int lungime = strlen(cuvant);
        bool cuvantPrescurtat = false;
        for(int i = 0; i < lungime; i++) {
            if(strchr(".", cuvant[i])) {
                cuvantPrescurtat = true;
                break;
            }
        }
        if (cuvantPrescurtat) {
            if(toupper(cuvant[0]) == 'C')
                cout << "COLEGIUL";
            else if(toupper(cuvant[0]) == 'N')
                cout << "NATIONAL";
            else if(toupper(cuvant[0]) == 'L')
                cout << "LICEUL";
            else if(toupper(cuvant[0]) == 'T')
                cout << "TEORETIC";
        }else
            cout << cuvant;
        cout << ' ';
        cuvant = strtok(NULL, " ");
    }
    return 0;
}
