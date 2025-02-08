// The line joining the points (2, 2) and (5, 6) which lie on the circumference of a circle is the diameter of the circle. Write a program to compute the perimeter and area of the circle.

#include <stdio.h>
#include <math.h>

int main() {
    float x1 = 2, y1 = 2, x2 = 5, y2 = 6, r, perimeter, area;

    r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) / 2;
    perimeter = 2 * M_PI * r;
    area = M_PI * pow(r, 2);

    printf("Perimeter of the circle: %.2f\n", perimeter);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}