#include <iostream>
#include <math.h>

using namespace std;

void inserare(unsigned int &n) {
    unsigned int cifre[101], contor = 0;
    while(n != 0) {
        unsigned int cifra = n % 10;
        cifre[contor] = cifra;
        contor++;
        n = n / 10;
    }
    n = 0;
    for(int i = contor; i > 0; i--) {
        if(i%2==0) {
            n = n * 10 + abs((float)cifre[i-1] - cifre[i]);
        }
        n = n * 10 + cifre[i];
    }
}

int main() {
    unsigned int n = 7255;
    inserare(n);
    cout << n;
    return 0;
}
