#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", a, b);

    //manual
    // int aLen = strlen(a);
    // int bLen = strlen(b);

    // for (int i = 0; i <= bLen ; i++)
    // {
    //    a[i + aLen] = b[i];
    // }

    // with strcat function
    strcat(a, b);

    printf("%s %s", a, b);
    
    return 0;
}