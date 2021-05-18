#include <iostream>

using namespace std;

void afisare(int x, int y, int k) {
    int i, contor = 0;
    for(i = x; i <= y; i++) {
        cout << i << ' ';
        contor++;
        if (contor == k) {
            cout << " * ";
            contor = 0;
            continue;
        }
        if (i == y)
            cout << " *";
    }
}

int main() {
    afisare(11, 21, 4);
    return 0;
}
