#include <stdio.h>

void spacePrinter(int length) {
    for (int i = 1; i <= length; i++)
    {
       printf(" ");
    }
}

void starPrinter(int length) {
    // for (int i = 1; i <= length; i++)
    for (int i = length; i >= 1; i--)
    {
    //    printf("*");
    printf("%d", i);
    // printf("%c ", i -1 + 'A');
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int space = 4;
    int star = 1;
    
    for (int i = 1; i <= n; i++)
    {
       spacePrinter(space);
       starPrinter(star);
       space -= 1;
       star += 1;

       printf("\n");
    }
    return 0;
}