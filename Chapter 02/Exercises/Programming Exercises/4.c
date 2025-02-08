// Given the values of three variables a, b and c, write aprogram to compute and display the value of x, where
// x = a / (b - c)
// Use the following values:
// (a) a = 250, b = 85, c = 25
// (b) a = 300, b = 70, c = 50

#include <stdio.h>

int main() {
    int a, b, c;
    float x;

    a = 250;
    b = 85;
    c = 25;
    x = a / (b - c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("x = %.2f\n", x);

    a = 300;
    b = 70;
    c = 50;
    x = a / (b - c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("x = %.2f\n", x);

    return 0;
}