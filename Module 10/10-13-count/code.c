// E. Count
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given a string S. Print the summation of its digits.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

// It's guaranteed that S contains only digits from 0 to 9.

// Output
// Print the answer required above.

#include <stdio.h>
#include <string.h>

int main() {
    char a[1000001];
    scanf("%s", a); // scanf since there will be no SPACE
    int length = strlen(a);
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += a[i] - '0';
    }
    printf("%d", sum);
    
    return 0;
}