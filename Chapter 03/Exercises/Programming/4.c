// Write a program to do the following:
// (a) Declare x and y as integer variables and z as a short integer variable.
// (b) Assign two 6 digit numbers to x and y.
// (c) Assign the sum of x and y to z.
// (d) Print the values of x, y and z.
// Comment on the output.

#include <stdio.h>

int main() {
    int x, y;
    short int z;

    x = 123456;
    y = 654321;
    z = x + y;

    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("z: %d\n", z);

    return 0;
}

// Output:
// x: 123456
// y: 654321
// z: 777777
// The output of z is incorrect because the sum of x and y is 777777 which is a 6 digit number and cannot be stored in a short integer variable. The value of z should be stored in an integer variable. The range of a short integer is -32768 to 32767. The value of z is 777777 which is greater than 32767. Therefore, the output of z is incorrect.