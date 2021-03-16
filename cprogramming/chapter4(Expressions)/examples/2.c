#include <stdio.h>

int main() {
    int i = 1, j, k = 1 + (j = i);
    printf("%d %d %d\n", i, j, k);

    printf("i is %d\n", ++i);
    printf("i is %d\n", i);
 }