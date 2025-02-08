/* Area of a triangle is given by the formula:
        A = sqrt(s(s - a)(s - b)(s - c))
    where a, b and c are the sides of the triangle and s = (a + b + c) / 2. Write a program to compute the area of the triangle using this formula. Use the following values:
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter the sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid triangle sides\n");
        return 1;
    }

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of the triangle: %.2f\n", area);

    return 0;
}