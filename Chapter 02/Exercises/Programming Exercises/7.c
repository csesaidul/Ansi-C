// Given two integers 20 and 10, write a program that uses a function add() to add these two numbers and sub() to find the difference between these two numbers.

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    int a = 20, b = 10;
    printf("Sum of %d and %d is %d\n", a, b, add(a, b));
    printf("Difference between %d and %d is %d\n", a, b, sub(a, b));
    return 0;
}