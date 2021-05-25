#include <iostream>

using namespace std;

int main() {
    int n, m, mat[10][10];
    bool exista = false;

    cin >> m >> n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++)
            cin >> mat[i][j];

    for(int i = 1; i <= n - 1; i++) {
        bool gasit = false;
        int val = mat[1][i];
        for(int j = m - 1; j >= 2 && !gasit; j--) {
            if(val == mat[n][j]) {
                cout << mat[n][j] << ' ';
                gasit = true;
                if(!exista)
                    exista = true;
            }
        }
    }

    if(!exista)
        cout << "nu exista";
    return 0;
}
