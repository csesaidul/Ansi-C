// Write a C program to find the roots of a quadratic equation.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x1, x2;
    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);
    d = b*b - 4*a*c;
    if(d > 0) {
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %f\n", x1);
        printf("Root 2 = %f\n", x2);
    } else if(d == 0) {
        x1 = -b/(2*a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %f\n", x1);
    } else {
        printf("Roots are imaginary.\n");
    }
    return 0;
}