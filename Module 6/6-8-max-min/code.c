// E. Max
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 103).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

#include <stdio.h>
#include <limits.h>
int main()
{
    int x;
    scanf("%d", &x);    

    int y;
    int max = INT_MIN;

    for (int i = 0; i <= x; i++)
    {
        scanf("%d", &y);
        if (y > max)
        {
          max = y;
        }
    }
        printf("%d ", max);

    return 0;
}