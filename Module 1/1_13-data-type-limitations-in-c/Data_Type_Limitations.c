#include <stdio.h>

int main() 
{
    // an int takes 4 bytes i.e 32 bits in the memory.
    // a float takes 4 bytes i.e 32 bits in the memory.
    // a char takes 1 byte i.e 8 bits in the memory.
    
    long long int num = 214748364788;
    double num1 = 13333333.3;
    // for long long int format specifier is %lld and for double format specifier is %lf
    printf("%lld %.2lf", num, num1);
    return 0;
}