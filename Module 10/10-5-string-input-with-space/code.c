// scanf stops taking input upto SPACE 
// to take SPACE as input we can use  fgets function and fgets is standard to take SPACE as input

#include <stdio.h>
#include<string.h> // if fgets function does not work

int main() {
    char a[20];
    // scanf("%s", a);
    // printf("%s", a);
    // Meheraj Hossain
    // Only Meheraj will be printed by the printf as scanf stopped taking input after it got the SPACE
    fgets(a, 20, stdin); // fgets needs 3 parameters, string name, string size, and stdin coming from stdio in the end
    // here in 20 i.e 19 index, \0 will be put automatically by string
    // fgets has a limitation which is it stops at ENTER but takes the ENTER as input unlike scanf that does not take SPACE as input
    // printf("%s", a);
    printf("%d", a[15]);
    return 0;
}
