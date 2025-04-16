// C. Next Alphabet
// time limit per test1 second
// memory limit per test256 megabytes
// Given a lowercase alphabet character. You have to print the next character in the alphabet.

// Input
// Only one line containing a lowercase English letter C
// .

// Output
// Print the next letter to C
//  in the alphabet.

// #include <stdio.h>

// int main() {
//     char ch;
//     scanf("%c", &ch);
//     if (ch == 'z')
//     {
//        printf("%c", 97);
//     } else {

//         printf("%c", ch + 1);
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
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("%d\n", i);
//         }

//     }

//     return 0;
// }

// I. Lucky Numbers
// time limit per test1 second
// memory limit per test256 megabytes
// A number of two digits is lucky if one of its digits is divisible by the other.

// For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

// Given a number between 10 and 99, determine whether it is lucky or not.

// Input
// Only one line containing a single number N
//  (10≤N≤99)
// .

// Output
// Print "YES" if the given number is lucky, otherwise print "NO".

// #include <stdio.h>

// int main() {
//     int x;
//     scanf("%d", &x);

//     int first = x / 10;
//     int last = x % 10;

//     if (last % first == 0 || first % last == 0)
//     {
//         printf("YES");
//     } else {
//         printf("NO");
//     }

//     return 0;
// }

// D. Ali Baba and Puzzles
// time limit per test1 second
// memory limit per test256 megabytes
// One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
//  numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×
// ) between the other three numbers; so that each operator is used only once.

// a□b□c=d
// Can you solve this tricky puzzle for him?
// Input
// Only one line containing four numbers a
// , b
// , c
//  and d
//  (−109≤a,b,c≤109
// ),(−1018≤d≤1018
// ).

// Output
// Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).

// #include <stdio.h>

// int main() {
//     long long int x,y,z;
//     long long int a;
//     scanf("%lld %lld %lld %lld", &x, &y, &z, &a);

//     if (x + y - z == a)
//     {
//        printf("YES");
//     }
//     else if (x + y * z == a)
//     {
//         printf("YES");
//     }
//     else if (x - y + z == a)
//     {
//         printf("YES");
//     }
//     else if (x - y * z == a)
//     {
//         printf("YES");
//     }
//     else if (x * y + z == a)
//     {
//         printf("YES");
//     }
//     else if (x * y - z == a)
//     {
//         printf("YES");
//     }
//     else {
//         printf("NO");
//     }

//     return 0;
// }

// Pattern 1
// Time Limit: 0.1 Seconds

// Memory Limit: 2.93 MB

// Statement
// You're given N as input. Print the following pattern given in testcases.

// For more clarification see the example below.

// Constraints
// 1 <= N <=10

// Input format
// Only one line containing a number N .

// Output Format
// Print the answer according to the required above

// #include <stdio.h>

// int main() {
//     int x;
//     scanf("%d", &x);

//     for (int j = 1; j <= x; j++)
//     {
//         for (int i = 1; i <= j; i++)
//     {
//         printf("%d ", i);
//     }
//         printf("\n");
//     }

//     return 0;
// }

// Pattern 2
// Time Limit: 1 Seconds

// Memory Limit: 2.93 MB

// Statement
// You're given N as input. Print the following pattern given in testcases.

// For more clarification see the example below.

// Constraints
// 1 <= N <=10

// Input format
// Only one line containing a number N .

// Output Format
// Print the answer according to the required above

// #include <stdio.h>

// int main()
// {
//     int x;
//     scanf("%d", &x);

//     for (int i = x; i >= 1; i--)
//     {
//         for (int j = i; j >= 1; j--)
//         {
//             printf("%d ", j);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// Pattern 3
// Time Limit: 1 Seconds

// Memory Limit: 2.93 MB

// Statement
// You're given N as input. Print the following pattern given in testcases.

// For more clarification see the example below.

// Constraints
// 1 <= N <=10

// Input format
// Only one line containing a number N .

// Output Format
// Print the answer according to the required above

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    for (int j = 1; j <= x; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("%c ", 64 + j);
        }
        printf("\n");
    }

    return 0;
}