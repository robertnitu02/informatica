#include <iostream>
#include <fstream>

using namespace std;

ifstream in("bac.txt");

int main() {

    int nr, numerePare[100], contor = 1;
    bool nrPare = false;

    in >> nr;
    if (nr % 2 == 0) {
        numerePare[contor] = nr;
        nrPare = true;
    }

    while(!in.eof()) {
        in >> nr;
        if (nr % 2 == 0) {
            contor++;
            numerePare[contor] = nr;
            if(!nrPare)
                nrPare = true;
        }
    }

    in.close();

    if(!nrPare)
        cout << "nu exista";
    else {
        for(int i = 1; i <= contor; i++) {
            for(int j = i + 1; j <= contor; j++) {
                if(numerePare[i] > numerePare[j]) {
                    int aux = numerePare[i];
                    numerePare[i] = numerePare[j];
                    numerePare[j] = aux;
                }
            }
        }

        for(int i = 1; i <= contor; i++) {
            cout << numerePare[i] << ' ';
        }
    }
    return 0;
}
