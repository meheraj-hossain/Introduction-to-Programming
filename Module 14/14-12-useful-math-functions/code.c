#include <stdio.h>
#include <math.h>

int main() {
    int x = ceil(4.3);
    int y = floor(4.9);
    int z = round(3.456);
    int a = sqrt(20);
    int b = pow(3, 3); // for to the power
    int c = abs(-10); // for ignoring negetive sign
    printf("%d %d %d %d %d %d", x, y, z, a, b, c);
    return 0;
}