#include <stdio.h>

int main() {
    int aN;
    scanf("%d", &aN);
    int a[aN];
    for (int i = 0; i < aN; i++)
    {
        scanf("%d", &a[i]);
    }

    int bN;
    scanf("%d", &bN);
    int b[bN];
    for (int i = 0; i < bN; i++)
    {
        scanf("%d", &b[i]);
    }

    int c[aN+bN];

    for (int i = 0; i < aN; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < bN; i++)
    {
        c[i + aN] = b[i];
    }

    for (int i = 0; i < aN+bN; i++)
    {
        printf("%d ", c[i]);
    }
    
    
    

    return 0;
}