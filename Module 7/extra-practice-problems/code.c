// Take an array from input and print all the even numbers of that array.

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     int isEven = 0;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);

//         if (a[i] % 2 == 0)
//         {
//             printf("%d ", a[i]);
//             isEven++;
//         }
//     }

//     if (isEven == 0)
//     {
//         printf("No Even number");
//     }

//     return 0;
// }

// Take an array from input and count how many odd numbers are present in that array.

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     int countOdd = 0;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);

//         if (a[i] % 2 != 0)
//         {
//             countOdd++;
//         }
//     }

//     printf("%d", countOdd);
//     return 0;
// }

// Take an array from input and print the maximum value of that array.

// #include <stdio.h>
// #include <limits.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     int maximum = INT_MIN;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);

//         if (maximum < a[i])
//         {
//             maximum = a[i];
//         }
//     }

//     printf("%d", maximum);

//     return 0;
// }

// Take an array from input and print the minimum value of that array.


#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int minimum = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (minimum > a[i])
        {
            minimum = a[i];
        }
    }

    printf("%d", minimum);

    return 0;
}