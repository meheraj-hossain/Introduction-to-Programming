#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int result;
    scanf("%d", &result);
    int first, second = INT_MIN;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == result)
            {
                first = i;
                second = j;
                break;
            }
        }

        if (first != INT_MIN && second != INT_MIN)
        {
            break;
        }
        
    }

    if (first != INT_MIN && second != INT_MIN)
    {
        printf("Yes\n");
        printf("%d %d", a[first], a[second]);
    }
    else
    {
        printf("No");
    }

    return 0;
}