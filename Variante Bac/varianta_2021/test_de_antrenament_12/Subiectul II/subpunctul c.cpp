#include <iostream>

using namespace std;

int main() {
    unsigned int n, k, t;

    cin >> n >> k;
    t = 1;

    for(int i = 1; i <= n / k; i++) {
        for(int j = 1; j <= k; j++) {
            cout << 2 * t << ' ';
        }
        t = t + 1;
    }

    for(int i = n % k; i >= 1; i--) {
        cout << 3 * t << ' ';
    }
    return 0;
}
