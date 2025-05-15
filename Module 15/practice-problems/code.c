// A. Add
// time limit per test1 second
// memory limit per test64 megabytes
// Given two numbers X and Y, Print their summation.

// Note: Solve this problem using function.

// Input
// Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

// Output
// Print the summation value.

// #include <stdio.h>

// void summation(int x, int y){
//     int sum = x + y;
//     printf("%d", sum);
// } 

// int main() {
//     int x, y;
//     scanf("%d %d", &x, &y);
//     summation(x,y);
//     return 0;
// }

// B. Print
// time limit per test1 second
// memory limit per test64 megabytes
// Given a number N. Print all numbers from 1 to N.

// Note: Solve this problem using function.

// Input
// Only one line contains a number N (1 ≤ N ≤ 103).

// Output
// print numbers form 1 to N separated by a single space.

// #include <stdio.h>

// void printAll(int length) {
//     for (int i = 1; i <= length - 1; i++)
//     {
//        printf("%d ", i);
//     }
// }

// int main() {
//     int n;
//     scanf("%d", &n);

//     printAll(n);
//     printf("%d", n);
//     return 0;
// }


// G. Max and MIN
// time limit per test1 second
// memory limit per test64 megabytes
// Given an array A of size N. Print the minimum and the maximum number in the array.

// Note: Solve this problem using function.

// Input
// First line will contain a number N (1 ≤ N ≤ 103) number of elements.

// Second line will contain N numbers (0 ≤ Xi ≤ 105).

// Output
// Print the minimum and the maximum number separated by a space.

// #include <stdio.h>
// #include <limits.h>

// void minMax(int a[], int length) {
//     int min = INT_MAX;
//     int max = INT_MIN;

//     for (int i = 0; i < length; i++)
//     {
//        if (a[i] > max)
//        {
//          max = a[i];
//        }

//        if (a[i] < min)
//        {
//         min = a[i];
//        }
       
       
//     }

//     printf("%d %d", min, max);
// }


// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d", &a[i]);
//     }

//     minMax(a, n);

//     return 0;
// }


// T. Sort Numbers
// time limit per test0.25 seconds
// memory limit per test256 megabytes
// Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

// Input
// Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

// Output
// Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

#include <stdio.h>

void printSorted(int a[]) {
    for (int i = 0; i < 2; i++)
    {
       for (int j = i + 1; j < 3; j++)
       {
          if (a[i] > a[j])
          {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
          }
          
       }
       
    }
    
    for (int i = 0; i < 3; i++)
    {
       printf("%d\n", a[i]);
    }
}

void printUnsorted(int x, int y, int z){
    printf("%d\n%d\n%d", x, y, z);
}

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int a[3] = {x, y, z};
    
    printSorted(a);
    printf("\n");
    printUnsorted(x, y, z);
    return 0;
}
