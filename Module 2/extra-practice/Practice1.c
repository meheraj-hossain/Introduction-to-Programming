// Take a number from user and check if its a even number or odd number.

#include <stdio.h>

int main()
{
    int number0;
    scanf("%d", &number0);

    if (number0 % 2 == 0)
    {
        printf("It is an even number.");
    }
    else
    {
        printf("It is an odd number.");
    }

    return 0;
}