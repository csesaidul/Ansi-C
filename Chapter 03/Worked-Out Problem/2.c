/*
The program illustrates the use of scanf function.
The first executable statement in the program is a printf, requesting the user to enter an integer number. This is known as "prompt message" and appears on the screen like
        Enter an integer number
    As soon as the user types in an integer number, the computer proceeds to compare the value with 100. If the value typed in is less than 100, then a message
        Your number is smaller than 100
is printed on the screen. Otherwise, the message
        Your number contains more than two digits
is printed on the screen.
*/

main() {
    int number;

    printf("Enter an integer number\n");
    scanf("%d", &number);

    if (number < 100)
        printf("Your number is smaller than 100\n");
    else
        printf("Your number contains more than two digits\n");
}