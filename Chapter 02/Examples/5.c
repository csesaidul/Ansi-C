// Use of math functions
#include <math.h>
#include <stdio.h>
#define PI 3.14159
#define MAX 180
int main()
{
    int angle;
    float x, y;
    angle = 0;
    printf("    Angle    Cosine Value\n\n");
    while (angle <= MAX)
    {
        x = (PI / MAX) * angle;
        y = cos(x);
        printf("%15d %13.4f\n", angle, y);
        angle = angle + 10;
    }
    
}