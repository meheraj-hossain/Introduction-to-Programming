// what is string
// string is character array
// we can declare string like
// char a[5]
// string has some super power.

#include <stdio.h>

int main() {

    // taking input and output in integer
    // int a[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     scanf("%d", &a[i]);
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d ", a[i]);
    // }

    // taking input and output in string
    // char a[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     scanf("%c", &a[i]);
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c", a[i]);
    // }    
    
    // M I R A J it will print M I as string take SPACE as SPACE is considered as a character.
    // so, MIRAJ will print MIRA (4 character as 4 sized array declared)
    // int, float don't take space as space is not an integer.

    char a[6];
    scanf("%s", &a);
    printf("%s\n", a);
    // we can take input and output by a single line in string
    // to print a single element
    // printf("%c", a[10]);
    // string puts a null character i.e \0 automatically to the next index of our taken input
    // that is why we need to declare at least 1 size more in string 
    return 0;
}