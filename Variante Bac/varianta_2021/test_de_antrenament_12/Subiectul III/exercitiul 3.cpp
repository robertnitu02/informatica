#include <iostream>
#include <fstream>

using namespace std;

ifstream in("bac.txt");

int main() {
    int nr, val = -1;
    int pozitie = 1;

    in >> nr;

    while(!in.eof()) {
        if (val == -1) {
            val = nr;
        } else {
            if(nr >= val)
                pozitie++;
        }
        in >> nr;
    }

    in.close();
    cout << pozitie;
    return 0;
}
