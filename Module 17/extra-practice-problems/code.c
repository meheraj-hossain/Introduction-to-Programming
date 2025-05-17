// A. Print Recursion
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N
// . Print "I love Recursion" N
//  times.

// Note: Solve this problem using recursion.

// Input
// Only one line containing a number N
//  (1≤N≤100)
//  .

// Output
// Print "I love Recursion" N
//  times.

// #include <stdio.h>

// void printString(int s, int n) {
//     if (s == n + 1)
//     {
//         return;
//     }

//     printf("I love Recursion\n");
//     printString(s + 1, n);
    
// }

// int main() {
//     int n;
//     scanf("%d", &n);

//     printString(1, n);

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

// void printNumber(int s, int n) {
//     if (s == n + 1)
//     {
//         return;
//     }

//     printNumber(s + 1, n);
//     if (s == 1)
//     {
//         printf("%d", s);
//     }
//     else {
//         printf("%d ", s);
//     }
    
    
    
// }

// int main() {
//     int n;
//     scanf("%d", &n);
//     printNumber(1, n);
    
//     return 0;
// }

// F. Print Even Indices
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.

// Note:

// Assume array A is 0-based indexing.
// Solve this problem using recursion.
// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

// Output
// Print numbers in even indices in a reversed order separated by spaces.

#include <stdio.h>


void printEvenIndices(int a[], int n, int i){
    if (i == n)
    {
        return;
    }

    printEvenIndices(a, n, i+1);
    if (i % 2 == 0)
    {
       printf("%d ", a[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
       scanf("%d", &a[i]);
    }


    printEvenIndices(a, n, 0);

    return 0;
}