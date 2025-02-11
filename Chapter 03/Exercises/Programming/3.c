// Write program to count and print the number of negative and positive numbers in a given set of numbers. Test your program with a suitable set of numbers. Use scanf to read the numbers. Reading should be terminated when the user enters a zero.

#include <stdio.h>

int main() {
    int n, positiveCount = 0, negativeCount = 0;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n == 0) {
            break;
        }

        if (n > 0) {
            positiveCount++;
        } else {
            negativeCount++;
        }
    }

    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);

    return 0;
}