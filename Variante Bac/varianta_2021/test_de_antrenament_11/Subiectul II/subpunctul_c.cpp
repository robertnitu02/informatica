#include <iostream>

using namespace std;

int main() {
    int m, n;

    cin >> m >> n;

    if (m > n) {
        int aux = m;
        m = n;
        n = aux;
    }

    if(m % 2 == 0)
        m = m + 1;

    while(m <= n) {
        m = m + 2;
        cout << '*';
    }
    return 0;
}
