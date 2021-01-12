#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char a[31], b[31];
    int na, nb;
    char prefix[16];
    int contor = 0;
    cin >> a;
    cin >> b;
    na = strlen(a);
    nb = strlen(b);
    for(int i = na - 1; i >= 0; i--) {
        for(int j = 0; j < nb; j++) {
            if(a[i] == b[j]) {
                prefix[contor] = a[i];
                contor++;
                break;
            }
        }
    }
    prefix[contor] = '\0';
    if(strlen(prefix) == 0 ||
       strlen(prefix) == 1) {
        cout << "NU EXISTA";
    }
    else {
        int lungime = strlen(prefix);
        for(int i = lungime - 1; i >= 0; i--)
            cout << prefix[i];
    }
    return 0;
}
