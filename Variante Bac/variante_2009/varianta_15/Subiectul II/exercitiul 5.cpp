#include <iostream>

using namespace std;
#define N 6

int main() {
    int mat[7][7], nr;
    cin >> nr;
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= N; j++)
            mat[i][j] = -1;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            mat[i][j] = (mat[i][j] == -1) ?
            nr % 10 : mat[i][j];
            mat[j][i] = (mat[j][i] == -1) ?
            nr % 10 : mat[j][i];
        }
        nr /= 10;
    }
    for(int i = 1; i <= N; i++)
        mat[i][i] = 0;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++)
            cout << mat[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
