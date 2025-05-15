#include <stdio.h>

void passByReference(int* p) { // int *p = &n
    printf("%p\n", p);
    *p = 100; // dereferencing and updating the value
    // printf("%d", *p);
}

int main() {
    int n = 10;
    printf("%d\n", n);
    passByReference(&n); // passing the address
    printf("%d\n", n);
    return 0;
}