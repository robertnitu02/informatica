#include <iostream>

using namespace std;

unsigned int numarDivizori(unsigned int n) {
    unsigned int numar = 0;
    for(int i = 1; i <= n / 2; i++)
        if(n % i == 0)
            numar++;
    return numar;
}

int main() {
    unsigned int n, divizorMic = 1, numarMic = 1;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(numarDivizori(i) > divizorMic) {
            divizorMic = numarDivizori(i);
            numarMic = i;
        }
    }
    cout << numarMic;
    return 0;
}
