#include <stdio.h>
#include <string.h>

char a[10000001];

int main()
{
    
    scanf("%s", a);
    int len = strlen(a);
    int freq[26] = {0};
    // printf("%s", a);

    for (int i = 0; i < len; i++)
        freq[a[i] - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}