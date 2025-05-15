// pass by value
// when we pass the variable to a function from main function it becomes pass by value. 
// we can not change the main function variable's value by manipulating from outside of it
#include <stdio.h>

void passByValue(int v) {
    printf("%d\n", v);
    v = 20;
    printf("%d\n", v);
}

int main() {
    int n = 10;
    // printf("%d\n", n);
    passByValue(n);
    printf("%d\n", n);
    return 0;
}