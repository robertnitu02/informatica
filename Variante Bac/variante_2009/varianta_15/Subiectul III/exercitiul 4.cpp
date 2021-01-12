#include <iostream>
#include <fstream>

using namespace std;

ifstream in("BAC.IN");

int main() {
    unsigned int a = -1, b = -1, n;
    while(!in.eof()) {
        in >> n;
        if(n % 2 != 0) {
            if(a == -1 || b == -1) {
                if(a == -1)
                    a = n;
                else
                    b = n;
            } else {
                a = b;
                b = n;
            }
        }
    }
    in.close();
    if(a == -1 || b == -1)
        cout << "Numere insuficiente";
    else
        cout << a << ' ' << b;
    return 0;
}
