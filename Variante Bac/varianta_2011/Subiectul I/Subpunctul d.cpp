#include <iostream>

using namespace std;

int main() {
    unsigned int n, k, i, t;
    cin >> n >> k;
    t = 0;
    while(n >= 1) {
        if (n > k)
            i = k;
        else
            i = n;
        t = t + 1;
        n = n - i;
        while(i >= 1) {
            cout << t << ' ';
            i = i - 1;
        }
    }
    return 0;
}
