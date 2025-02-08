// Write a C program that makes use of different data types to input and print student's name, age and average marks.

#include <stdio.h>

int main() {
    char name[50];
    int age;
    float marks;

    printf("Enter the student's name: ");
    scanf("%[^\n]", name);
    printf("Enter the student's age: ");
    scanf("%d", &age);
    printf("Enter the student's average marks: ");
    scanf("%f", &marks);

    printf("Student's name: %s\n", name);
    printf("Student's age: %d\n", age);
    printf("Student's average marks: %.2f\n", marks);

    return 0;
}