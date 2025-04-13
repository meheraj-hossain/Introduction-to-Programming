// C. Simple Calculator
// time limit per test1 second
// memory limit per test256 megabytes
// Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.

// Input
// Only one line containing two separated numbers X, Y (1  ≤  X, Y  ≤  105).

// Output
// Print 3 lines that contain the following in the same order:

// "X + Y = summation result" without quotes.
// "X * Y = multiplication result" without quotes.
// "X - Y = subtraction result" without quotes.


// #include <stdio.h>

// int main() {
//     long long int x, y;
//     scanf("%lld %lld", &x, &y);




//     printf("%lld + %lld = %lld\n", x, y, x+y);
//     printf("%lld * %lld = %lld\n", x, y, x*y);
//     printf("%lld - %lld = %lld", x, y, x-y);
//     return 0;
// }



// D. Difference
// time limit per test1 second
// memory limit per test256 megabytes
// Given four numbers A, B, C and D. Print the result of the following equation :

//  X = (A * B) - (C * D).

// Input
// Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

// Output
// Print "Difference  =  " without quotes followed by the equation result.


#include <stdio.h>

int main() {
    long long int w, x, y, z;
    scanf("%lld %lld %lld %lld", &w, &x, &y, &z);

    printf("Difference = %lld", (w*x) - (y*z));
    return 0;
}