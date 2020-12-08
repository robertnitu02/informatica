#include <iostream>

using namespace std;

int main() {
    unsigned int n, max;
    cin >> n;
    max = 0;
    do {
        n = n / 10;
        if (max < n % 10) {
            max = n % 10;
        }
    }while(n != 0);
    cout << max;
    return 0;
}
