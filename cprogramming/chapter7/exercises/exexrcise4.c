#include <stdio.h>

int main() {

    printf("This program prints the various sizes of variables according to the users' platform.\n");
    printf("Size of int: %d\n", sizeof(int));
    printf("Size of short: %d\n", sizeof(short));
    printf("Size of long: %d\n", sizeof(long));
    printf("Size of float: %d\n", sizeof(float));
    printf("Size of double: %d\n", sizeof(double));
    printf("Size of long double: %d\n", sizeof(long double));

    return 0;

}