#include <stdio.h>
#include <string.h>

int main() {
    // manual
    // int a, b;
    // scanf("%d %d", a, b);

    char a[101], b[101];
    scanf("%s %s", a, b);
    int aLen = strlen(a);
    int bLen = strlen(b);
    int value = 1;
    if (aLen >= bLen)
    {
       value = aLen;
    } else {
        value = bLen;
    }
    

    for (int i = 0; i < value; i++)
    {
        a[i] = b[i];
    }

    printf("%s %s", a, b);

    // we can use strcpy function to copy string
    //  printf("%s %s", strcpy(a, b), b); // strcpy takes 2 string parameter and it changes the first string
    
    return 0;
}