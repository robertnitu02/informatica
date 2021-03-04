#include <iostream>
#include <fstream>

using namespace std;

ifstream in("bac.txt");

bool apartineInterval(int n, int a, int b) {
    if(a <= n && n <= b)
        return true;
    return false;
}

bool nuSeGasesteInInterval(int v[], int n, int a, int b) {
    int contor = 0;
    for(int i = 1; i <= n; i++) {
        if(!apartineInterval(v[i], a, b))
            contor++;
    }
    return (contor == n);
}

int main() {
    int n, v[100], contor = 0;
    in >> n;
    for(int i = 1; i <= n; i++)
        in >> v[i];

    int a, b;
    in >> a >> b;
    while (!in.eof()) {
        if(nuSeGasesteInInterval(v, n, a, b))
            contor++;
        in >> a >> b;
    }
    in.close();
    cout << contor;
    return 0;
}
