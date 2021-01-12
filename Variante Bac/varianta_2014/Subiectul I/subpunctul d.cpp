#include <iostream>

using namespace std;

int main() {
    unsigned int n, d, p;
    cin >> n;
    d = 2;
    while(d <= n) {
        p = 0;
        while(n % d == 0) {
            p = p + 1;
            n = n / d;
        }
        if(p % 2 == 0 && p != 0)
            cout << d << ' ';
        d++;
    }
    cout << n;
    return 0;
}
