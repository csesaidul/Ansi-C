// Output of the program shows round-off errors that can occur in computation of floating point numbers.

/*---------------------- Sum of n terms of 1/n----------------------*/
#include <stdio.h>

int main() {
    float sum, term, n;
    int count = 1;

    sum = 0;
    scanf("%f", &n);
    term = 1.0/n;
    while(count <= n) {
        sum = sum + term;
        count++;
    }
    printf("Sum = %f\n", sum);
}
