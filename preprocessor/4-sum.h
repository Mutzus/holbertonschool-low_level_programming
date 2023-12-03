#include <stdio.h>

#define SUM(x, y) ((x) + (y))

int main(void) {
    int a = 5, b = 10;
    printf("Sum of %d and %d is %d\n", a, b, SUM(a, b));

    double x = 3.5, y = 2.5;
    printf("Sum of %.2f and %.2f is %.2f\n", x, y, SUM(x, y));

    return 0;
}
