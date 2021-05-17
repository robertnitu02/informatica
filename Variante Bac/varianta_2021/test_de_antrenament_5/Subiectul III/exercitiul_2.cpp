#include <iostream>

using namespace std;


int main() {
    int m, n, mat[10][10];

    cin >> m >> n;

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            mat[i][j] = (i * j) % 10;
        }
    }

    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++)
            cout << mat[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
