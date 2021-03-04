#include <iostream>

using namespace std;

int maxim(unsigned int n) {
    int cifraMaximaImpara = -1;
    while(n != 0) {
        int cifra = n % 10;
        if (cifra % 2 != 0) {
            if(cifra > cifraMaximaImpara)
                cifraMaximaImpara = cifra;
        }
        n /= 10;
    }
    return cifraMaximaImpara;
}

int main() {
    cout << maxim(5672883);
    return 0;
}
