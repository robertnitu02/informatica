#include <iostream>

using namespace std;

void tablou(unsigned int n, unsigned int k,
            unsigned int a[100]) {
    int contor = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            a[contor] = i;
            contor++;
        }
    }
}

int main() {

    return 0;
}
