// Modify the below program to provide border lines to the address.
/*
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
*/

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    int a = 20, b = 10;
    printf("______________________________________\n");
    printf("| Sum of %d and %d is %d              |\n", a, b, add(a, b));
    printf("| Difference between %d and %d is %d  |\n", a, b, sub(a, b));
    printf("______________________________________\n");
    return 0;
}