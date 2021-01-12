#include <iostream>

using namespace std;

int main() {
    unsigned int m, n, mat[51][51];
    cin >> m >> n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> mat[i][j];
    unsigned int linie = m - 1;
    unsigned int coloana = n - 1;
    for(int i = linie; i < m; i++) {
        for(int j = 1; j <= n; j++)
            mat[i][j] = mat[i+1][j];
    }
    for(int i = 1; i < m; i++) {
        for(int j = coloana; j < n; j++)
            mat[i][j] = mat[i][j+1];
    }
    m--; n--;
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
