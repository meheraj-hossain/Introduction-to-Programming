#include <stdio.h>

int addition() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    return sum;
}


int subtraction() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    int sub = num1 - num2;
    return sub;
}

int multiplication();

int divide() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    int div = num1 / num2;
    return div;
}

int main() {
    
    int x = addition();
    int y = subtraction();
    int z = multiplication();
    int d = divide();
    printf("%d %d %d %d", x, y, z, d);


    return 0;
}

int multiplication() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    
    int mul = num1 * num2;
    return mul;
}