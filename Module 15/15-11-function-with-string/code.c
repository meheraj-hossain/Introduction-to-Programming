#include <stdio.h>
#include <string.h>

void functionWithString(char s[]) {
    int len = strlen(s);

    for (int i = len; i < 11 -1; i++)
    {
       s[i] = 'a';
    }
    s[10] = '\0';
}

int main() {
    char s[11] = "hello" ;
    functionWithString(s);
    printf("%s", s);
    return 0;
}