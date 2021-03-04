#include <iostream>
#include <string.h>

using namespace std;
char vocale[] = "aeiou";

bool contineDoarVocale(char sir[]) {
    int l = strlen(sir);
    for(int i = 0; i < l; i++)
        if(!strchr(vocale, sir[i]))
            return false;
    return true;
}

int main() {
    char s1[100];
    cin.get(s1, 100, '\n');
    cin.get();
    char *cuvant = strtok(s1, " ");
    while(cuvant != NULL) {
        cout << cuvant << ' ';
        if (contineDoarVocale(cuvant))
            cout << cuvant << ' ';
        cuvant = strtok(NULL, " ");
    }
    return 0;
}
