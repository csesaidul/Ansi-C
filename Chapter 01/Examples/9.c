// Write an a program for finding the sum of only the even numbers out of 'N' numbers input by the user.
#include <stdio.h>

int main()
{
    int n, num, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &num);
        if(num % 2 == 0)
        {
            sum += num;
        }
    }

    printf("The sum of even numbers is: %d\n", sum);
    return 0;
}