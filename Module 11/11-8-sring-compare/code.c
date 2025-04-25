// Lexicographical comparison
// it means compare string alphabetically i.e a is smaller than b and z is greater than y


#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", a, b);

    // manual
    // int x = 0;

    // while (1)
    // {
    //    if (a[x] == '\0' && b[x] == '\0')
    //    {
    //     printf("similar");
    //     break;
    //    } else if (a[x] == '\0')
    //    {
    //     printf("b");
    //     break;
    //    }
    //    else if (b[x] == '\0')
    //    {
    //     printf("a");
    //     break;
    //    }
    //    else if (a[x] > b[x])
    //    {
    //     printf("a");
    //     break;
    //    }
    //    else if (b[x] > a[x])
    //    {
    //     printf("b");
    //     break;
    //    }
    //    else if (a[x] == b[x])
    //    {
    //     x++;    
    //    }
    // }

    // with strcmp
    printf("%d", strcmp(a, b));
    
    return 0;
}