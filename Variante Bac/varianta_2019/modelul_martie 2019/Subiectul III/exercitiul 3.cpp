#include <iostream>
#include <fstream>

using namespace std;

ifstream in("bac.txt");

bool aceasiParitate(unsigned int nr1, unsigned int nr2) {
    if (nr1 % 2 == 0 && nr2 % 2 == 0)
        return true;
    if (nr1 % 2 != 0 && nr2 % 2 != 0)
        return true;
    return false;
}

int main() {
    unsigned int n, v[101], contor = 0;
    bool paritar = false;
    in >> n;
    while(!in.eof()) {
        unsigned int numar;
        contor++;
        in >> v[contor];
    }
    in.close();

    for(int i = 1; i < n; i++) {
        contor = 0;
        for(int j = n; j <= n; j++) {
            if (aceasiParitate(v[i], v[j]))
                contor++;
        }
        if (contor != n) {
            paritar = false;
            break;
        }
    }

    if (paritar)
        cout << "NU";
    else
        cout << "DA";
    return 0;
}
