#include <iostream>

using namespace std;

int main() {
    unsigned int m, n;
    unsigned int matrice[101][101];

    cin >> m >> n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> matrice[i][j];

    bool simetric = false;
    int contorizareSimetrie = 1;
    for(int i = 1; i <= m; i++) {
        int contorLinie = 1;
        for(int j = 1; j <= n / 2; j++) {
            if(matrice[i][j] == matrice[i][j+2])
                contorLinie++;
        }
        if(contorLinie == n / 2)
            contorizareSimetrie++;
        if (i == m) {
            if(contorizareSimetrie == n - 1)
                simetric = true;
        }
    }

    if (simetric)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
