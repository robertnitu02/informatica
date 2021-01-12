#include <iostream>
#include <fstream>

using namespace std;

ifstream in("BAC.txt");

int main() {
    int v[1001], nr, contor = -1;
    in >> nr;
    while(!in.eof()) {
        contor++;
        v[contor] = nr;
        in >> nr;
    }
    contor++;
    in.close();
    for(int i = 0; i < contor; i++) {
        bool repetat = false;
        for(int j = 0; j < contor; j++) {
            if(i == j) continue;
            if(v[i] == v[j]) {
                repetat = true;
                break;
            }
        }
        if (!repetat)
            cout << v[i] << ' ';
    }
    return 0;
}
