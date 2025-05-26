// when we need to store an array to an array, we need 2d array

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c]; // 1st is the row and second is the column
    // visual //
    // 1 2 3
    // 4 5 6
    // here we can see there are 2 rows and 3 columns. in the 0th index we kept 1 2 3 and in the 1th array we kept 4 5 6.

    // how to take input in 2d array?

    for (int i = 0; i < r; i++) // 1st we will go to each row one by one
    {
        for (int j = 0; j < c; j++) // in each row one by one, we will go to the column to take input
        {
            /* code */ scanf("%d", &a[i][j]);
        }
    }

    // how to show output?

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            /* code */ printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("%d", a[1][0]);

    return 0;
}

// 