// Take a number from user and check if its a positive or negative number.

#include <stdio.h>

int main()
{
    int number0;
    scanf("%d", &number0);

    if (number0 > 0)
    {
        printf("It is a positive number.");
    }
    else
    {
        printf("It is a negetive number.");
    }

    return 0;
}