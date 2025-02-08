// Write C program that reads the value of distance traveled by a and the time taken for the same. Next, compute the speed at which the car traveled.

#include <stdio.h>

int main() {
    float distance, time, speed;

    printf("Enter the distance traveled by the car: ");
    scanf("%f", &distance);
    printf("Enter the time taken for the car to travel the distance: ");
    scanf("%f", &time);

    speed = distance / time;
    printf("The speed at which the car traveled is %.2f\n", speed);

    return 0;
}