// Write a program that requests two float type numbers from the user and then divides the first number by the second number and display the result along with the numbers.

#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    result = num1 / num2;
    printf("The result of %.2f divided by %.2f is %.2f\n", num1, num2, result);

    return 0;
}