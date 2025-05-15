#include <stdio.h>

int main() {
    int a[5] = {20, 100};
    printf("%p\n", &a[0]);
    printf("%p\n", a); // array name works as pointer as it stores the address of its first index
    printf("%d\n", *a); // dereferencing and printing
    printf("%d\n", *(a+1)); 
    *(a+1) = 500; // updating 1 index value
    printf("%d\n", *(a+1)); 
    return 0;
}