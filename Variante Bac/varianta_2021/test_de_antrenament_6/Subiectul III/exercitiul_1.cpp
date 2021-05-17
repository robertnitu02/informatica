#include <iostream>

using namespace std;

void numar(int n, int c, int &m) {
    int numarCifre = 0;
    int cifreEgale = 0;
    int cifreZero = 0;
    m = 0;
    while (n != 0) {
        int ultimaCifra = n % 10;
        if (ultimaCifra != c) {
            m = m * 10 + ultimaCifra;
        } else {
            if (ultimaCifra == c) {
                cifreEgale++;
            } else if(ultimaCifra == 0) {
                cifreZero++;
            }
        }
        n = n / 10;
        numarCifre++;
    }
    if (numarCifre == cifreEgale)
        m = -1;
    else if(cifreEgale < cifreZero)
        m = c;
    else {
        int inv = 0;
        while (m != 0) {
            inv = inv * 10 + m % 10;
            m /= 10;
        }
        m = inv;
    }
}

int main() {
    int n = 55, c = 5, m;
    numar(n, c, m);
    cout << m;
    return 0;
}
