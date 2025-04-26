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

// #include <stdio.h>

// int main() {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int a[n];
//     int freq[m+1];

//     for (int i = 0; i < m+1; i++)
//     {
//         freq[i] = 0;
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//         freq[a[i]]++;
//     }

//     // for single line we could use while loop
//     // while (scanf("%d", &a) != EOF)
//     // {
//     //     freq[a]++;
//     // }
//     // then we would not need a[n] but int a;
//     for (int i = 1; i < m+1; i++)
//     {
//        printf("%d\n", freq[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

char s1[1000001], s2[10000001];
int main() {
    scanf("%s %s", s1, s2);
    int freq1[26] = {0}; int freq2[26] = {0};
    int s1Len = strlen(s1);
    int s2Len = strlen(s2);

    for (int i = 0; i < s1Len; i++)
    {
        freq1[s1[i] - 'a'] ++;
    }

    for (int i = 0; i < s2Len; i++)
    {
        freq2[s2[i] - 'a'] ++;
    }
    int count = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] > 0 && freq2[i] )
        {
            // printf("%d %d\n", freq1[i], freq2[i]);
            
            if (freq1[i] <= freq2[i])
            {
                count += freq1[i];
            } else if (freq1[i] > freq2[i]){
                count += freq2[i];
            }
            
        }
        
    }
    printf("%d", count);
    
    
    return 0;
}