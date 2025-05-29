// A. Beautiful Matrix
// time limit per test2 seconds
// memory limit per test256 megabytes
// You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

// Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).
// Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).
// You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

// Input
// The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

// Output
// Print a single integer — the minimum number of moves needed to make the matrix beautiful.

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int a[5][5]; int r, c; int sum = 0;
//     for (int i = 0; i < 5; i++)
//     {
//        for (int j = 0; j < 5; j++)
//        {
//           scanf("%d", &a[i][j]);
//           if (a[i][j] == 1)
//           {
//             r = i; c = j;

//             sum = abs(r - 2) + abs(c - 2);
            
//           }
//        }
//     }

//     printf("%d", sum);

//     return 0;
// }

// B. Print from 1 to N
// time limit per test1 second
// memory limit per test64 megabytes
// Given a number N. Print numbers from 1 to N in separate lines.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N (1 ≤ N ≤ 103).

// Output
// Print N lines according to the required above.

// #include <stdio.h>

// void printNumber(int n, int in)
// {
//    if (in == n + 1)
//    {
//       return;
//    }
   
//    printf("%d\n", in);
//    printNumber(n, in + 1);
// }

// int main() {
//     int n; scanf("%d", &n);

//     printNumber(n, 1);
//     return 0;
// }

// F. Front - End
// time limit per test1 second
// memory limit per test256 megabytes
// You are given an array a
//  of n
//  integers, your task is to print the first (front) element then remove it, then print the last(end) element then remove it, and so on until the array becomes empty.

// Input
// The first line contains an integer n(1≤n≤105)
//  the number of elements in the array a

// The second line contains n
//  integers ai(−109≤ai≤109)
//  the elements of the array a
// .

// Output
// Print the array a
//  with the required order.


// #include <stdio.h>

// int main() {
//     int n; scanf("%d", &n); int a[n]; int x = 0; int y = n -1;
//     for (int i = 0; i < n; i++) scanf("%d", &a[i]);

//     while (x <= y)
//     {
//       printf("%d ", a[x]);
//       x++;
//       if (x <= y)
//       {
//          printf("%d ", a[y]);
//          y--;
//       }
      
//     }
   
//    //  printf("%d" , x);
//     return 0;
// }


// L. Summation
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N numbers. Print the summation of the array elements.

// Note: Solve this problem using recursion.

// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

// Output
// Print the summation of the N numbers.

#include <stdio.h>

void sum(int n, int a[],long long int *p, int in)
{
   if (in == n)
   {
       printf("%lld\n", *p);
       return;
   }


   *p += a[in];
   sum(n, a, p, in + 1);
}

int main() {
    int n; scanf("%d", &n); int a[n]; long long int count = 0;
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &a[i]);
    }

    sum(n, a, &count, 0);

    return 0;
}