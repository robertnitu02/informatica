#include <iostream>

using namespace std;

unsigned int suma(unsigned int a, unsigned int b) {
    unsigned int s = 0;

    if(b > a) {
        int aux = a;
        a = b;
        b = aux;
    }

    for(int i = 1; i <= b / 2; i++) {
        if(a % i == 0 && b % i == 0)
            s+=i;
    }
    return s;
}

int main() {
    cout << suma(12, 20);
    return 0;
}
