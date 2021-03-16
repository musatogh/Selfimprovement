#include <stdio.h>

int main() {

    int n, a;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i * i <= n; ++i) {

        a = i * i;
         if (a % 2 == 0){

             printf("%d\n", a);
         }
    }
}