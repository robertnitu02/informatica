#include <iostream>

using namespace std;

int armonie(int x, int y) {
    int dX = 0, dY = 0;
    int suma = x + y;

    for(int d = 2; d <= x; d++)
        if(x % d == 0)
            dX+=d;
    for(int d = 2; d <= y; d++)
        if(y % d == 0)
            dY+=d;

    if(dX < suma && suma < dY)
        return 1;
    return 0;
}

int main() {
    cout << armonie(8, 12) << endl;
    cout << armonie(8, 13);
    return 0;
}
