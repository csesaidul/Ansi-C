// Interest calculattin using for loop
#include <stdio.h>
int main() {
    float p, r, t, si;
    p = 1000;
    r = 8;
    for (t = 1; t <= 6; t++) {
        si = p * r * t / 100;
        printf("Simple Interest for %.0f years is %.2f\n", t, si);
    }
    return 0;
}
