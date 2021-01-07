#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char sir[101];
    cin.get(sir, 101, '\n');
    char *cuvant;
    cuvant = strtok(sir, " ");
    while(cuvant != NULL) {
        int lungime = strlen(cuvant);
        bool zecimal = true;
        for(int i = 0; i < lungime; i++) {
            if(strchr(".", cuvant[i])) {
                if(strchr("0123456789", cuvant[i - 1]) ||
                   strchr("0123456789", cuvant[i + 1]))
                    zecimal = false;
            }
        }
        if (zecimal)
            cout << cuvant << ' ';
        cuvant = strtok(NULL, " ");
    }
    return 0;
}
