#include <stdio.h> // standard input output
#include <stdbool.h> // standard bool

int main(){
    // to declare variables, first we need to write it's data type. Then variable name. We can assign the value along with it.
    // There are some data types like, int, float, char, bool etc. 
    // int i.e integer i.e 124, -123, 0, etc. and float i.e 1.3 , 4.433, etc. takes 4 byte in the memory whereas char i.e character i.e 'a', 'b', etc. takes 1 byte in the memory.
    // 1 byte = 8 bit. 4 byte = 32 bit.

    int num1 = 11;
     // num1 = 10;
    float num2 = 1.2;
    // for char we need to use ''.
    char charcaters = 'a';
    bool boolValue = true;

    // To print variable we need format specifier. For int %d, for float %f, for char %c, for bool %d.
    // \n breaks the line
    printf("%d \n", num1);
    printf("%f \n", num2);
    // By default float show 6 digits after decimal point. We can specify how many digits to show by %.digits.
    printf("%.2f \n", num2);
    printf("%c \n", charcaters);
    printf("%d \n", boolValue);

    // take input //
    int inputNum = 5;
     // for taking input we use scanf function from stdio.h file and we need to specify the variable to take the input.
     // we need to use & sign before that variable. & gives the address of that variable
    scanf("%d", &inputNum);
    printf("%d \n", inputNum);

    // we can use a single printf, scanf fucntion to show multiple varbiables value.
    int inputNum1;
    float inputNum2;
    scanf("%d %f", &inputNum1, &inputNum2);
    printf("%d \n%.5f", inputNum1, inputNum2);

    return 0;
}