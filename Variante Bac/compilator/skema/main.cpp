#include <iostream>

using namespace std;
#define VALOARE_DEFINITA 2011

void inserare(unsigned int &n, unsigned int (a)[]) {
    unsigned int copie[21], contor = 1;
    for(int i = 1; i <= n; i++) {
        if(a[i] % 2 == 0)
            contor++;
        copie[i] = a[i];
    }
    int i = 0, j = 0;
    n = 1;
    while(contor != 0) {
        j++;
        i++;
        a[j] = copie[i];
        if(copie[i] % 2 == 0) {
            j++;
            a[j] = VALOARE_DEFINITA;
            contor--;
        }
        n++;
    }
}

int main() {
    unsigned int n, a[21];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    inserare(n, a);
    for(int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    return 0;
}
