// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int star = n * 2 - 1;
//     int space = 0;

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
        

//         for (int j = 1; j <= star; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         star -= 2;
//         space += 1; 
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int star = n * 2 - 1;
//     int space = 0;

//     for (int i = 1; i <= n; i++)
//     {

//         for (int j = 1; j <= space; j++)
//         {
//             printf(" ");
//         }
        

//         for (int j = 1; j <= star; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//         star -= 2;
//         space += 1; 
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int val = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        

        for (int j = 1; j <= val; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        val += 1;
        space -= 1; 
    }

    return 0;
}