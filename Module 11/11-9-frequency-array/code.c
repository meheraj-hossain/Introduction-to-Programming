// #include <stdio.h>
// #include <string.h>

// char a[10000001];

// int main()
// {
    
//     scanf("%s", a);
//     int len = strlen(a);
//     int freq[26] = {0};
//     // printf("%s", a);

//     for (int i = 0; i < len; i++)
//         freq[a[i] - 'a']++;

//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i] > 0)
//         {
//             printf("%c : %d\n", i + 'a', freq[i]);
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n];
    int freq[m+1];

    for (int i = 0; i < m+1; i++)
    {
        freq[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }

    for (int i = 1; i < m+1; i++)
    {
       printf("%d\n", freq[i]);
    }
    
    return 0;
}