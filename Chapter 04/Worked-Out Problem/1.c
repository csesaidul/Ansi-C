// The program shows the use of integer arithmetic to convert a given number of days into months and days.

#include <stdio.h>

int main() {
    int days, months, remainingDays;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    months = days / 30;
    remainingDays = days % 30;

    printf("Months: %d\n", months);
    printf("Days: %d\n", remainingDays);

    return 0;
}