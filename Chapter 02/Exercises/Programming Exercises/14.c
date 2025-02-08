// A point on the circumference of a circle whose center is (0, 0) is (4, 5). Write a program to compute perimeter and area of the circle.

#include <stdio.h>
#include <math.h>

int main() {
    float x = 4, y = 5, r, perimeter, area;

    r = sqrt(pow(x, 2) + pow(y, 2));
    perimeter = 2 * M_PI * r;
    area = M_PI * pow(r, 2);

    printf("Perimeter of the circle: %.2f\n", perimeter);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}