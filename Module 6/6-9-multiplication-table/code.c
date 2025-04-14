// F. Multiplication table
// time limit per test1 second
// memory limit per test64 megabytes
// Given a number N. Print the maltiplication table of the number from 1 to 12

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", x, i, x * i);
    }
    
    return 0;
}