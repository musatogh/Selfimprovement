#include <stdio.h>

int main() {

    int i, n;

    printf("How many numbers do you want to revers: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d number: ", n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    printf("In reverrse order:");
    for (int i = n - 1; i >= 0 ; --i)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}