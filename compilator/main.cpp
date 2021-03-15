#include <iostream>

using namespace std;

int main() {
    unsigned int n;
    int x, m, p, cn;

    cin >> n;
    x = 0;
    m = 0;
    p = 1;

    while(x < 10) {
        cn = n;
        while(cn != 0) {
            int c = cn % 10;
            cn = cn / 10;
            if(c == x) {
                m = c * p + m;
                p = p * 10;
            }
        }
        x += 2;
    }
    cout << m;
    return 0;
}
