#include <iostream>

using namespace std;

void Impare(unsigned int &n) {
    bool ultimaCifraZero = (n%10 == 0) ? true : false;
    unsigned int numarN = 0, inversLuiN = 0;
    while(n != 0) {
        unsigned int cifra = n % 10;
        if(cifra % 2 != 0)
            cifra--;
        numarN = numarN * 10 + cifra;
        n = n / 10;
    }
    while(numarN != 0) {
        inversLuiN = inversLuiN * 10 + numarN % 10;
        numarN = numarN / 10;
    }
    if(ultimaCifraZero) inversLuiN *= 10;
    n = inversLuiN;
}

int main() {
    unsigned int n = 224680;
    Impare(n);
    cout << n;
    return 0;
}
