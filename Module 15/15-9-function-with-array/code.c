// by defult pass by reference is used in case of array

#include <stdio.h>

void functionWithArray(int x[], int s) {
    *(x+1) = 600;
    // for (int i = 0; i < s; i++)
    // {
    //    printf("%d\n", x[i]);
    // }
    printf("\n");
    
}

int main() {
    int a[5] = {20, 30, 40, 50, 60};
     for (int i = 0; i < 5; i++)
    {
       printf("%d\n", a[i]);
    }
    
    functionWithArray(a, 5);
    
    for (int i = 0; i < 5; i++)
    {
       printf("%d\n", a[i]);
    }
    return 0;
}