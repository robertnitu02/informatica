#include <iostream>

using namespace std;

int joc(unsigned int n) {
    int catiDiv = 0, d;
    for(d = 2; d <= n; d++) {
        if(n % d == 0) {
            catiDiv++;
        }
    }
    return catiDiv;
}

int main() {
    cout << joc(12);
    return 0;
}
