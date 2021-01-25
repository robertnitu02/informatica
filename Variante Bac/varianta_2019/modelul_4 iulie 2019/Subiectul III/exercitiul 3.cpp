#include <iostream>
#include <fstream>

using namespace std;

ifstream in("bac.txt");

int main() {
    unsigned int numere[101], n = 0;
    unsigned int varfuriLocale[101], m = 0;
    while(!in.eof()) {
        unsigned int numar;
        in >> numar;
        n++;
        numere[n] = numar;
    }
    in.close();

    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            m++;
            varfuriLocale[m] = numere[i];
        }else if((numere[i - 1] <= numere[i]) || (numere[i - 1] == numere[i])) {
            m++;
            varfuriLocale[m] = numere[i];
        }
    }

    for(int i = 1; i <= m; i++)
        cout << varfuriLocale[i] << ' ';
    return 0;
}
