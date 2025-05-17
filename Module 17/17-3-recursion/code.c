// what is recursion?
// when a function calls itself. it is called recursive function
// the process happening within the function is known as recursion.

#include <stdio.h>

void hello(int n){ // recursive function
    // base code
    if (n == 11)
    {
        return; // when n == 11, it will return to main function
    }
    
    // printf("hello\n");
    
    hello(n+1); // recursion
    printf("%d\n", n);
}

// the hello function will print until the stack overflows.
// that is why we need base code to stop the recursion. it is quite similar to loop

int main() {
    int n = 10;
    hello(1);
    return 0;
}

