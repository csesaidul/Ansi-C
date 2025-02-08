/* Write a program to display the following simple arithmetic calculator
    x =          _____________          y =          _____________
    sum =        _____________          Difference = _____________
    Product =                        Division =     */

#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("x = %d\t\t\t\t\ty = %d\n", x, y);
    printf("Sum = %d\t\t\t\tDifference = %d\n", x + y, x - y);
    printf("Product = %d\t\t\t\tDivision = %d\n", x * y, x / y);

    return 0;
}