#include <iostream>

using namespace std;

void divX(unsigned int n, unsigned int x) {
    int contorDivizori = -1;
    unsigned int divizori[50];
    unsigned int divizor = x, contorN;
    contorDivizori++;
    divizori[contorDivizori] = divizor;
    divizor++;
    n--;
    contorN = n;
    while(n != 0) {
        if(divizor % x == 0) {
            contorDivizori++;
            divizori[contorDivizori] = divizor;
            n--;
        }
        divizor++;
    }
    for(int i = contorN; i >= 0; i--)
        cout << divizori[i] << ' ';
}

int main() {
    divX(4, 15);
    return 0;
}
