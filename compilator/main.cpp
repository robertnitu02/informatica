#include <iostream>
#include <string.h>

using namespace std;


int main() {
    char s[50];
    strcpy(s, "informatica");

    cout << strlen(s);

    for(int i = 0; i < strlen(s); i++)
            if(strchr("aeiou", s[i]) != NULL)
                s[i] = '*';

    cout << s;
    return 0;
}
