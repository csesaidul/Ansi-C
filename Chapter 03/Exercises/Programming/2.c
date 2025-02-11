// The price of one kg of rice is Rs. 16.75 and one kg of sugar is Rs. 15. Write a program to get these values form the user and display the prices as follows:
/*  *** LIST OF ITEMS ***
    Item           Price
    Rice           Rs. 16.75
    Sugar          Rs. 15.00
*/

#include <stdio.h>

int main() {
    float ricePrice, sugarPrice;

    printf("Enter the price of one kg of rice: ");
    scanf("%f", &ricePrice);

    printf("Enter the price of one kg of sugar: ");
    scanf("%f", &sugarPrice);

    printf("*** LIST OF ITEMS ***\n");
    printf("Item           Price\n");
    printf("Rice           Rs. %.2f\n", ricePrice);
    printf("Sugar          Rs. %.2f\n", sugarPrice);

    return 0;
}