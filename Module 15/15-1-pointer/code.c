// what is pointer variable?
// pointer variable is a kind of variable that stores the address of other variable.
// we can find out the address using &.
// Pointer variable is required to manipulate a variable from outside of its scope.
#include <stdio.h>

void printVariable(int* p) {
    *p = 20;
}

int main() {
    int n = 10;
    printf("%d\n", n);
    printf("%p\n", &n);  // format specifier for pointer
    int* p = &n; // pointer variable
    printf("%p\n", p);
    printf("%d\n", *p); // print the value of stored address, known dereferencing accessing the value of stored address
    printVariable(p);
    printf("%d\n", n); // value updated by the function
    return 0;
}