// Array, another fundamental topic
// there are 5 fundamental topics such as variables, conditions, loop, array, functions

// Lesson to learn
// What is array
// Why do we need array
// Accessing array elements
// Array input and output
// Array initialization  technique
// Reverse printing an array
// Summing array elements

// array example
// int a[5] int is the data_type a is the variable name and 5 is the size of the array
// array is neccessary when we need a large scale same data type variable
// array gives index to each its variable. by the index we can input and get output of array's variable
// index starts from 0

// #include <stdio.h>

// int main() {
//     int a[5];
//     a[0] = 10;
//     printf("%d", a[1]);
//     return 0;
// }

#include <stdio.h>

int main()
{
    // int a[5];
    // input and output
    // scanf("%d %d %d %d %d ", &a[0], &a[1], &a[2], &a[3], &a[4]);
    // printf("%d %d %d %d %d ", a[0], a[1], a[2], a[3], a[4]);

    // using loop
    // for (int i = 0; i < 5; i++)
    // {

    //     scanf("%d", &a[i]);
    //     printf("%d ", a[i]);
    // }

    // reversing array

    // int n;
    // scanf("%d", &n);
    // int a[n];

    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
//   printf("%d %d %d %d %d ", a[0], a[1], a[2], a[3], a[4]);
    // for (int j = n - 1 ; j >= 0; j--)
    // {
    //     printf("%d ", a[j]);
    // }
    

    // array initialization

    // to initialize we need to use {}
    // we do no need to give array size if we initialize
    // when we give size and initialize less then size, it will set 0 to last variables
    // int a[5] = {2,30,4,55};
    // initialize all elements value 0. it will work when size is fixed. not in variable size array.
    // int b[5] = {0};
    
    // for (int i = 0; i < 5; i++) 
    // {
        // printf("%d ", a[i]);
        // printf("%d ", b[i]);
    // }
    

    // sum of all values of an array

    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("%d ", sum);
    
    

    return 0;
}