#include <iostream>

using namespace std;

int main() {
    unsigned int n, c;
    cin >> n;

    while(n != 0) {
        c = n % 10;
        n = n / 10;
        if(c % 2 != 0) {
            c = c + 1;
        }
        while(c > 0 && c < 10) {
            cout << c;
            c = c * 2;
        }
    }
    return 0;
}
