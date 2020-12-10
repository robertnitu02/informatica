#include <iostream>
#include <fstream>

using namespace std;

ifstream in("BAC.txt");

int main() {
    unsigned int n;
    in >> n;
    unsigned int v[n*n], contor = -1;
    while(!in.eof()) {
        unsigned int numar;
        in >> numar;
        contor++;
        v[contor] = numar;
    }
    in.close();
    unsigned int rezultat = 0;
    for(int i = 0; i < contor / 2; i++) {
        for(int j = n; j < contor; j++) {
            if(v[i] % 2 != v[j] % 2) {
                rezultat = rezultat + (v[i] * v[j]);
            }
        }
    }
    cout << rezultat;
    return 0;
}
