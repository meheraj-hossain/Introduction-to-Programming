// #include <stdio.h>

// int main() {
//     int x, y, z;
//     scanf("%d %d %d", &x, &y, &z);

//     int sum = x + y + z;
//     printf("%d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     long long int x, y;
//     scanf("%lld %lld", &x, &y);

//     long long int multi = x * y;

//     printf("%lld", multi);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int x;
//     scanf("%d", &x);

//     if (x >= 1000)
//     {
//         printf("Three Kacchi");
//     } else if (x >= 500)
//     {
//         printf("One Large Pizza");
//     } else if (x < 500 && x >= 250 )
//     {
//         printf("Three Small Burger");
//     } else  if (x >= 100)
//     {
//         printf("Three Fuchka");
//     } else {
//         printf("Nothing");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int x;
//     scanf("%d", &x);

//     if (x % 3 == 0)
//     {
//         printf("Yes");
//     } else {
//         printf("No");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int x;
//     scanf("%d", &x);

//     for (int i = 1; i <= x; i++)
//     {
//         printf("%d ", i);
//         if (i % 3 == 0 || i % 5 == 0)
//         {
//             printf("Yes\n");
//         } else {
//             printf("No\n");
//         }

//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {

//     char a;
//     scanf("%c", &a);
//     if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
//     {
//         printf("Vowel");
//     } else {
//         printf("Consonant");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int count0 = 0;
//     int count1 = 0;
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);

//         if (a[i] == 0)
//         {
//             count0++;
//         }
//         else if (a[i] == 1)
//         {
//             count1++;
//         }

//     }

//     printf("%d %d", count0, count1);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int x;
//     scanf("%d", &x);
//     int a[x];
//     for (int i = 0; i < x; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int y;
//     scanf("%d", &y);

//     for (int i = 0; i < x; i++)
//     {
//         if (i == y - 1)
//         {
//             if (a[i] == 1)
//             {
//                a[i] = 0;
//             } else {
//                 a[i] = 1;
//             }
//         }

//         printf("%d ", a[i]);

//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int x;
//     scanf("%d", &x);

//     for (int i = 1; i <= x; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }

//     for (int m = 1; m < x; m++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             printf(" ");
//         }
//         for (int i = 1; i <= x - m; i++)
//         {
//             printf("%d", i);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] >= max)
        {
           max = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
       printf("%d ", max - a[i]);
    }
    
    return 0;
}