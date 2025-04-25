// A. Create A New String
// time limit per test1 second
// memory limit per test256 megabytes
// Given two strings S and T. Print 2 lines that contain the following in the same order:

// Print the length of S and T separated by space.
// Print a new string that contains S and T separated by a space.
// For more clarification see the example below.

// Input
// The first line contains a string S (1 ≤ |S| ≤ 103) where |S| is the length of S.

// The second line contains a string T (1 ≤ |T| ≤ 103) where |T| is the length of T.

// Output
// Print the answer required above

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char a[1001], b[1001];
//     scanf("%s %s", a, b);
//     int aLength = strlen(a);
//     int bLength = strlen(b);
//     printf("%d %d\n", aLength, bLength);
//     printf("%s %s", a, b);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     int t;
//     scanf("%d", &t);

//     for (int i = 1; i <= t; i++)
//     {
//         int a, b;
//         scanf("%d %d", &a, &b);
//         if (a == b)
//         {
//             printf("Square\n");
//         }
//         else
//         {
//             printf("Rectangle\n");
//         }
//     }

//     return 0;
// }

// G. Conversion
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given a string S. Print the origin string after replacing the following:

// Replace every comma character ',' with a space character.
// Replace every capital character in S with its respective small character and Vice Versa.
// Input
// Only one line contains a string S (1 ≤ |S| ≤ 105) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.

// Output
// Print the string after the conversion.

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char a[100001];
//     scanf("%s", a);
//     int length = strlen(a);
//     for (int i = 0; i < length; i++)
//     {
//         if (a[i] == 44)
//         {
//             a[i] = 32;
//         } else if (a[i] >= 'a' && a[i] <= 'z')
//         {
//             a[i] -= 32;
//         }
//         else if (a[i] >= 'A' && a[i] <= 'Z')
//         {
//             a[i] += 32;
//         }

//         printf("%c", a[i]);
//     }

//     return 0;
// }

// I. Palindrome
// time limit per test1 second
// memory limit per test256 megabytes
// Given a string S. Determine whether S is Palindrome or not

// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

// Output
// Print "YES" if the string is palindrome, otherwise print "NO".

#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001];
    scanf("%s", a);
    int length = strlen(a);
    int x = 0;
    int y = length - 1;
    int isPalindrome = 1;

    while (x < y)
    {
        if (a[x] != a[y])
        {
            isPalindrome = 0;
            break;
        }
        else
        {
            x++;
            y--;
        }
    }

    if (isPalindrome == 1)
    {
        printf("YES");
    } else {
        printf("NO");
    }
    

    return 0;
}