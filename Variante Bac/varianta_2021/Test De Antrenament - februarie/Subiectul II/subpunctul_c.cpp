#include <iostream>

using namespace std;

int main() {
    unsigned int n;
    int m, c;
    cin >> n;
    m = 10;
    if(n == 0) {
        m = 0;
    } else {
        do {
            c = n % 10;
            n = n / 10;
            if(c <= m)
                m = c;
            else
                m = -1;
        }while(n != 0);
    }
    cout << m;
    return 0;
}
