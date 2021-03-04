#include <iostream>

using namespace std;

unsigned int factori(unsigned int n, unsigned int m) {
    unsigned int val = 1;
    unsigned int divizorN = 2, divizorM = 2;
    int putereN, putereM;
    while(n > 1 && m > 1) {
        putereN = 0;
        putereM = 0;
        while(n % divizorN == 0) {
            putereN++;
            n = n / divizorN;
        }
        while(m % divizorM == 0) {
            putereM++;
            m = m / divizorM;
        }
        divizorN++;
        divizorM++;
        if (putereN != 0 && putereM != 0)
            if(putereN == putereM)
                val++;
    }
    return val - 1;
}

int main() {
    cout << factori(16500, 10780);
    return 0;
}
