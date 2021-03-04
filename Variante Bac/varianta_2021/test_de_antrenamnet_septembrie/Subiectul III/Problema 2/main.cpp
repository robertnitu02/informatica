#include <iostream>

#define PrimulPatratPerfect 0

using namespace std;

unsigned int matrice[100][100], n, m;

int main() {
    cin >> m >> n; // m linii n coloane ai dreacu
    unsigned int primelePatratePerfectePare = m * n;
    unsigned int patratulPerfectPar = PrimulPatratPerfect;
    for(int i = m - 1; i >= 0; i--) {
        for(int j = n - 1; j >= 0; j--) {
            matrice[i][j] = patratulPerfectPar * patratulPerfectPar;
            patratulPerfectPar += 2;
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++)
            cout << matrice[i][j] << " ";
        cout << endl;
    }
    return 0;
}
