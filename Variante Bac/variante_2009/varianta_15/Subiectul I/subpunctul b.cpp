#include <iostream>

using namespace std;

int main() {
    unsigned int a, n, i;
    cin >> a >> n;
    for(i = 1; i <= n; i++) {
        if(i % 2 == 0)
            a= a - i * i;
        else
            a = a + i * i;
    }
    cout << a;
    return 0;
}
