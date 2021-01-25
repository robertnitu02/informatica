#include <iostream>

using namespace std;

int main() {
    unsigned int m, n, p, q, s, s1, s2;
    cin >> m >> n >> p >> q;
    s1 = 0;
    s2 = 0;
    while(p <= q) {
        if (p % m == 0 || p %  n == 0)
            s1 = s1 + 1;
        if (p % m == 0 && p %  n == 0)
            s2 = s2 + 1;
        p = p + 1;
    }
    s = s1 - 2 * s2;
    cout << s;
    return 0;
}
