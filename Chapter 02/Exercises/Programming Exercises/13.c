// Distance between two points (x1, y1) and (x2, y2) is given by the formula:
//     d = sqrt((x2 - x1)^2 + (y2 - y1)^2)
// Write a program that takes four integer values x1, y1, x2 and y2 and then calculates the distance between the two points.

#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    float distance;

    printf("Enter the values of x1, y1, x2 and y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance between (%d, %d) and (%d, %d) is %.2f\n", x1, y1, x2, y2, distance);

    return 0;
}