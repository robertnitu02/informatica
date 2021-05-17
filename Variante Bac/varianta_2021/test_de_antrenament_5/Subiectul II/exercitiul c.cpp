#include <iostream>

using namespace std;


int main() {
    int x, y;

    cin >> x;
    y = 0;

    do {
        if(x > 9) {
            do {
                x /= 10;
            }while(x >= 9);
        }
        y = y * 10 + x;
        cin >> x;
    }while(x != 0);

    cout << y;
    return 0;
}
