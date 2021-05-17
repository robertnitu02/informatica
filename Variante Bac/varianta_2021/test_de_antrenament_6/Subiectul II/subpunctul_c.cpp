#include <iostream>

using namespace std;

int main() {
    int x, y, k, n, i, c;

    cin >> x >> y;
    k = 0;
    i = x;

    while (i <= y) {
        n = i;
        c = 0;
        while(n > 0 && c == 0) {
            if (n % 2 == 1)
                c = 1;
            n = n / 10;
        }
        cout << c << endl;
        k = k + c;
        i = i + 1;
    }
    cout << k;
    return 0;
}
