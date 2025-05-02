// #include <stdio.h>

// int main() {
//     int x, y, z;
//     scanf("%d %d %d", &x, &y, &z);

//     int total = (x - y) + z;
//     printf("%d", total);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char a[101];
//     scanf("%s", a);
//     int len = strlen(a);

//     if (a[0] == a[len - 1])
//     {
//         printf("Yes");
//     } else {
//         printf("No");
//     }
    
    
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     char a[n];
//     scanf("%s", a);
//     int len = strlen(a);
//     long long int sum = 0;

//     for (int i = 0; i < len; i++)
//     {
//         sum += a[i] - '0';
//     }

//     if (sum % 3 == 0)
//     {
//         printf("YES");
//     } else {
//         printf("NO");
//     }
    
    
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // printf("%c", 122);
//     char a[78];
//     scanf("%s", a);
//     int len = strlen(a);
//     int freq[26] = {0};

//     for (int i = 0; i < len; i++)
//     {
//         freq[a[i] - 'a']++;
//     }

//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i] < 3)
//         {
//             printf("%c", i + 'a');
//         }
        
//     }
    
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", a, b);
    int aLen = strlen(a);
    int bLen = strlen(b);
    int freq[26] = {0};
    int count = 0;

    if (aLen != bLen)
    {
       printf("No");
    } else {
        for (int i = 0; i < aLen; i++)
        {
            freq[a[i] - 'a']++;
        }

        for (int i = 0; i < bLen; i++)
        {
            freq[b[i] - 'a']++;
        }
        
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            count++;
        }
        
    }

    if (count != aLen)
    {
        printf("No");
    } else {
        printf("Yes");
    }
    
    return 0;
}