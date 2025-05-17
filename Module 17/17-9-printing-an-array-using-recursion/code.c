#include <stdio.h>

void printArray(int a[], int n, int i){
    if (i == n) // base code
    {
        return;
    }
    
    
    printArray(a, n, i+1); // recursion
    printf("%d\n", a[i]);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &a[i]);
    }

    printArray(a , n, 0);
    return 0;
}