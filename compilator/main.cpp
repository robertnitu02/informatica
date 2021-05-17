#include <iostream>
#include <fstream>

using namespace std;

ifstream in("bac.txt");

int main() {
    int n, nr[100];

    in >> n;
    in >> nr[1];

    for(int i = 2; i <= n; i++)
        in >> nr[i];
    in.close();

    cout << nr[1] << ' ';
    for(int i = 2; i <= n; i++) {
        int maxim = 0;
        for(int j = 1; j <= i; j++) {
            if (nr[j] > maxim)
                maxim = nr[j];
        }
        cout << maxim << ' ';
    }
    return 0;
}
