#include <stdio.h>

int main(void)
{
    int digit_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0)
    {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }

    printf("Digit:       ");
    for(digit = 0; digit < 10; digit++)
        printf("%d\t", digit);

    printf("\n");

    printf("Occurences:  ");
    for(digit = 0; digit < 10; digit++)
        printf("%d\t", digit_seen[digit]);



    return 0;
}