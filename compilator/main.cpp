#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char s[20];
    strcpy(s, "informatie");
    int n = strlen(s) - 1;
    for(int i = 0; i < n / 2; i++) {
        if(strchr("aeiou", s[i]) != NULL && strchr("aeiou", s[n-i])!= NULL) {
            s[i] = s[i+1];
            s[n-i] = s[n-i-1];
        }
    }
    cout << s;
    return 0;
}
