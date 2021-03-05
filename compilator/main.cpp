#include <iostream>
#include <fstream>

using namespace std;

ifstream in("bac.txt");

bool multipluDeZece(unsigned int n) {
    return (n % 10 == 0);
}

int main() {
    bool inceput = false;
    int _10secventa = 0, contor = 0;
    int n;
    in >> n;
    while (!in.eof()) {
        if (multipluDeZece(n)) {
            if (!inceput)
                inceput = true;
            if(inceput) {

            }
        } else {
            inceput = false;
        }
        in >> n;
    }
    return 0;
}
