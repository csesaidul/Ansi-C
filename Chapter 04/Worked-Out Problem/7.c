// A program using a cast to evaluate the equation sum = 1/1 + 1/2 + 1/3 + ... n terms.

#include <stdio.h>

int main() {
    float sum;
    int n;
    sum = 0;
    for(n = 1; n <= 10; ++n)
    {
        sum = sum + 1 /(float)n;
        printf("%2d = %6.2f\n", sum);
    }
}