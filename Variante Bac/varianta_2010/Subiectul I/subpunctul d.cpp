#include <iostream>

using namespace std;

int main() {
    unsigned int n, m, c;
    cin >> n;
    m = 0;
    do {
        c = n % 10;
        n = n / 10;
        if (c > 5)
            c = c / 2;
        m = m * 10 + c;
    }while(n != 0);
    cout << m;
    return 0;
}
