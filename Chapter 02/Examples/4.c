// Use of subroutines
#include <stdio.h>

int mul (int a, int b);
main()
{
    int a, b, c;
    a = 5;
    b = 10;
    c = mul(a, b);
    printf("multiplication of %d and %d is %d\n", a, b, c);
}

mul(int a, int b)
{
    return a * b;
}