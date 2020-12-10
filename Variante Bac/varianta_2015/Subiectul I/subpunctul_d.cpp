#include <iostream>

using namespace std;

int main() {
    unsigned int n, k, i, t;
    cin >> n >> k;
    while(n >= 1) {
        if (n > k)
            i = k;
        else
            i = n;
        n = n - i;
        t = k;
        while(i >= 1) {
            cout << t << ' ';
            i = i - 1;
            t = t - 1;
        }
    }
    return 0;
}
