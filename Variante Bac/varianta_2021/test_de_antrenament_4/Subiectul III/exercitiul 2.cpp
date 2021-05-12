#include <iostream>

using namespace std;

int main() {
    int m, n, mat[10][10];

    cin >> m >> n;
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++)
            cin >> mat[i][j];
    }

    for(int i = 1; i <= m; i++) {
        bool E = false;
        int valMaxima = mat[i][1];
        for(int j = 2; j <= n; j++) {
            if(mat[i][j] > valMaxima && mat[i][j] < 21) {
                valMaxima = mat[i][j];
                if(!E) E = true;
            }
        }
        if(E)
            cout << valMaxima;
        else
            cout << "nu exista";
        cout << endl;
    }
    return 0;
}
