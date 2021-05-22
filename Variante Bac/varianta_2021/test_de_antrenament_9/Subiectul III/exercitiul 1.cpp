#include <iostream>

using namespace std;

void divizor(int a, int b, int k, int &nr) {
    nr = 0;
    if(a > b) {
        int aux = b;
        b = a;
        a = aux;
    }

    for(int i = a; i <= b; i++) {
        if(i % k == 0 && i % 10 == k)
            nr++;
    }
}

int main() {
    int a, b, k, nr;

    a = 3;
    b = 50;
    k = 4;

    divizor(a, b, k, nr);
    cout << nr;
    return 0;
}
