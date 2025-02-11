// Write a C program to input the amount value and break it into the smallest possible Indian currency notes.

#include <stdio.h>

int main() {
    int amount, notes[7] = {2000, 500, 200, 100, 50, 20, 10};

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("Indian currency notes:\n");

    for (int i = 0; i < 7; i++) {
        printf("%d notes of Rs. %d\n", amount / notes[i], notes[i]);
        amount %= notes[i];
    }

    return 0;
}