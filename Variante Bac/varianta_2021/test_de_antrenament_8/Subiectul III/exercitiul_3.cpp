#include <iostream>
#include <fstream>

using namespace std;

ifstream in("bac.txt");

int main() {

    int nr;
    int ultimA = -1, ultimB = -1;

    in >> nr;

    while(!in.eof()) {
        if(nr % 2 != 0) {
            if (ultimA == -1 && ultimB == -1) {
                ultimA = nr;
            } else {
                if(ultimB == -1)
                    ultimB = nr;
                else {
                    ultimB = ultimA;
                    ultimA = nr;
                }
            }
        }
        in >> nr;
    }

    in.close();
    if(ultimA == -1 && ultimB == -1) {
        cout << "nu exista";
    } else {
        cout << ultimA << ' ' << ultimB;
    }

    return 0;
}
