#include <iostream>

using namespace std;

unsigned int nrPrime(unsigned int n) {
    if(n == 2 || n == 3 || n == 5 || n == 7) return 1;
    unsigned int cifrePrime = 0;
    while (n != 0) {
        unsigned int ultimaCifra = n % 10;
        n = n / 10;
        if(ultimaCifra == 2 || ultimaCifra == 3 ||
           ultimaCifra == 5 || ultimaCifra == 7)
            cifrePrime++;
    }
    return cifrePrime;
}

int main() {
    cout << nrPrime(1233405);
    return 0;
}
