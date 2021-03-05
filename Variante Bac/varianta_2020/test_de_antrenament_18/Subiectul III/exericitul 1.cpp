#include <iostream>

using namespace std;

void suma(unsigned int n, unsigned int &s) {
    int cifrePare[9], contor = 0;
    s = 0;
    while (n != 0) {
        int cifra = n % 10;
        if (cifra % 2 == 0) {
            bool E = false;
            for(int i = 0; i < contor; i++)
                if(cifrePare[i] == cifra)
                    E = true;
            if(!E) {
                s += cifra;
                cifrePare[contor] = cifra;
                contor++;
            }
        }
        n = n / 10;
    }
}

int main() {
    unsigned int n, s;
    n = 6768825;
    suma(n, s);
    cout << s;
    return 0;
}
