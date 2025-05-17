// call stack
// it is a LIFO based data structure. when a function is called it is pushed in the call stack
// when the task of that function is finished, it is popped from the call stack

#include <stdio.h>

void hi(){
    printf("hi");
}

void hello(){
    hi();
}

int main() {
    hello();
    return 0;
}

// first main function is added to the stack. then hello function added. then hi function added.
// then hi is printed from the hi function and after hi is printed, hi function is popped from the stack and returned to hello function
// then the hello function is returned to main function as it is popped from the stack since it's task is done
// then main function is popped from the stack as it's task is done.
