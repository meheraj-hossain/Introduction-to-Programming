// M. Replace MinMax
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.
// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

// It's guaranteed that all numbers are distinct.

// Output
// Print the array after the replacement operation.


// #include <stdio.h>
// #include <limits.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[n];

//     int min = INT_MAX;
//     int max = INT_MIN;

//     int start = 0;
//     int end = 1;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         if (min > a[i])
//         {
//            min = a[i];
//            start = i;

//         }

//         if (max < a[i])
//         {
//            max = a[i];
//            end = i;
//         }
        
//     }

//     // printf("%d %d", start, end);
   
//     for (int i = 0; i < n; i++)
//     {
//         if (i == start)
//         {
//             a[i] = max;
//         }

//         if (i == end)
//         {
//             a[i] = min;
//         }
        
        
//         printf("%d ", a[i]);
//     }
    
    
    
//     return 0;
// }


// G. Palindrome Array
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N
//  and an array A
//  of N
//  numbers. Determine if it's palindrome or not.

// Note:

// An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

// Input
// First line contains a number N
//  (1≤N≤105)
//  number of elements.

// Second line contains N
//  numbers (1≤Ai≤109)
// .

// Output
// Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).


// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[n];
    
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int x = 0;
//     int y = n-1;
//     bool isPalindrome = true;

//     while ( x < y)
//     {
//        if (a[x] != a[y])
//        {
//         isPalindrome = false;
//         break;
//        }

//        x++;
//        y--;
       
//     }

//     if (isPalindrome)
//     {
//         printf("YES");
//     } else {
//         printf("NO");
//     }
    
    
    
//     return 0;
// }

// I. Smallest Pair
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N numbers. Print the smallest possible result of Ai + Aj + j - i , where 1  ≤  i < j  ≤  N.

// Input
// The first line contains a number T (1 ≤ T ≤ 100) number of test cases.

// Each test case contains two lines:

// The first line consists a number N (2 ≤ N ≤ 100) number of elements.
// The second line contains N numbers ( - 106 ≤ Ai ≤ 106).
// Output
// For each test case print a single line contains the smallest possible sum for the corresponding test case.

#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int ic = 1; ic <= t; ic++)
    {
        int n;
        scanf("%d", &n);
        int a[n+1];
        int min = INT_MAX;
    
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
    
        for (int i = n; i >= 1; i--)
        {
            a[i] = a[i -1];
        }

        // printf("%d %d %d %d %d %d", a[0],  a[1], a[2], a[3], a[4], a[5]);
    
        // for (int i = 0; i <= n; i++)
        // {
        //     printf("%d ", a[i]);
        // }
    
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {

                // printf("%d %d\n", i,j);
                int value = a[i] + a[j] + j - i;
                // printf("%d \n", value);
                
                if (min > value)
                {
                    min = value;
                }
                
            }
            
        }
        
        printf("%d\n", min);
    }
    
    
    
    return 0;
}