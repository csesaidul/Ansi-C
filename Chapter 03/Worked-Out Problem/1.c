/*  Representation of integer constants on a 16-bit computer.
    The below program illustrates the use of integer constants on a 16-bit machine. The output of the program shows that the integer values larger than 32767 are not properly stored on a 16-bit machine. However, when they are qualified as long integer (by appending L), the values are stored correctly stored.
*/

 main() {
    printf("Integer values\n\n");
    printf("%d %d %d\n", 32767, 32767 +1, 32767 + 10);
    printf("\n");
    printf("Long integer values\n\n");
    printf("%ld %ld %ld\n", 32767L, 32767L + 1, 32767L + 10);
}