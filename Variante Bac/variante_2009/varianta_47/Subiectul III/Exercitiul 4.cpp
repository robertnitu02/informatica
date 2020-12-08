#include <iostream>

using namespace std;

void cif(unsigned int nr, unsigned int &s) {
    if(nr >= 1 && nr <= 9) s = 1;
    else {
        s = 0;
        while(nr != 0) {
            s = s + nr % 10;
            nr = nr / 10;
        }
    }
}

int main() {
    unsigned int n, numere[50];
    unsigned int cifraMaxima = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        unsigned int s;
        cin >> numere[i];
        cif(numere[i], s);
        if(s > cifraMaxima)
            cifraMaxima = s;
    }

    for(int i = 1; i <= n; i++) {
        unsigned int s;
        cif(numere[i], s);
        if(s == cifraMaxima)
            cout << numere[i] << ' ';
    }
    return 0;
}
