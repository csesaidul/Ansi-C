// Write a program to output the following multiplication table:
/*
    5 x 1 = 5
    5 x 2 = 10
    5 x 3 = 15
    ___________
    ___________
    5 x 10 = 50
*/
#include <stdio.h>
int main() {
    int num = 5;
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}