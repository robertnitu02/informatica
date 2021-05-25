#include <iostream>
#include <fstream>

using namespace std;

ifstream in("bac.txt");

int main() {
    int primulNumar, nr;
    int k = 0;
    int pozitie = 0;

    in >> nr;

    while(!in.eof()) {
        if (k == 0) {
            primulNumar = nr;
            k++;
        } else {
            if (nr < primulNumar)
                pozitie++;
        }
        in >> nr;
    }

    in.close();
    cout << pozitie + 1;
    return 0;
}
