// G. Factorial
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given a number N. Print the factorial of number N.

// Input
// First line contains a number T (1 ≤ T ≤ 15) number of test cases.

// Next T lines will contain a number N (0 ≤ N ≤ 20)

// Output
// For each test case print a single line contains the factorial of N.

// #include <stdio.h>

// int main()
// {
//     int testCase;
//     scanf("%d", &testCase);

//     for (int t = 1; t <= testCase; t++)
//     {
//         long long int total = 1;
//         int number;
//         scanf("%d", &number);

//         if (number == 0)
//         {
//             total = 1;
//         }
//         else
//         {
//             for (int i = 1; i <= number; i++)
//             {
//                 total *= i;
//             }
//         }

//         printf("%lld\n", total);
//     }

//     return 0;
// }

// K. Divisors
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N. Print all the divisors of N in ascending order.

// Input
// Only one line containing a number N (1 ≤ N ≤ 104).

// Output
// Print all positive divisors of N, one number per line.

// #include <stdio.h>

// int main() {
//     int number;
//     scanf("%d", &number);

//     for (int i = 1; i <= number; i++)
//     {
//         if (number % i == 0)
//         {
//            printf("%d\n", i);
//         }

//     }

//     return 0;
// }

// S. Sum of Consecutive Odd Numbers
// time limit per test1 second
// memory limit per test256 megabytes
// Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.

// Input
// First line contains a number T (1 ≤ T ≤ 10) number of test cases.

// Next T lines will contain two numbers X and Y (0 ≤ X, Y ≤ 104).

// Output
// Print the sum of all odd numbers between X and Y (excluding X and Y).

#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int j = 1; j <= testCase; j++)
    {
        int x, y;
        int total = 0;
        scanf("%d %d", &x, &y);

        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }

        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
                total += i;
        }

        printf("%d\n", total);
    }

    return 0;
}