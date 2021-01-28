#include <iostream>

using namespace std;

int main() {
    unsigned int a, b, i, p, pm, k, x, y;
    cin >> a >> b >> k;
    pm = 0;
    y = 0;
    i = b;
    while(i >= a) {
        x = i;
        p = 0;
        while(x%k==0) {
            x = x / k;
            p = p + 1;
        }
        if(p != 0 && (p < pm || pm == 0)) {
            pm = p;
            y = i;
        }
        i = i - 1;
    }
    cout << y;
    return 0;
}
