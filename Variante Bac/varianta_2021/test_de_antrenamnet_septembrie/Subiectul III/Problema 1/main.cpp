#include <iostream>

using namespace std;

void prime(unsigned int n, unsigned int &x, unsigned int &y) {
    int copieN = n - 1, contor = 0;
    for(int i = copieN; i < n; i--) {
        bool ePrim = true;
        if(i < 2 || i % 2 == 0) ePrim = false;
        for(int d = 3; d * d <= i; d += 2) {
            if(i % d == 0) {
                ePrim = false;
                break;
            }
        }
        if(ePrim) {
            contor++;
            if(contor == 1) y = i;
            else {
                x = i;
                break;
            }
        }
    }
}

int main() {
    unsigned int n = 49, x, y;
    prime(n, x, y);
    cout << n << " " << x << " " << y;
    return 0;
}
