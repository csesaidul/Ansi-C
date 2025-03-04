// The program prints a sequence of seqares of numbers. Note the use of the shorthand operator *=.

#define N 100
#define A 2
main() {
    int a;
    a = A;
    while(a <N) {
        printf("%d\n", a);
        a *= a;
    }
}