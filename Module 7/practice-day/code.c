// A. Summation
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

// absolute value : means to remove any negative sign in front of a number .

// EX : |-5| = 5 , |7| = 7

// Input
// First line contains a number N (1 ≤ N ≤ 105) number of elements.

// Second line contains N numbers (-109  ≤  Ai  ≤  109).

// Output
// Print the absolute summation of these numbers.

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     long long int summation = 0;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         summation += a[i];
//     }

//     if (summation < 0)
//     {
//         summation = summation * (-1);
//     }
//     printf("%lld", summation);

//     return 0;
// }

// B. Searching
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

// Note: X may be found once or more than once and may not be found.

// Input
// First line contains a number N (1 ≤ N ≤ 105) number of elements.

// Second line contains N numbers (0 ≤ Ai ≤ 109).

// Third line contains a number X (0 ≤ X ≤ 109).

// Output
// Print the position of X in the first time you find it. If it doesn't exist print -1.

// #include <stdio.h>
// #include <stdbool.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     int ind = 0;
//     int ifExist = false;

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int x;
//     scanf("%d", &x);

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == x)
//         {
//            ind = i;
//            ifExist = true;
//            break;
//         }

//     }

//     if (ind == 0 && ifExist == false)
//     {
//         printf("%d", -1);
//     } else {
//         printf("%d", ind);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);

//         if (a[i] == 0)
//         {
//             a[i] = 0;
//         }
//         else if (a[i] < 0)
//         {
//             a[i] = 2;
//         }
//         else
//         {
//             a[i] = 1;
//         }
//         printf("%d ", a[i]);
//     }

//     return 0;
// }


// D. Positions in array
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N numbers. Print all array positions that store a number less than or equal to 10 and the number stored in that position.

// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers (-105  ≤  Ai  ≤  105).

// it's guaranteed that there is at least one number in array less than or equal to 10.

// Output
// For each number in the array that is equal to or less than 10 print a single line contains "A[i] = X", where i is the position in the array and X is the number stored in the position.

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d", &a[i]);

//        if (a[i] <= 10)
//        {
//         printf("A[%d] = %d\n", i, a[i]);
//        }
       
//     }
    
//     return 0;
// }

// E. Lowest Number
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N numbers. Print the lowest number and its position.

// Note: if there are more than one answer print first one's position.

// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers (-105  ≤  Ai  ≤  105).

// Output
// Print the lowest number and its position (1-index).

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int lowest = INT_MAX;
    int position;



    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] < lowest)
        {
            lowest = a[i];
            position = i +1;
        }

    }

    printf("%d %d", lowest, position);
    
    return 0;
}