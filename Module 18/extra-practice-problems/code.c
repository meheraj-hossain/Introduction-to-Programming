// T. Matrix
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

// Input
// First line contains a number N (1 ≤ N ≤ 100) described above.

// Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

// Output
// Print the absolute difference between the summation of the matrix main diagonals.

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int r, c;
//     scanf("%d", &r);
//     c = r;
//     int a[r][c];
//     int sumPrimary = 0;
//     int sumSecondary = 0;

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if (i == j)
//             {
//                 sumPrimary += a[i][j];
//             }

//             if (i + j == r - 1)
//             {
//                 sumSecondary += a[i][j];
//             }
//         }
//     }

//     printf("%d", abs());
//     return 0;
// }

// S. Search In Matrix
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given two numbers N and M, a 2D array of size N * M and a number X. Determine whether X exists in the 2D array A or not.

// Input
// First line contains two numbers N, M (2 ≤ N, M ≤ 100) N donates number of rows and M donates number of columns.

// Each of the next N lines will contain M numbers (1 ≤ Ai ≤ 105).

// Last line contains a number X (0 ≤ X ≤ 105) described above.

// Output
// Print "will take number" if the number doesn't exist in the 2D array otherwise, print "will not take number".

// #include <stdio.h>

// int main()
// {
//     int r, c;
//     scanf("%d %d", &r, &c);
//     int a[r][c];
//     int flag = 0;

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     int x;
//     scanf("%d", &x);

//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if (a[i][j] == x)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//     }

//     if (flag == 0)
//         printf("will take number");
//     else
//         printf("will not take number");

//     return 0;
// }

// Take input a matrix and check if it’s a scalar matrix or not.

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int count0 = 0;
    int scalarValue = 1;
    int countScalarValue = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i != j)
            {
                if (a[i][j] == 0)
                {
                    count0++;
                }
            }

             if (i == j)
            {
               // if (a[i][j] == scalarValue)  // check if it is a scalar matrix 
                if(a[i][j] == 1)
                {
                    countScalarValue++;
                }
            }
        }
    }

    if ((count0 == r * c - c) && (countScalarValue == r))
        printf("Unit matrix");
    else
        printf("Not Unit matrix");

    return 0;
}