// The example problem 3 of chapter 2

#include <stdio.h>

main(){
    int year, period;
    float amount, inrate, value;

    printf("Enter amount, interest rate, and period\n\n");
    scanf("%f %f %d", &amount, &inrate, &period);
    printf("\n");
    year = 1;

    while (year <= period) {
        value = amount + inrate * amount;
        printf("%2d Rs %8.2f\n", year, value);
        amount = value;
        year = year + 1;
    }
}