#include <iostream>

using namespace std;

int main() {
    int n, mat[10][10];

    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            mat[i][j] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(i + j == n + 1)
                mat[i][j] = 0;
        }
    }

    int contorC = 1;
    for(int i = n - 1; i >= 0; i--) {
        if(contorC <= n - 1) {
            mat[1][contorC] = i;
            contorC++;
        } else
            break;
    }

    contorC = 2;
    for(int i = 1; i < n; i++) {
        mat[n][contorC] = i;
        contorC++;
    }

    for(int i = 2; i < n; i++) {
        int ordine = 1;
        int value = n - i;
        for(int j = 1; j <= n; j++) {
            if (mat[i][j] == 0) {
                ordine = 2;
                value = 0;
            } else {
                mat[i][j] = value;
                value = (ordine == 1) ? - 1 : + 1;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
