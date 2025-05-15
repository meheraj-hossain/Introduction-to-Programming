#include <stdio.h>

void addition(int num1, int num2) {
    int sum = num1 + num2;
    
    printf("%d ", sum);
}

void subtraction(int num1, int num2) {
    int sub = num1 - num2;
    
    printf("%d ", sub);
}

void divide(int num1, int num2) {
    int div = num1 / num2;
    
    printf("%d ", div);
}


void multiplication(int num1, int num2);


int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    addition(x, y);
    subtraction(x, y);
    multiplication(x, y);
    divide(x, y);

    return 0;
}


void multiplication(int num1, int num2) {
    int mul = num1 * num2;
    
    printf("%d ", mul);
}
