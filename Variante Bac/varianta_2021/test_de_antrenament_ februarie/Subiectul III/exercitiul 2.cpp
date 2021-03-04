#include <iostream>

using namespace std;

int main() {
    unsigned int n, mat[10][10];

    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> mat[i][j];

    for(int i = 1; i < n; i++)
        cout << mat[i][1] << ' ';
    for(int i = n; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << mat[i][j] << ' ';
        }
    }
    for(int i = n - 1; i >= 1; i--) {
        if(i == 1) {
            for(int j = n; j > 1; j--)
                cout << mat[i][j] << ' ';
        } else {
            cout << mat[i][n] << ' ';
        }
    }
    return 0;
}
