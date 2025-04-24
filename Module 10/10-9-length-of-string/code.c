#include <stdio.h>
#include <string.h>

int main() {
    char a[51]; // if constraint says 50 then we will take at least 1 more size
    scanf("%s", a); // we take the input
    int count = 0; // initialize count
    for (int i = 0; a[i] != '\0'; i++) // start from index 0, do loop till value of a[i] not equal to \0 as we know the last index of string contains it 
    {
        count++; // increase the count
    }

    printf("%d\n", count); // print the count

    // we can use strlen built in function the find the length of a string

    char b[101];
    scanf("%s", b);

    int size = strlen(b);
    printf("%d", size); // d because we are counting
    
    return 0;
}