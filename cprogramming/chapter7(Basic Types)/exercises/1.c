#include <stdio.h>

int main() {
    int i, n;
    char ch;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    ch = getchar();

    i = 1;
    while (i <= n - 1){
        i++;
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0){
            if (getchar() == '\n')
                continue;
        }
    }
    return 0;
}