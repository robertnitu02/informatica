#include <iostream>

using namespace std;

int identice(int n) {
    bool egale = true;
    int cifra = n % 10;
    n /= 10;
    while(n != 0) {
        if(cifra != n % 10) {
            egale = false;
            break;
        }
        n /= 10;
    }
    return egale ? 1 : 0;
}

int main() {
    cout << identice(2222) << endl;
    cout << identice(212);
    return 0;
}
