#include <iostream>
#include <string.h>

using namespace std;

int main() {
    unsigned int n, k = 0;
    char primulCuvant[20], cuvant[20];
    cin >> n;
    cin >> primulCuvant;
    n--;
    for(int i = 1; i <= n; i++) {
        cin >> cuvant;
        if (strstr(cuvant, primulCuvant) && cuvant[0] == primulCuvant[0]) k++;
    }
    cout << k;
    return 0;
}
