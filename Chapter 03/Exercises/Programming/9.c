// Write a C program to input an integer between 0 and 128 and print its ASCII character.

#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer between 0 and 128: ");
    scanf("%d", &n);

    if (n >= 0 && n <= 128) {
        printf("ASCII character: %c\n", n);
    } else {
        printf("Invalid input. Please enter an integer between 0 and 128.\n");
    }

    return 0;
}