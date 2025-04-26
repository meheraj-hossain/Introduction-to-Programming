// C. Compare
// time limit per test1 second
// memory limit per test256 megabytes
// Given two strings X and Y . Print the smallest lexicographical one.

// Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

// Input
// Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

// Output
// Print the smallest lexicographical string.

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char a[21], b[21];
//     scanf("%s %s", a, b);
//     // printf("%s %s", a, b);

//     int value = strcmp(a, b);
//     // printf("%d", value);
//     if (value >= 0)
//     {
//        printf("%s", b);
//     } else{
//         printf("%s", a);
//     }

//     return 0;
// }

// K. Sum Digits
// time limit per test2 seconds
// memory limit per test256 megabytes
// Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

// Input
// First line contains a number N (1  ≤  N  ≤  106) number of digits.

// Second line contains N digits (0 ≤ Ai ≤ 9).

// Output
// Print the summation of these digits.

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     char a[n+1];
//     scanf("%s", a);
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum += a[i] - '0';
//     }

//     printf("%d", sum);

//     return 0;
// }

// J. Count Letters
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given a string S. Determine how many times does each letter occurred in S.

// Input
// Only one line contains the string S (1 ≤ |S| ≤ 107) where |S| is the length of the string and it consists of only lowercase English letters.

// Output
// For each character that appears in S, print a single line that contains the following format: "X : Y" where X is the letter and Y is the number of times that letter X occurred in S.

// K. I Love strings
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given two strings S and T. Print a new string that contains the following:

// The first letter of the string S followed by the first letter of the string T.
// the second letter of the string S followed by the second letter of the string T.
// and so on...
// In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
// Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

// Input
// The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.

// Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.

// Output
// For each test case, print the required string.

#include <stdio.h>
#include <string.h>

int main()
{
   int t;
   scanf("%d", &t);

   for (int i = 1; i <= t; i++)
   {
      char a[51], b[51];
      scanf("%s %s", a, b);
      int aLen = strlen(a);
      int bLen = strlen(b);
      char newArray[aLen + bLen + 1];
      int sArray;

      for (int i = 0; i <= aLen + bLen; i = i + 2)
      {
         newArray[i] = a[i / 2];
      }

      for (int i = 1; i <= aLen + bLen; i = i + 2)
      {
         newArray[i] = b[i / 2];
      }

      if (aLen < bLen)
      {
         for (int i = aLen * 2; i <= aLen + bLen; i++)
         {
            newArray[i] = b[i - aLen];
         }
      }
      else if (aLen > bLen)
      {
         for (int i = bLen * 2; i <= aLen + bLen; i++)
         {
            newArray[i] = a[i - bLen];
         }
      }

      printf("%s\n", newArray);
   }

   return 0;
}