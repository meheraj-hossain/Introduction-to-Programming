// F. Reversing
// time limit per test1 second
// memory limit per test64 megabytes
// Given a number N and an array A of N numbers. Print the array in a reversed order.

// Note:

// *Don't use built-in-functions.

// Input
// First line contains a number N (1 ≤ N ≤ 103) number of elements.

// Second line contains N numbers (0 ≤ Ai ≤ 109).

// Output
// Print the array in a reversed order.

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int x = 0;
//     int y = n - 1;

//     while (x < y)
//     {
//         int temp = a[x];
//         a[x] = a[y];
//         a[y] = temp;

//         x++;
//         y--;
//     }

//     for (int i = 0; i < n; i++)
//     {
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

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int isPalindrome = 1;
//     int x = 0;
//     int y = n -1;

//     while (x < y)
//     {
//         if (a[x] != a[y])
//         {
//             isPalindrome = 0;
//             break;
//         }

//         x++;
//         y--;
        
//     }
//     if (isPalindrome)
//     {
//         printf("YES");
//     } else {
//         printf("NO");
//     }
    
    
    
//     return 0;
// }

// F. Way Too Long Words
// time limit per test1 second
// memory limit per test256 megabytes
// Given a string S. Print the origin string if it's not too long otherwise, print the special abbreviation.

// Note: The string is called too long, if its length is strictly more than 10 characters. If the string is too long then you have to print the string in the following manner:

// Print the first character in the string.
// Print number of characters between the first and the last characters.
// Print the last character in the string.
// For example: "localization" will be "l10n", and "internationalization" will be "i18n".

// Input
// The first line contains a number T (1 ≤ T ≤ 100) number of test cases.

// Each of the T following lines contains a string S (1 ≤ |S| ≤ 100) where |S| is the length of the string.

// It's guaranteed that S contains only lowercase Latin letters.

// Output
// For each test case, print the result string.

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int t;
//     scanf("%d", &t);
//     for (int it = 1; it <= t; it++)
//     {
//         char a[101];
//         scanf("%s", a);
//         int length = strlen(a);
//         // printf("%d", length);
        
//         if (length <= 10)
//         {
//             printf("%s", a);
//         } else {
//             int count = 0;
//             for (int i = 1; i < length - 1; i++)
//             {
//                 count++;
//             }
//            printf("%c%d%c", a[0], count, a[length - 1]);
//         }

//         printf("\n");
//     }
    
    

//     return 0;
// }

// D. Strings
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given two strings A and B. Print three lines contain the following:

// The size of the string A and size of the string B separated by a space
// The string produced by concatenating A and B (A + B).
// The two strings separated by a single space respectively, after swapping their first character.
// For more clarification see the example below.

// Input
// The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.

// The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.

// Output
// Print the answer required above.

#include <stdio.h>
#include <string.h>

int main() {
    char a[11], b[11];
    scanf("%s %s", a, b);
    int aLength = strlen(a);
    int bLength = strlen(b);
    
    printf("%d %d\n", aLength, bLength);
    char c[aLength+bLength + 1];
    for (int i = 0; i < aLength; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i <= bLength; i++)
    {
        c[i + aLength] = b[i];
    }

    printf("%s\n", c);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s", a, b);

    
    
    return 0;
}