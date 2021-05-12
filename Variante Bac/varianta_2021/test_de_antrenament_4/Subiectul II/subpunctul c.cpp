#include <iostream>

using namespace std;


int main() {
    unsigned int c, n, p;
    int k;

    cin >> n >> k;

    p = 1;
    while(n > 0) {
        c = n % 10;
        if (k > 0) {
            if (c % 2 == 1) {
                p = p * c;
            }
        }
        n = n / 10;
        k = k - 1;
    }

    cout << p;
    return 0;
}
