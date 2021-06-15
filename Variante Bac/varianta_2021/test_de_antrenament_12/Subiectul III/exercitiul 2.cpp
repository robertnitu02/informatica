#include <iostream>

using namespace std;

int main() {
    int mat[10][10], n, k;
    int pozitieDiagonalaSecundara = -1;

    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> mat[i][j];
            if(i == k && i + j == n + 1) {
                pozitieDiagonalaSecundara = j;
            }
        }
    }

    int circulare[100], contor = 0;
    for(int i = 1; i < pozitieDiagonalaSecundara; i++) {
        contor++;
        circulare[contor] = mat[k][i];
    }

    for(int i = contor, j = 1; i >= 1 && j < pozitieDiagonalaSecundara; i--, j++) {
        mat[k][j] = circulare[i];
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
