#include <stdio.h>

void addition() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    printf("%d ", sum);
}


void subtraction() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sub = num1 - num2;
    printf("%d ", sub);
}


void multiplication();

void divide() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int div = num1 / num2;
    printf("%d ", div);
}


int main() {

    addition();
    subtraction();
    multiplication();
    divide();
    return 0;
}


void multiplication() {

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int mul = num1 * num2;
    printf("%d ", mul);
}
