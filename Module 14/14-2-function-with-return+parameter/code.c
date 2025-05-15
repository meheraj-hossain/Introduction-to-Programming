#include <stdio.h>

int addition(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}


int subtraction(int num1, int num2) {
    int sub = num1 - num2;
    return sub;
}

int multiplication(int num1, int num2);

int divide(int num1, int num2) {
    int div = num1 / num2;
    return div;
}

int main() {
    
    int x = addition(1,3);
    int y = subtraction(10,5);
    int z = multiplication(10,5);
    printf("%d %d %d ", x, y, z);

    int a, b;
    scanf("%d %d", &a, &b);

    int d = divide(a, b);
    printf("%d", d);

    return 0;
}

int multiplication(int num1, int num2) {
    int mul = num1 * num2;
    return mul;
}