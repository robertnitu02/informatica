#include <iostream>

using namespace std;

int main() {
    unsigned int x, y, i, j, s;

    cin >> x >> y;
    i = x;
    j = y;
    s = 0;

    while(i <= j) {
        if(i % 2 == 0) {
            s = s + j;
        }
        if(j % 2 == 0) {
            s = s + i;
        }
        i = i + 1;
        j = j - 1;
    }
    cout << s;
    return 0;
}
