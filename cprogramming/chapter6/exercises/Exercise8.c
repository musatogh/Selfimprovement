#include <stdio.h>

int main() {

    int n, a, d = 1;

    printf("Eneter number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &a);
    for (int j = 1; j <= a; ++j) {
        printf("  ");
    }
    for (int i = 1; i <= 8 - a; ++i) {
        printf("  %d", i);
    }
    printf("\n  ");
    for (int i = 1 , t = 9 - a; t <= n; ++i) {

              printf("  %d", t);
              t++;
              if (i % 7 == 0){
                  printf("\n");
              }

    }
}