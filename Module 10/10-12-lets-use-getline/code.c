// B. Let's use Getline
// time limit per test1 second
// memory limit per test64 megabytes
// Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.

// Hint: use function getline(cin, s).

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

// It's guaranteed that S will contain '\' symbol.

// Output
// Print the answer required above.

#include <stdio.h>

int main() {
    char a[1000001];
    fgets(a, 1000001, stdin);
    
    for (int i = 0; a[i] != '\\'; i++)
    {
        printf("%c", a[i]);
    }
    
    return 0;
}