#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int digit_seen[10] = {false};
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

    if(n >= 0) {
        printf("Repeated digit: ");
        for(int current = 0; current < 10; current++)
            if(digit_seen[current] > 1)
                printf("%d ", current);
    }
    else
        printf("No repeated digit\n");

    return 0;
}