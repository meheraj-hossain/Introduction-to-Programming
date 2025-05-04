// how i used to do
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int  j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }

// new way (less modification)
// #include <stdio.h>

// int main() {
//     int n, star = 1;
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) // for printing line
//     {
//         for (int  j = 1; j <= star; j++) // for printing star
//         {
//             printf("*");
//         }
//         star++; // increment star
//         printf("\n");
       
//     }
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     int  star = n;

//     for (int i = 1; i <= n; i++) // for printing line
//     {
//         for (int  j = 1; j <= star; j++) // for printing star
//         {
//             printf("*");
//         }
//         star--; // increment star
//         printf("\n");
       
//     }
    
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int  star = n;

    for (int i = 1; i <= n; i++) // for printing line
    {
        for (int  j = 1; j <= star; j++) // for printing star
        {
            printf("*");
        }
        star -= 2; // increment star
        printf("\n");
       
    }
    
    return 0;
}