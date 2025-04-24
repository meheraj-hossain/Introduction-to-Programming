#include <stdio.h>

int main() {
    int a[4] = {1,2,3,4}; // this is how normally we initialize an array in int or float
    char x[6] = {'h','e','l','l', 'o'}; // this is how we could initialize string. 
    char b[6] = "Hello"; // this is how we can initialize string which is another super power of it
    // we just need to take at least 1 size more so that string can take \0 as input
    char s[30] = "Meheraj Hossain"; // it can take SPACE as input also;
    printf("%s\n%s\n%s\n", b, x, s);
    return 0;
}