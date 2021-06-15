#include <iostream>

using namespace std;

void frate(int x, int &y) {
    int cifreX = 0, copie = x;
    bool existaFrate = true;
    while(copie != 0) {
        cifreX++;
        copie /= 10;
        if(copie >= 0 && copie <= 9) {
            if (copie == 9) {
                existaFrate = false;
            }
        }
    }
    if (!existaFrate)
        y = -1;
    else {
        y = 0;
        while(x != 0) {
            int cifra = x % 10;
            x /= 10;
            if(cifra == 9) {
                y *= 10;
            } else {
                cifra++;
                y = y * 10 + cifra;
            }
        }
        copie = y;
        y = 0;
        while(copie != 0) {
            int cifra = copie % 10;
            y = y * 10 + cifra;
            copie /= 10;
        }
    }
}

int main() {
    int x = 1027, y;

    frate(x, y);
    cout << y << endl;

    x = 9027;
    frate(x, y);
    cout << y << endl;

    return 0;
}
