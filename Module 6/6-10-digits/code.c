// Q. Digits
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N. Print the digits of that number from right to left separated by space.

// Input
// First line contains a number T (1 ≤ T ≤ 10) number of test cases.

// Next T lines will contain a number N (0 ≤ N ≤ 109)

// Output
// For each test case print a single line contains the digits of the number separated by space.

#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 1; i <= testCase; i++)
    {
        int number;
        scanf("%d", &number);

        do
        {
            int remaining;
            remaining = number % 10;
            printf("%d ", remaining);

            number /= 10;
        } while (number != 0);
        printf("\n");
    }

    return 0;
}

// 121 / 10 = 12
// 12 / 10 = 1
// 1 / 10 = 0

// 121 % 10 = 1
// 12 % 10 = 2
// 1 % 10 = ?/