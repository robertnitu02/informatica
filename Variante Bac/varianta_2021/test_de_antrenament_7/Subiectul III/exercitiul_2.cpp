#include <iostream>

using namespace std;


int main() {
    int x, mat[10][10];

    cin >> x;

    int copie = x, nrElemente = 0;

    while (copie != 0) {
        nrElemente++;
        copie /= 10;
    }

    for(int i = nrElemente; i >= 1; i--) {
        int copieX = x;
        for(int j = nrElemente; j >= 1; j--) {
            mat[i][j] = copieX % 10;
            copieX /= 10;
        }
    }

    for(int i = 1; i <= nrElemente; i++) {
        for(int j = 1; j <= nrElemente; j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
